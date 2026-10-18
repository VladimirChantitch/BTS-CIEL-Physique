// autotest_uno.ino : recette d'une carte Arduino Uno, sans aucun câblage
// TP 2.3 de physique, BTS CIEL
// Carte à choisir dans l'IDE : « Arduino Uno » (ATmega328P, 16 MHz)
// Moniteur série : 115200 bauds. Ne rien brancher sur la carte.
//
// Au démarrage : autotest complet (environ 15 s), puis attente d'une commande
//   a : relancer l'autotest
//   v : 100 mesures de la référence interne de 1,1 V (tension d'alimentation)
//   h : mode horloge, millis() chaque seconde (une lettre pour arrêter)
//   t : capteur de température interne, 10 mesures (prolongement BTS2)

#include <EEPROM.h>

// ---------- Broches testées ----------
// D2 à D13, puis A0 à A5 (aussi appelées D14 à D19).
// D0 et D1 ne sont pas testées : elles portent la liaison série avec le PC.
const uint8_t NB_BROCHES = 18;
const uint8_t BROCHES[NB_BROCHES] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
                                     A0, A1, A2, A3, A4, A5};
const uint8_t INDICE_D13 = 11;   // place de D13 dans le tableau
const uint8_t INDICE_A0 = 12;    // place de A0 dans le tableau

// État final d'une broche
const uint8_t BROCHE_OK = 0;
const uint8_t BROCHE_HS = 1;
const uint8_t NON_CONCLUANT = 2; // seulement pour D13

// Réglages du registre ADMUX (fiche technique, tableaux 24-3 et 24-4)
// REFS1 REFS0 = 0 1 : référence AVcc (la tension d'alimentation Vcc)
// REFS1 REFS0 = 1 1 : référence interne de 1,1 V
// MUX3 à MUX0 = 1111 : masse interne (0 V) ; 1110 : référence 1,1 V
// (bandgap) ; 1000 : capteur de température
const uint8_t REGLAGE_MASSE = _BV(REFS0) | 0x0F;
const uint8_t REGLAGE_BANDGAP = _BV(REFS0) | 0x0E;
const uint8_t REGLAGE_TEMPERATURE = _BV(REFS1) | _BV(REFS0) | 0x08;

// ---------- Résultats ----------
bool okRappel[NB_BROCHES];     // test a : lit HIGH avec la résistance de rappel
bool okSortie[NB_BROCHES];     // test b : la sortie impose LOW puis HIGH
bool enPont[NB_BROCHES];       // test c : broche reliée à une autre broche
bool okAnalogique[NB_BROCHES]; // A0 à A5 : CAN à environ 1023 puis 0
uint8_t etat[NB_BROCHES];      // BROCHE_OK, BROCHE_HS ou NON_CONCLUANT
int nHaut[6];                  // CAN avec rappel (attendu : environ 1023)
int nBas[6];                   // CAN en sortie à LOW (attendu : environ 0)

const uint8_t MAX_PONTS = 8;
uint8_t pontA[MAX_PONTS];      // paires de broches reliées (indices)
uint8_t pontB[MAX_PONTS];
uint8_t nbPonts = 0;

uint8_t nbHS = 0;              // nombre de broches hors service
float nMasse = 0;              // voie interne 0 V (attendu : 0)
float nRef = 0;                // voie interne 1,1 V (environ 225 sous 5 V)
float vccEstimee = 0;          // tension d'alimentation estimée (V)
bool canOk = false;
unsigned int erreursEeprom = 0;
float nTemperature = 0;        // voie interne 8 : capteur de température
uint8_t verdict = 0;           // 0 : BONNE ; 1 : RÉSERVE ; 2 : HORS SERVICE

unsigned int mesures[100];     // 100 conversions de la commande v

bool modeHorloge = false;
unsigned long prochainEnvoi = 0;
bool ledAllumee = false;

// ---------- Affichage ----------

// Affiche le nom d'une broche (D2 à D13, A0 à A5) sur 3 caractères
void ecrireNom(uint8_t broche) {
  if (broche >= A0) {
    Serial.print('A');
    Serial.print(broche - A0);
    Serial.print(' ');
  } else {
    Serial.print('D');
    Serial.print(broche);
    if (broche < 10) Serial.print(' ');
  }
}

// Affiche un nombre avec une virgule décimale (tableur réglé en français)
void ecrireDecimal(float x, uint8_t decimales) {
  if (x < 0) {
    Serial.print('-');
    x = -x;
  }
  unsigned long facteur = 1;
  for (uint8_t k = 0; k < decimales; k++) facteur *= 10;
  // arrondi au plus proche
  unsigned long entier = (unsigned long)(x * facteur + 0.5);
  Serial.print(entier / facteur);
  if (decimales > 0) {
    Serial.print(',');
    unsigned long reste = entier % facteur;
    // zéros après la virgule (par exemple 5,05 et non 5,5)
    for (unsigned long p = facteur / 10; p > 1 && reste < p; p /= 10) {
      Serial.print('0');
    }
    Serial.print(reste);
  }
}

void ligne() {
  Serial.println(F("------------------------------------------------------------"));
}

// Liste des broches HS séparées par des espaces, ou « - » s'il n'y en a pas
void ecrireListeHS() {
  if (nbHS == 0) {
    Serial.print('-');
    return;
  }
  bool premier = true;
  for (uint8_t i = 0; i < NB_BROCHES; i++) {
    if (etat[i] == BROCHE_HS) {
      if (!premier) Serial.print(' ');
      if (BROCHES[i] >= A0) {
        Serial.print('A');
        Serial.print(BROCHES[i] - A0);
      } else {
        Serial.print('D');
        Serial.print(BROCHES[i]);
      }
      premier = false;
    }
  }
}

// ---------- Convertisseur analogique numérique (CAN), par registres ----------

// Lance une conversion sur la voie choisie dans ADMUX, renvoie 0 à 1023
unsigned int convertir() {
  ADCSRA |= _BV(ADSC);                   // ADSC = 1 : départ de la conversion
  while (bit_is_set(ADCSRA, ADSC)) { }   // ADSC repasse à 0 à la fin
  return ADC;                            // registre de 16 bits (ADCL, ADCH)
}

// Choisit la référence et la voie, attend la stabilisation,
// jette deux conversions, puis renvoie la moyenne de n conversions
float lireVoieInterne(uint8_t reglage, unsigned int attenteMs, uint8_t n) {
  ADMUX = reglage;
  delay(attenteMs);
  // la fiche technique conseille de jeter les premières conversions
  convertir();
  convertir();
  unsigned long somme = 0;
  for (uint8_t k = 0; k < n; k++) somme += convertir();
  return (float)somme / n;
}

// Remet le CAN dans l'état attendu par analogRead() : référence AVcc
void restaurerCan() {
  ADMUX = _BV(REFS0);      // référence AVcc, voie A0
  delay(5);                // le condensateur de la broche AREF remonte à Vcc
  convertir();             // conversion jetée
}

// ---------- Tests des broches ----------

// Mémorise un pont entre les broches d'indices i et j (une fois par paire)
void noterPont(uint8_t i, uint8_t j) {
  uint8_t petit = (i < j) ? i : j;
  uint8_t grand = (i < j) ? j : i;
  for (uint8_t k = 0; k < nbPonts; k++) {
    if (pontA[k] == petit && pontB[k] == grand) return;   // déjà notée
  }
  if (nbPonts < MAX_PONTS) {
    pontA[nbPonts] = petit;
    pontB[nbPonts] = grand;
    nbPonts++;
  }
}

void testerBroches() {
  // a) toutes les broches en entrée avec la résistance de rappel interne
  //    (20 à 50 kΩ vers Vcc) : chacune doit lire HIGH
  for (uint8_t i = 0; i < NB_BROCHES; i++) {
    pinMode(BROCHES[i], INPUT_PULLUP);
    enPont[i] = false;
    okAnalogique[i] = true;              // modifié plus loin pour A0 à A5
  }
  delay(10);
  for (uint8_t i = 0; i < NB_BROCHES; i++) {
    // LOW malgré le rappel : broche reliée à la masse ?
    okRappel[i] = (digitalRead(BROCHES[i]) == HIGH);
  }

  // b) chaque broche, seule, devient une sortie : elle doit imposer LOW,
  //    puis HIGH. digitalRead lit le niveau réel de la broche (registre
  //    PINx), et non l'ordre donné.
  for (uint8_t i = 0; i < NB_BROCHES; i++) {
    uint8_t b = BROCHES[i];
    digitalWrite(b, LOW);                // coupe la résistance de rappel
    pinMode(b, OUTPUT);                  // sortie au niveau bas
    delayMicroseconds(10);
    bool bas = (digitalRead(b) == LOW);
    digitalWrite(b, HIGH);               // sortie au niveau haut
    delayMicroseconds(10);
    bool haut = (digitalRead(b) == HIGH);
    pinMode(b, INPUT_PULLUP);            // retour en entrée après 30 µs
    okSortie[i] = bas && haut;
  }

  // c) ponts de soudure : une seule broche à LOW,
  //    toutes les autres doivent rester à HIGH
  nbPonts = 0;
  for (uint8_t i = 0; i < NB_BROCHES; i++) {
    uint8_t b = BROCHES[i];
    digitalWrite(b, LOW);
    pinMode(b, OUTPUT);
    delayMicroseconds(20);
    for (uint8_t j = 0; j < NB_BROCHES; j++) {
      // une broche déjà à LOW au test a ne prouve rien
      if (j == i || !okRappel[j]) continue;
      // j suit i : les deux broches sont reliées
      if (digitalRead(BROCHES[j]) == LOW) {
        enPont[i] = true;
        enPont[j] = true;
        noterPont(i, j);
      }
    }
    pinMode(b, INPUT_PULLUP);
  }
  delay(2);
}

// A0 à A5 : le CAN doit lire environ 1023 avec la résistance de rappel,
// puis environ 0 quand la broche est une sortie à LOW
void testerAnalogiques() {
  for (uint8_t k = 0; k < 6; k++) {
    uint8_t i = INDICE_A0 + k;
    uint8_t b = BROCHES[i];
    pinMode(b, INPUT_PULLUP);
    delay(2);
    analogRead(b);                       // conversion jetée (changement de voie)
    nHaut[k] = analogRead(b);
    digitalWrite(b, LOW);
    pinMode(b, OUTPUT);
    delayMicroseconds(10);
    nBas[k] = analogRead(b);
    pinMode(b, INPUT_PULLUP);
    okAnalogique[i] = (nHaut[k] >= 1000) && (nBas[k] <= 20);
  }
}

void evaluerBroches() {
  nbHS = 0;
  for (uint8_t i = 0; i < NB_BROCHES; i++) {
    if (okRappel[i] && okSortie[i] && !enPont[i] && okAnalogique[i]) {
      etat[i] = BROCHE_OK;
    } else if (i == INDICE_D13 && !okRappel[i] && okSortie[i] && !enPont[i]) {
      etat[i] = NON_CONCLUANT;           // LED L reliée directement à D13 (Q5)
    } else {
      etat[i] = BROCHE_HS;
      nbHS++;
    }
  }
}

void afficherBroches() {
  Serial.println(F("1) Broches D2 à D13 et A0 à A5"));
  Serial.print(F("   a : entrée avec rappel (attendu HIGH) ; "));
  Serial.println(F("b : sortie LOW puis HIGH ; c : pont"));
  for (uint8_t i = 0; i < NB_BROCHES; i++) {
    Serial.print(F("   "));
    ecrireNom(BROCHES[i]);
    Serial.print(F(" : a "));
    Serial.print(okRappel[i] ? F("ok ") : F("NON"));
    Serial.print(F("  b "));
    Serial.print(okSortie[i] ? F("ok ") : F("NON"));
    Serial.print(F("  c "));
    Serial.print(enPont[i] ? F("PONT") : F("ok  "));
    if (i >= INDICE_A0) {
      Serial.print(F("  CAN "));
      Serial.print(nHaut[i - INDICE_A0]);
      Serial.print(F(" / "));
      Serial.print(nBas[i - INDICE_A0]);
    }
    Serial.print(F("  -> "));
    if (etat[i] == BROCHE_OK) {
      Serial.println(F("OK"));
    } else if (etat[i] == NON_CONCLUANT) {
      Serial.println(F("NON CONCLUANT (LED L reliée directement à D13 ?)"));
    } else {
      Serial.println(F("HS"));
    }
  }
  for (uint8_t k = 0; k < nbPonts; k++) {
    Serial.print(F("   Pont détecté entre "));
    ecrireNom(BROCHES[pontA[k]]);
    Serial.print(F("et "));
    ecrireNom(BROCHES[pontB[k]]);
    Serial.println();
  }
}

// ---------- CAN : voies internes ----------

void testerCanInterne() {
  nMasse = lireVoieInterne(REGLAGE_MASSE, 2, 10);
  nRef = lireVoieInterne(REGLAGE_BANDGAP, 2, 50);
  // le « voltmètre caché » : Vcc = 1,1 x 1023 / N
  vccEstimee = (nRef > 1.0) ? 1.1 * 1023.0 / nRef : 0.0;
  canOk = (nMasse <= 5.0) && (nRef >= 170.0) && (nRef <= 310.0);
}

// ---------- EEPROM : 1024 octets, au moins 100 000 écritures par octet ----------

unsigned int testerEeprom() {
  unsigned int erreurs = 0;
  unsigned int taille = EEPROM.length();   // 1024 sur l'ATmega328P
  for (unsigned int i = 0; i < taille; i++) {
    uint8_t sauvegarde = EEPROM.read(i);   // contenu d'origine de l'octet
    // update n'écrit que si la valeur change (moins d'usure)
    EEPROM.update(i, 0x55);                // 0101 0101
    if (EEPROM.read(i) != 0x55) erreurs++;
    EEPROM.update(i, 0xAA);                // 1010 1010
    if (EEPROM.read(i) != 0xAA) erreurs++;
    EEPROM.update(i, sauvegarde);          // restauration du contenu d'origine
    if (EEPROM.read(i) != sauvegarde) erreurs++;
    if (i % 64 == 63) Serial.print('.');   // un point tous les 64 octets
  }
  return erreurs;
}

// ---------- Capteur de température interne (prolongement BTS2) ----------

void testerTemperature() {
  // changement de référence (AVcc vers 1,1 V) : 100 ms pour que
  // le condensateur de la broche AREF se décharge
  nTemperature = lireVoieInterne(REGLAGE_TEMPERATURE, 100, 20);
  restaurerCan();
}

// Formule empirique répandue pour l'ATmega328P : capteur NON étalonné,
// erreur possible de 10 °C ou plus sur la valeur absolue
float estimerTemperature(float n) {
  return (n - 324.31) / 1.22;
}

// ---------- LED L ----------

void observerLedL() {
  Serial.print(F("5) LED L : D13 en entrée avec rappel pendant 3 s, "));
  Serial.println(F("regardez la LED L"));
  Serial.print(F("   (vive : commandée par un AOP ; "));
  Serial.println(F("faible lueur : reliée directement à D13)"));
  pinMode(13, INPUT_PULLUP);
  delay(3000);
  digitalWrite(13, LOW);
  pinMode(13, OUTPUT);                   // LED L éteinte
  ledAllumee = false;
}

// ---------- Autotest complet et verdict ----------

void calculerVerdict() {
  if (!canOk || erreursEeprom > 0 || nbHS >= 4) {
    verdict = 2;                         // HORS SERVICE
  } else if (nbHS >= 1) {
    verdict = 1;                         // BONNE AVEC RÉSERVE
  } else {
    verdict = 0;                         // BONNE
  }
}

void autotest() {
  modeHorloge = false;
  ligne();
  Serial.print(F("AUTOTEST ARDUINO UNO (TP 2.3) : "));
  Serial.println(F("ne rien brancher sur la carte"));
  ligne();

  testerBroches();
  testerAnalogiques();
  evaluerBroches();
  afficherBroches();

  Serial.println(F("2) Convertisseur analogique numérique : voies internes"));
  testerCanInterne();
  Serial.print(F("   Masse interne (attendu 0) : N = "));
  ecrireDecimal(nMasse, 1);
  Serial.println(nMasse <= 5.0 ? F("  -> OK") : F("  -> ANORMAL"));
  Serial.print(F("   Référence interne 1,1 V : N moyen = "));
  ecrireDecimal(nRef, 2);
  bool refOk = (nRef >= 170.0) && (nRef <= 310.0);
  Serial.println(refOk ? F("  -> OK") : F("  -> HORS PLAGE"));
  Serial.print(F("   Tension d'alimentation estimée : "));
  Serial.print(F("Vcc = 1,1 x 1023 / N = "));
  ecrireDecimal(vccEstimee, 2);
  Serial.println(F(" V"));
  Serial.print(F("   (non étalonnée : la référence vaut "));
  Serial.println(F("entre 1,0 et 1,2 V selon les puces)"));
  if (!canOk) {
    Serial.print(F("   Refaire le test sur un autre port USB ; "));
    Serial.println(F("si le défaut persiste : CAN HS"));
  }
  if (canOk && vccEstimee < 4.3) {
    Serial.print(F("   Vcc estimée basse : "));
    Serial.println(F("refaire la mesure sur un autre port USB"));
  }

  Serial.println(F("3) EEPROM : 1024 octets, motifs 0x55 et 0xAA (environ 10 s)"));
  Serial.print(F("   "));
  erreursEeprom = testerEeprom();
  Serial.print(' ');
  Serial.print(erreursEeprom);
  Serial.println(erreursEeprom == 0 ? F(" erreur -> OK") : F(" erreur(s) -> HS"));

  Serial.print(F("4) Capteur de température interne "));
  Serial.println(F("(non étalonné : ±10 °C au mieux)"));
  testerTemperature();
  Serial.print(F("   N brut = "));
  ecrireDecimal(nTemperature, 1);
  Serial.print(F(" ; estimation très approximative : "));
  ecrireDecimal(estimerTemperature(nTemperature), 0);
  Serial.println(F(" °C"));

  observerLedL();

  calculerVerdict();
  ligne();
  Serial.print(F("VERDICT : "));
  if (verdict == 0) Serial.println(F("BONNE"));
  else if (verdict == 1) Serial.println(F("BONNE AVEC RÉSERVE"));
  else Serial.println(F("HORS SERVICE"));
  if (nbHS > 0) {
    Serial.print(F("Broches HS, à éviter : "));
    ecrireListeHS();
    Serial.println();
  }
  if (etat[INDICE_D13] == NON_CONCLUANT) {
    Serial.print(F("D13 non concluant : normal si la LED L "));
    Serial.println(F("est reliée directement à D13 (Q5)"));
  }
  ligne();
  Serial.println(F("Ligne à copier dans le tableur de la classe :"));
  Serial.print(F("nb_hs;broches_hs;d13;can;n_bg;"));
  Serial.println(F("vcc_est_v;eeprom_err;temp_brut;verdict"));
  Serial.print(nbHS);
  Serial.print(';');
  ecrireListeHS();
  Serial.print(';');
  if (etat[INDICE_D13] == BROCHE_OK) Serial.print(F("OK"));
  else if (etat[INDICE_D13] == NON_CONCLUANT) Serial.print(F("NC"));
  else Serial.print(F("HS"));
  Serial.print(';');
  Serial.print(canOk ? F("OK") : F("HS"));
  Serial.print(';');
  ecrireDecimal(nRef, 2);
  Serial.print(';');
  ecrireDecimal(vccEstimee, 2);
  Serial.print(';');
  Serial.print(erreursEeprom);
  Serial.print(';');
  ecrireDecimal(nTemperature, 0);
  Serial.print(';');
  if (verdict == 0) Serial.println(F("BONNE"));
  else if (verdict == 1) Serial.println(F("RESERVE"));
  else Serial.println(F("HS"));
  ligne();
}

// ---------- Commande v : 100 mesures de la référence interne ----------

void mesurerReference() {
  Serial.print(F("100 conversions de la référence interne 1,1 V "));
  Serial.println(F("(référence du CAN : Vcc)"));
  ADMUX = REGLAGE_BANDGAP;
  delay(2);
  convertir();                           // conversions jetées
  convertir();
  for (uint8_t k = 0; k < 100; k++) {
    mesures[k] = convertir();
    Serial.print(mesures[k]);
    Serial.print((k % 10 == 9) ? '\n' : ' ');   // 10 valeurs par ligne
    delay(10);                           // une conversion toutes les 10 ms
  }
  restaurerCan();

  unsigned long somme = 0;
  unsigned int nMin = 1023;
  unsigned int nMax = 0;
  for (uint8_t k = 0; k < 100; k++) {
    somme += mesures[k];
    if (mesures[k] < nMin) nMin = mesures[k];
    if (mesures[k] > nMax) nMax = mesures[k];
  }
  float moyenne = somme / 100.0;
  float sommeCarres = 0;
  for (uint8_t k = 0; k < 100; k++) {
    float e = mesures[k] - moyenne;
    sommeCarres += e * e;
  }
  // écart-type de l'échantillon (division par n - 1 = 99)
  float s = sqrt(sommeCarres / 99.0);

  Serial.print(F("N moyen = "));
  ecrireDecimal(moyenne, 2);
  Serial.print(F(" ; s = "));
  ecrireDecimal(s, 2);
  Serial.print(F(" ; N min = "));
  Serial.print(nMin);
  Serial.print(F(" ; N max = "));
  Serial.println(nMax);
  if (moyenne > 1.0) {
    Serial.print(F("Vcc estimée = 1,1 x 1023 / N moyen = "));
    ecrireDecimal(1.1 * 1023.0 / moyenne, 3);
    Serial.println(F(" V"));
  }
}

// ---------- Commande t : capteur de température (prolongement BTS2) ----------

void mesurerTemperature() {
  Serial.print(F("Capteur de température interne : "));
  Serial.println(F("10 mesures, une par seconde"));
  for (uint8_t k = 0; k < 10; k++) {
    unsigned int attente = (k == 0) ? 100 : 2;  // 100 ms au changement de référence
    float n = lireVoieInterne(REGLAGE_TEMPERATURE, attente, 20);
    Serial.print(F("N brut = "));
    ecrireDecimal(n, 1);
    Serial.print(F(" ; estimation très approximative : "));
    ecrireDecimal(estimerTemperature(n), 0);
    Serial.println(F(" °C"));
    delay(1000);
  }
  restaurerCan();
}

// ---------- Commande h : mode horloge ----------

void demarrerHorloge() {
  Serial.print(F("Mode horloge : une ligne H;millis par seconde "));
  Serial.println(F("(une lettre pour arrêter)"));
  modeHorloge = true;
  prochainEnvoi = millis();
}

void envoyerHorloge() {
  if ((long)(millis() - prochainEnvoi) >= 0) {
    // temps de la carte en ms, compté par son propre oscillateur
    unsigned long t = millis();
    Serial.print(F("H;"));
    Serial.println(t);
    // grille fixe : les retards d'envoi ne s'accumulent pas
    prochainEnvoi += 1000;
    // la LED L change d'état à chaque envoi
    ledAllumee = !ledAllumee;
    digitalWrite(13, ledAllumee ? HIGH : LOW);
  }
}

void afficherMenu() {
  Serial.println(F("Commandes (taper la lettre puis Entrée) :"));
  Serial.println(F("  a : relancer l'autotest"));
  Serial.print(F("  v : 100 mesures de la référence interne "));
  Serial.println(F("(tension d'alimentation)"));
  Serial.print(F("  h : mode horloge, millis() toutes les secondes "));
  Serial.println(F("(une lettre pour arrêter)"));
  Serial.println(F("  t : capteur de température interne, 10 mesures (BTS2)"));
  Serial.println(F("PRET"));
}

// ---------- Programme principal ----------

void setup() {
  Serial.begin(115200);
  delay(100);
  autotest();
  afficherMenu();
}

void loop() {
  if (Serial.available() > 0) {
    char c = Serial.read();
    if (c != '\n' && c != '\r' && c != ' ') {   // fins de ligne ignorées
      modeHorloge = false;                      // une lettre arrête l'horloge
      if (c == 'a' || c == 'A') {
        autotest();
        afficherMenu();
      } else if (c == 'v' || c == 'V') {
        mesurerReference();
        afficherMenu();
      } else if (c == 'h' || c == 'H') {
        demarrerHorloge();
      } else if (c == 't' || c == 'T') {
        mesurerTemperature();
        afficherMenu();
      } else {
        afficherMenu();
      }
    }
  }
  if (modeHorloge) envoyerHorloge();
}
