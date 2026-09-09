# BTS CIEL 2 : Physique
## Séance 1 de rentrée : 7 heures

**Objectif de la séance :** dresser un état des lieux du niveau des étudiants, consolider les bases (électricité, mesures et incertitudes, ondes) et amorcer, selon le temps disponible, les systèmes bouclés/asservissement et les semi-conducteurs. L'électromagnétisme, prioritaire mais chronophage, est prévu en dernier recours ou en devoir maison.

### Sommaire

- Programme de l'année : vue d'ensemble et nouveautés par rapport à la 1ère année
0. Aide-mémoire : unités et équivalences
1. Déroulé horaire de la séance (grille adaptative)
2. État des lieux : test diagnostique + grille d'analyse
3. Rappels de cours ciblés (fiches développées)
4. QCM de validation (après rappels)
5. TP tournant par sous-groupes (1h max par atelier) + matériel
5bis. Alternative informatique / simulation (si manque de matériel)
6. Exercices d'application (avec corrigés) + exercices d'approfondissement
7. Exercice type BTS ("annale") + devoir maison électromagnétisme
8. Annexe : Fiche de suivi élève
9. Bibliographie et ressources pour aller plus loin

---

## Programme de l'année : vue d'ensemble et nouveautés par rapport à la 1ère année

### Vue d'ensemble : les grands parties de l'année

| Partie | Thème | Contenu principal | Lien avec le métier CIEL |
|---|---|---|---|
| 1 | Consolidation des fondamentaux | Bases élec, mesures et incertitudes, ondes (rappels approfondis) | Socle indispensable à tout le reste de l'année : objet de la séance 1 |
| 2 | Semi-conducteurs et électronique | Diode (rappel), transistor (bipolaire ou MOS), notions d'amplification, redressement | Cartes électroniques, alimentations, interfaces capteur/actionneur |
| 3 | Systèmes bouclés et asservissement | Boucle ouverte/fermée, consigne/écart/correction, notion de stabilité | Régulation, servomoteurs, alimentations régulées, IoT |
| 4 | Ondes et électromagnétisme | Propagation guidée et libre, antennes, réflexion/réfraction, notions de CEM | Réseaux sans fil, câblage, compatibilité électromagnétique, cybersécurité physique |
| 5 | Traitement du signal | Filtrage analogique (approfondissement du RC), notion de spectre, échantillonnage/numérisation | Lien direct avec la chaîne d'acquisition et les réseaux numériques |
| 6 | Optique et propagation guidée | Bases de propagation lumineuse, fibre optique | Réseaux et télécoms (liaisons fibre) |
| 7 | Préparation à l'épreuve | Méthodologie de résolution type BTS, annales, épreuves blanches | Épreuve écrite/CCF de mathématiques-sciences physiques |

### Proposition de calendrier indicatif

| Période | Parties abordées |
|---|---|
| Rentrée (séance 1, cf. ce dossier) | Partie 1 : état des lieux et consolidation |
| Septembre – décembre | Suite partie 1 si besoin, puis partie 2 (semi-conducteurs) et amorce partie 4 (ondes/électromagnétisme) |
| Janvier – mars | Partie 3 (systèmes bouclés/asservissement), partie 5 (traitement du signal), partie 6 (optique/fibre si au programme) |
| Avril – juin | Révisions transversales, annales type BTS, épreuves blanches, projets pluridisciplinaires |

### Ce qui change par rapport à la 1ère année (CIEL 1)

| Domaine | Vu en CIEL 1 (bases attendues) | Ajouté / approfondi en CIEL 2 |
|---|---|---|
| Électricité | Loi d'Ohm, lois de Kirchhoff, associations de résistances, puissance | Circuits plus complexes, effet de charge sur un diviseur, notion d'impédance (introduite avec le filtrage) |
| Mesures et incertitudes | Notion d'incertitude-type simple (types A et B séparés) | Incertitudes composées sur des grandeurs calculées (produits, quotients, exposants), chaînes de mesure avec capteurs, exploitation statistique plus poussée |
| Ondes | Grandeurs caractéristiques (T, f, λ, v), lecture à l'oscilloscope | Superposition et battements, filtrage RC, notion de spectre, propagation guidée (câble, fibre optique) |
| Semi-conducteurs | Notion de diode et de tension de seuil | Transistor (amplification, commutation), applications de redressement et de régulation |
| Systèmes bouclés | Peu ou pas vu (notions qualitatives éventuelles) | **Partie nouveau à part entière :** boucle ouverte/fermée, fonction de transfert simple, notion de stabilité, régulation |
| Électromagnétisme | Peu ou pas vu | **Partie nouveau :** propagation en espace libre, antennes, réflexion/réfraction, notions de compatibilité électromagnétique (CEM) |
| Traitement du signal | Non vu | **Partie nouveau :** filtrage, notion de spectre, lien avec l'échantillonnage et la numérisation |

**En résumé pour les étudiants :** la 1ʳᵉ année a posé les fondamentaux (mesurer juste, chiffrer un doute, décrire un signal). La 2ᵉ année réutilise ces fondamentaux comme des outils pour aborder des systèmes plus complexes et plus proches du métier CIEL : comment un signal est traité, filtré, régulé, transmis : et comment on garantit sa qualité et sa sécurité.

---

## 0. Aide-mémoire : unités et équivalences

À distribuer ou projeter en permanence pendant la séance : beaucoup d'erreurs de calcul viennent d'une conversion d'unité oubliée (mA ↔ A, kΩ ↔ Ω, ms ↔ s…).

### Préfixes multiplicateurs (à connaître par cœur)

| Préfixe | Symbole | Facteur | Exemple d'usage |
|---|---|---|---|
| giga | G | ×10⁹ | GHz (fréquence radio) |
| méga | M | ×10⁶ | MΩ, MHz |
| kilo | k | ×10³ | kΩ, kHz |
| : | (unité) | ×10⁰ | V, A, Ω, s, Hz |
| déci | d | ×10⁻¹ | dB (échelle log, à part) |
| centi | c | ×10⁻² | cm |
| milli | m | ×10⁻³ | mV, mA, ms |
| micro | µ | ×10⁻⁶ | µV, µA, µF |
| nano | n | ×10⁻⁹ | ns, nF |
| pico | p | ×10⁻¹² | pF |

### Grandeurs, symboles et unités SI utilisées dans ce dossier

| Grandeur | Symbole | Unité SI | Symbole unité | Équivalences usuelles |
|---|---|---|---|---|
| Tension électrique | U, V | volt | V | 1 kV = 10³ V ; 1 mV = 10⁻³ V |
| Intensité du courant | I | ampère | A | 1 mA = 10⁻³ A ; 1 µA = 10⁻⁶ A |
| Résistance électrique | R | ohm | Ω | 1 kΩ = 10³ Ω ; 1 MΩ = 10⁶ Ω |
| Puissance | P | watt | W | 1 mW = 10⁻³ W ; 1 kW = 10³ W |
| Énergie | E, W | joule | J | 1 kWh = 3,6.10⁶ J |
| Temps, période | t, T | seconde | s | 1 ms = 10⁻³ s ; 1 µs = 10⁻⁶ s ; 1 ns = 10⁻⁹ s |
| Fréquence | f | hertz | Hz | 1 kHz = 10³ Hz ; 1 MHz = 10⁶ Hz ; 1 GHz = 10⁹ Hz |
| Longueur, longueur d'onde | l, λ | mètre | m | 1 cm = 10⁻² m ; 1 mm = 10⁻³ m |
| Vitesse, célérité | v, c | mètre par seconde | m/s | 1 km/h ≈ 0,278 m/s |
| Capacité électrique | C | farad | F | 1 µF = 10⁻⁶ F ; 1 nF = 10⁻⁹ F ; 1 pF = 10⁻¹² F |
| Charge électrique | Q | coulomb | C | : |
| Angle, déphasage | φ, θ | radian | rad | 2π rad = 360° ; 1 rad ≈ 57,3° |
| Température | θ, T | degré Celsius / kelvin | °C / K | T(K) = θ(°C) + 273,15 |
| Rapport de puissance (atténuation, gain) | A, G | décibel (sans dimension) | dB | A(dB) = 10·log₁₀(P_s/P_e) |

### Conversions rapides fréquemment nécessaires

| Conversion | Méthode | Exemple |
|---|---|---|
| mA → A | ÷ 1000 | 25 mA = 0,025 A |
| kΩ → Ω | × 1000 | 4,7 kΩ = 4700 Ω |
| ms → s | ÷ 1000 | 0,5 ms = 0,0005 s |
| kHz → Hz | × 1000 | 100 kHz = 100 000 Hz |
| nF → F | ÷ 10⁹ | 100 nF = 100.10⁻⁹ F |
| Fréquence ↔ période | f = 1/T ; T = 1/f | 1 kHz ↔ 1 ms |
| Puissance ↔ dB | A(dB) = 10·log₁₀(P₂/P₁) | ratio 2 ↔ ≈ 3 dB ; ratio 10 ↔ 10 dB |

---

## 1. Déroulé horaire de la séance (7h, adaptatif)

Le déroulé ci-dessous est un cadre. Les parties **⚙ Adaptation** indiquent comment moduler le temps réellement passé sur chaque partie en fonction des résultats du diagnostic (partie 2). L'électromagnétisme n'est volontairement pas positionné dans le créneau : il n'est traité que si une avance nette se dégage en fin de journée, sinon il bascule en devoir maison (partie 7).

| Horaire | Durée | Activité | Modalité |
|---|---|---|---|
| 8h00 – 8h15 | 15 min | Accueil, présentation des objectifs de l'année et de la séance | Groupe entier |
| 8h15 – 9h00 | 45 min | Test diagnostique individuel (état des lieux) | Individuel, écrit |
| 9h00 – 9h20 | 20 min | Correction collective rapide + auto-positionnement | Groupe entier |
| 9h20 – 9h30 | 10 min | Pause | : |
| 9h30 – 10h30 | 60 min | Rappels ciblés : Bases de l'électricité | Groupe entier ou groupes de besoin |
| 10h30 – 11h15 | 45 min | Rappels ciblés : Mesures et incertitudes | Groupe entier ou groupes de besoin |
| 11h15 – 12h00 | 45 min | Rappels ciblés : Ondes | Groupe entier ou groupes de besoin |
| 12h00 – 13h00 | 60 min | Pause déjeuner (hors 7h effectives) | : |
| 13h00 – 13h20 | 20 min | QCM de validation + correction flash | Individuel puis collectif |
| 13h20 – 15h20 | 120 min | TP tournant par sous-groupes (3 ou 4 ateliers de 1h max) | Sous-groupes |
| 15h20 – 16h20 | 60 min | Exercices d'application différenciés + correction | Individuel / binômes |
| 16h20 – 16h50 | 30 min | Exercice type BTS guidé, démarré en classe | Groupe entier / binômes |
| 16h50 – 17h00 | 10 min | Bilan de séance, consignes du DM, fiche de suivi | Groupe entier |

> **⚙ Adaptation :** si le diagnostic révèle un groupe déjà solide en élec/mesures, raccourcir les rappels correspondants de 15-20 min et basculer ce temps vers un 4ᵉ atelier de TP (semi-conducteurs ou systèmes bouclés) ou vers l'approfondissement électromagnétisme.
>
> **⚙ Adaptation :** si le diagnostic révèle des lacunes lourdes et généralisées, resserrer sur élec + incertitudes + ondes uniquement : reporter systèmes bouclés et semi-conducteurs à la séance 2, garder l'électromagnétisme en DM pour tout le monde.

---

## 2. État des lieux : test diagnostique

Durée : 45 min. Objectif : positionner chaque étudiant sur 3 domaines prioritaires (électricité de base, mesures/incertitudes, ondes) et repérer, en bonus, les restes de 1ʳᵉ année sur semi-conducteurs et systèmes bouclés. Pas de calculatrice programmable, formulaire autorisé.

### A. Électricité de base (6 questions)

1. Un conducteur ohmique R = 100 Ω est traversé par I = 50 mA. U = ? *(2 V / 5 V / 0,5 V / 20 V)*
2. R1 = 10 Ω et R2 = 20 Ω en série. R_éq = ? *(30 Ω / 6,7 Ω / 10 Ω / 200 Ω)*
3. R1 = 10 Ω et R2 = 10 Ω en parallèle. R_éq = ? *(20 Ω / 5 Ω / 10 Ω / 100 Ω)*
4. La loi des nœuds traduit : *(conservation de l'énergie / conservation de la charge / conservation de la puissance / loi d'Ohm)*
5. Puissance dissipée sous 12 V, 0,5 A : *(24 W / 6 W / 0,04 W / 12,5 W)*
6. Diviseur de tension R1 (haut) / R2 (bas), alim E : U(R2) = ? *(E·R1/(R1+R2) / E·R2/(R1+R2) / E·(R1+R2) / E/(R1·R2))*

### B. Mesures et incertitudes (5 questions)

7. L'incertitude-type traduit : *(l'erreur exacte / le doute raisonnable sur la valeur vraie / la précision de l'appareil seule / la moyenne des mesures)*
8. Multimètre affichant 4,52 V, résolution 0,01 V : *(U = 4,52 V / U = 4,520000 V / U = (4,52 ± 0,01) V / U = 4,5 V)*
9. L'incertitude-type de type A se calcule à partir de : *(la notice constructeur / l'écart-type de la série et n / la moyenne seule / la résolution de l'appareil)*
10. x = (5,0 ± 0,3), x_réf = 5,6 : compatible ? *(oui / non / impossible à dire / dépend de l'appareil)*
11. Nombre de chiffres significatifs à garder pour une incertitude : *(4-5 / 1-2 / autant que la calculatrice affiche / aucun)*

### C. Ondes (5 questions)

12. Fréquence d'un signal T = 2 ms : *(2 kHz / 500 Hz / 0,5 Hz / 5 kHz)*
13. Relation entre v, λ, f : *(v = λ/f / v = λ·f / v = f/λ / v = λ+f)*
14. Oscillo : période = 4 div, balayage 0,5 ms/div. f = ? *(500 Hz / 2 kHz / 250 Hz / 0,5 kHz)*
15. Célérité du son dans l'air : *(3.10⁸ m/s / 340 m/s / 1500 m/s / 3.10⁵ m/s)*
16. Deux signaux "en phase" quand : *(même amplitude / maximums simultanés / fréquences multiples / signes opposés)*

### D. Bonus : acquis de 1ʳᵉ année (4 questions, facultatif mais informatif)

17. Tension de seuil d'une diode au silicium en sens passant : *(0,1 V / 0,6-0,7 V / 5 V / 12 V)*
18. Dans une boucle fermée, l'écart est : *(consigne − mesure retournée / la sortie seule / le gain / une constante)*
19. Un système en boucle ouverte, contrairement au bouclé : *(corrige automatiquement / ne tient pas compte de la sortie réelle / est toujours plus précis / n'a pas d'entrée)*
20. Le spectre électromagnétique classe les ondes selon : *(l'amplitude / la fréquence-longueur d'onde / l'origine géographique / la puissance)*

### Grille de correction et de positionnement

| Domaine | Réponses correctes | Fragile / Consolidé / Avancé |
|---|---|---|
| A. Électricité | 1-b, 2-a, 3-b, 4-b, 5-b, 6-b | ≤3 / 4-5 / 6 |
| B. Incertitudes/mesures | 7-b, 8-c, 9-b, 10-b, 11-b | ≤2 / 3 / 4-5 |
| C. Ondes | 12-b, 13-b, 14-b, 15-b, 16-b | ≤2 / 3 / 4-5 |
| D. Bonus | 17-b, 18-a, 19-b, 20-b | indicatif seulement |

**Utilisation :** reporter le score de chaque étudiant sur la fiche de suivi (partie 8). Constituer, si besoin, des groupes de besoin pour les rappels et pour la répartition en TP : les étudiants "avancés" sur A+B+C peuvent démarrer directement sur l'atelier bonus pendant que les autres consolident.

---

## 3. Rappels de cours ciblés (fiches développées)

Fiches à projeter/distribuer. Le temps réel passé sur chaque fiche dépend du diagnostic : ne pas hésiter à accélérer sur une fiche largement maîtrisée pour dégager du temps ailleurs.

### 3.1 Bases de l'électricité (priorité 1)

**Grandeurs et conventions**

- Tension U (volt, V) : différence de potentiel entre deux points, toujours mesurée entre deux bornes (en parallèle sur le dipôle).
- Intensité I (ampère, A) : débit de charges électriques, mesurée en série dans le circuit.
- Résistance R (ohm, Ω) : caractérise l'opposition d'un dipôle au passage du courant.
- **Convention récepteur** (celle utilisée pour une résistance, une lampe, un moteur en fonctionnement normal) : U et I sont fléchés en sens opposés sur le dipôle. C'est la convention à utiliser presque systématiquement en TP sur des composants passifs.
- **Convention générateur** (pile, alimentation) : U et I sont fléchés dans le même sens.

**Loi d'Ohm**

Pour un conducteur ohmique (résistance) : **U = R × I**

*Exemple résolu :* une résistance R = 470 Ω est parcourue par I = 12 mA.
U = 470 × 0,012 = 5,64 V

**Puissance électrique**

P = U × I = R × I² = U² / R (en watt, W)

*Exemple résolu (suite) :* P = U × I = 5,64 × 0,012 ≈ 68 mW, ou P = R×I² = 470 × 0,012² ≈ 68 mW.

**Lois de Kirchhoff**

- **Loi des nœuds :** la somme des courants entrant dans un nœud est égale à la somme des courants sortants.
  Exemple : si I1 = 3 A et I2 = 2 A arrivent sur un nœud d'où repart I3, alors I3 = I1 + I2 = 5 A.
- **Loi des mailles :** la somme algébrique des tensions le long d'une maille fermée est nulle (en respectant un sens de parcours et le signe de chaque tension selon son orientation).
  Exemple : un générateur E = 9 V alimente en série R1 et R2. En parcourant la maille : E − U(R1) − U(R2) = 0, donc U(R1) + U(R2) = E.

**Associations de résistances**

- Série : **R_éq = R1 + R2 + … + Rn** (le courant est le même dans chaque résistance)
- Parallèle : **1/R_éq = 1/R1 + 1/R2 + … + 1/Rn** (la tension est la même aux bornes de chaque résistance)
- Cas particulier utile : deux résistances égales R en parallèle donnent R_éq = R/2.

**Diviseur de tension et diviseur de courant**

- Diviseur de tension (R1 en haut, R2 en bas, alimentation E) : **U(R2) = E × R2 / (R1 + R2)**
- Diviseur de courant (R1 et R2 en parallèle, courant total I) : **I(R2) = I × R1 / (R1 + R2)** (le courant se répartit à l'inverse des résistances : plus une branche est résistante, moins elle reçoit de courant)

**Court-circuit et circuit ouvert**

- Court-circuit : U = 0 quelle que soit l'intensité (résistance nulle) : attention, danger en pratique si non protégé.
- Circuit ouvert : I = 0 quelle que soit la tension (résistance infinie).

**Erreurs fréquentes des étudiants**

- Confondre mesure en série (ampèremètre) et mesure en parallèle (voltmètre).
- Oublier qu'en série c'est le courant qui est commun, en parallèle c'est la tension.
- Mélanger résistance équivalente série (toujours plus grande que la plus grande des résistances) et parallèle (toujours plus petite que la plus petite).
- Appliquer la loi d'Ohm sur un générateur ou une diode (non ohmiques).

### 3.2 Mesures et incertitudes (priorité 1)

**Vocabulaire de base**

- *Mesurande* : la grandeur que l'on cherche à mesurer.
- *Justesse* : capacité d'un appareil à donner une valeur proche de la valeur vraie, en moyenne (absence d'erreur systématique).
- *Fidélité* : capacité à donner des valeurs proches les unes des autres lors de mesures répétées (dispersion faible).
- *Exactitude* = justesse + fidélité.
- *Erreur systématique* : biais reproductible (ex. mauvais étalonnage, offset) : ne se réduit pas en répétant les mesures.
- *Erreur aléatoire* : fluctuation imprévisible d'une mesure à l'autre : se réduit statistiquement en répétant les mesures.

**Pourquoi une incertitude ?**

Toute mesure est entachée d'un doute : on ne connaît jamais la valeur vraie d'une grandeur, seulement une estimation encadrée par une incertitude qui exprime ce doute de façon quantifiée.

**Incertitude-type de type A (statistique)**

À partir d'une série de n mesures répétées x1, x2, …, xn :

- Valeur moyenne : x̄ = (Σxᵢ) / n
- Écart-type de la série : s = √[ Σ(xᵢ − x̄)² / (n−1) ]
- Incertitude-type de type A : **u_A = s / √n**

*Exemple résolu :* 5 mesures d'une résistance donnent 220, 218, 221, 219, 222 Ω.
x̄ = 220 Ω. s ≈ 1,58 Ω. u_A = 1,58/√5 ≈ 0,71 Ω.

**Incertitude-type de type B (non statistique)**

- Pour un appareil numérique de résolution (dernier digit) δ : **u_B ≈ δ / √12** (on suppose une loi de probabilité uniforme sur l'intervalle de résolution).
- Pour un appareil analogique de classe c et de calibre C : u_B ≈ (c × C) / (100 × √3).
- Pour une valeur donnée avec une tolérance constructeur ±a (ex. résistance à 5 %) : u_B ≈ a / √3.

*Exemple résolu :* multimètre numérique, résolution 0,01 V ⇒ u_B = 0,01/√12 ≈ 0,0029 V.

**Composer deux incertitudes**

Deux sources d'incertitude indépendantes se composent quadratiquement (pas en les additionnant simplement) :

**u = √(u_A² + u_B²)**

*Exemple résolu (suite) :* u = √(0,71² + 0,0029²) ≈ 0,71 Ω (ici u_B est négligeable devant u_A).

**Propagation des incertitudes sur une grandeur calculée**

- Pour une somme/différence (ex. z = x + y ou z = x − y) : les incertitudes absolues se composent quadratiquement :
  **u(z) = √(u(x)² + u(y)²)**
- Pour un produit/quotient (ex. z = x × y ou z = x / y) : ce sont les incertitudes **relatives** qui se composent quadratiquement :
  **u(z)/z = √[(u(x)/x)² + (u(y)/y)²]**

*Exemple résolu :* U = R × I avec R = (220 ± 0,7) Ω et I = (12,0 ± 0,2) mA.
u(R)/R = 0,7/220 ≈ 0,32 %. u(I)/I = 0,2/12,0 ≈ 1,67 %.
u(U)/U = √(0,32² + 1,67²) % ≈ 1,70 %.
U = R×I = 2,64 V ⇒ u(U) ≈ 0,045 V.

**Écrire un résultat de mesure**

- Format final : **x = x̄ ± U(x) [unité]**, avec l'incertitude élargie **U = k × u** (k = 2 pour un niveau de confiance d'environ 95 %).
- Règle d'arrondi : arrondir d'abord l'incertitude à 1, exceptionnellement 2 chiffres significatifs, puis aligner la valeur moyenne sur la même décimale.
- Compatibilité avec une valeur de référence x_réf : le résultat est **compatible** si |x̄ − x_réf| ≤ U(x).

*Exemple résolu (suite du cas U = RI) :* U(U) = 2×0,045 ≈ 0,09 V ⇒ résultat final : **U_mesurée = (2,64 ± 0,09) V**.

**Erreurs fréquentes des étudiants**

- Donner une incertitude avec 4-5 chiffres significatifs (ex. ± 0,0713268 Ω) au lieu d'arrondir à 1-2 chiffres.
- Additionner directement des incertitudes relatives et absolues sans convertir dans la même forme.
- Oublier le facteur k dans l'incertitude élargie et confondre u et U.
- Conclure "la mesure est fausse" au lieu de "la mesure n'est pas compatible avec la valeur de référence, à ce niveau de confiance".

### 3.3 Ondes (priorité 1)

**Onde mécanique vs onde électromagnétique**

- Onde mécanique (son, onde sur une corde) : nécessite un milieu matériel pour se propager.
- Onde électromagnétique (lumière, ondes radio) : se propage aussi dans le vide.

**Grandeurs caractéristiques d'une onde périodique**

- Période T (s) : durée d'un motif qui se répète.
- Fréquence **f = 1/T** (Hz) : nombre de répétitions par seconde.
- Longueur d'onde λ (m) : distance parcourue par l'onde pendant une période T.
- Célérité v (m/s) : vitesse de propagation de l'onde dans le milieu.

**Relation fondamentale de propagation**

**v = λ × f = λ / T**

*Exemple résolu :* une onde sonore de fréquence 1000 Hz se propage dans l'air à 340 m/s.
λ = v/f = 340/1000 = 0,34 m.

**Ordres de grandeur à connaître**

| Type d'onde | Célérité typique |
|---|---|
| Son dans l'air | ≈ 340 m/s |
| Son dans l'eau | ≈ 1500 m/s |
| Onde électromagnétique dans le vide | ≈ 3.10⁸ m/s |
| Onde électrique dans un câble coaxial | ≈ 2.10⁸ m/s (facteur de vélocité ≈ 0,66) |

**Lecture sur oscilloscope**

- Période : T = (nombre de divisions occupées par un motif) × (base de temps en s/div)
- Amplitude : A = (nombre de divisions) × (sensibilité verticale en V/div)

*Exemple résolu :* base de temps 0,5 ms/div, une période occupe 4 div.
T = 4 × 0,5.10⁻³ = 2.10⁻³ s ⇒ f = 1/T = 500 Hz.

**Déphasage entre deux signaux**

- Deux signaux sont **en phase** si leurs maximums coïncident dans le temps ; **en opposition de phase** s'ils sont décalés d'une demi-période.
- Un décalage temporel Δt entre deux signaux de même période T correspond à un déphasage :
  **φ (rad) = 2π × Δt / T**, ou **φ (°) = 360 × Δt / T**

*Exemple résolu :* deux signaux de période T = 2 ms sont décalés de Δt = 0,5 ms.
φ = 360 × 0,5/2 = 90° (quadrature de phase).

**Erreurs fréquentes des étudiants**

- Confondre période lue en divisions et période en secondes (oubli de multiplier par la base de temps).
- Intervertir λ et T dans la formule v = λf.
- Oublier de vérifier la cohérence de l'ordre de grandeur du résultat (ex. une fréquence audio ne doit pas sortir en MHz).

### 3.4 Bonus (si le temps le permet) : semi-conducteurs

- Jonction PN : la diode ne conduit de façon significative que dans un sens (sens passant).
- Tension de seuil typique pour le silicium : 0,6 à 0,7 V ; en dessous, le courant direct reste quasi nul.
- Caractéristique I(V) fortement non linéaire (croissance quasi exponentielle au-delà du seuil) : modèle simplifié "diode idéale + seuil" pour les calculs de première approche : en sens passant, on approxime V_diode ≈ 0,6-0,7 V quel que soit I ; en sens bloqué, I ≈ 0.

### 3.5 Bonus (si le temps le permet) : systèmes bouclés / asservissement

- Boucle ouverte : la commande n'est pas corrigée en fonction du résultat obtenu en sortie.
- Boucle fermée (asservissement) : la sortie est mesurée et renvoyée pour être comparée à la consigne ; l'écart (erreur) pilote la correction.
- Vocabulaire clé : consigne, capteur/mesure, écart (= consigne − mesure), correcteur, actionneur, perturbation.

### 3.6 À traiter en dernier recours ou en DM : électromagnétisme

- Propagation d'une onde électromagnétique : couple champ électrique E / champ magnétique B, perpendiculaires entre eux et à la direction de propagation.
- Célérité dans le vide c ≈ 3.10⁸ m/s ; relation avec λ et f identique aux ondes en général.
- Notions associées (à retravailler en DM) : réflexion, réfraction, notion d'antenne et de rayonnement : en lien direct avec les applications télécoms du BTS CIEL.

---

## 4. QCM de validation (après les rappels)

Durée : 20 min. 15 questions, correction immédiate en collectif.

1. R = 220 Ω, I = 20 mA : U = ? *(44 V / 4,4 V / 11 V / 0,44 V)*
2. R1 = 15 Ω, R2 = 5 Ω en série : R_éq = ? *(20 Ω / 3,75 Ω / 10 Ω / 75 Ω)*
3. R1 = 15 Ω, R2 = 5 Ω en parallèle : R_éq = ? *(3,75 Ω / 20 Ω / 10 Ω / 75 Ω)*
4. Loi des mailles : la somme des tensions sur une maille fermée est… *(maximale / nulle / égale au courant / égale à R)*
5. P = U²/R, U = 9 V, R = 27 Ω : P = ? *(3 W / 0,3 W / 243 W / 0,33 W)*
6. Série de 6 mesures, s = 0,12 : u_A ≈ ? *(0,12 / 0,049 / 0,72 / 0,02)*
7. Résolution 0,1 unité : u_B ≈ ? *(0,1 / 0,029 / 1,2 / 0,05)*
8. x̄ = 12,4, U(x) = 0,3 : résultat correct ? *((12,4 ± 0,3) / (12,40 ± 0,30000) / 12,4 exactement / (12 ± 0,3))*
9. x̄ = 8,0 ± 0,4, x_réf = 9,0 : compatible ? *(oui / non / indéterminable / oui si k=1)*
10. Composition quadratique de 3 % et 4 % : ≈ ? *(7 % / 5 % / 3,5 % / 12 %)*
11. T = 5 ms ⇒ f = ? *(200 Hz / 5 kHz / 500 Hz / 0,2 Hz)*
12. λ = 2 m, f = 170 Hz ⇒ v ≈ ? *(340 m/s / 85 m/s / 3,4 m/s / 680 m/s)*
13. Base de temps 1 ms/div, période sur 5 div : f = ? *(200 Hz / 1000 Hz / 5000 Hz / 5 Hz)*
14. Opposition de phase = déphasage de… *(0° / 90° / 180° / 360°)*
15. Célérité de la lumière dans le vide ≈ *(3.10⁵ m/s / 3.10⁸ m/s / 3.10⁸ km/s / 340 m/s)*

**Corrigé :** 1-4,4 V | 2-20 Ω | 3-3,75 Ω | 4-nulle | 5-3 W | 6-0,049 | 7-0,029 | 8-(12,4 ± 0,3) | 9-oui | 10-5 % | 11-200 Hz | 12-340 m/s | 13-200 Hz | 14-180° | 15-3.10⁸ m/s

---

## 5. TP tournant par sous-groupes (1h max par atelier)

**Principe :** la classe est répartie en sous-groupes qui tournent sur des ateliers indépendants d'1h maximum. 3 ateliers "tronc commun" obligatoires ; l'atelier bonus (4ᵉ) est réservé aux groupes identifiés "avancés" lors du diagnostic, ou vient en rotation si le temps le permet.

### Vue d'ensemble de la rotation

| Atelier | Thème | Durée | Public |
|---|---|---|---|
| Atelier 1 | Mesures et incertitudes | 55 min | Tous les sous-groupes |
| Atelier 2 | Bases de l'électricité | 55 min | Tous les sous-groupes |
| Atelier 3 | Ondes (GBF + oscilloscope) | 55 min | Tous les sous-groupes |
| Atelier 4 (bonus) | Semi-conducteurs ou boucle fermée | 55 min | Groupes avancés, ou rotation si le temps le permet |

> **⚙** Avec 3 sous-groupes : chacun passe sur les 3 ateliers du tronc commun (une rotation par créneau de 55 min). Avec 4 sous-groupes : le 4ᵉ groupe démarre par l'atelier bonus pendant que les autres démarrent le tronc commun, puis tout le monde tourne.

### Matériel global à préparer (pour 4 postes en parallèle)

| Matériel | Quantité | Utilisé pour |
|---|---|---|
| Alimentation stabilisée 0-15 V | 4 | Ateliers 1, 2, 4 |
| Multimètre numérique (voltmètre/ampèremètre/ohmmètre) | 8 (2 par poste) | Ateliers 1, 2, 4 |
| Générateur basses fréquences (GBF) | 4 | Atelier 3 |
| Oscilloscope 2 voies | 4 | Atelier 3, 4 |
| Plaque d'essai (breadboard) | 8 | Ateliers 2, 3, 4 |
| Jeu de fils de raccordement / cordons banane-banane et BNC | 4 lots | Tous |
| Résistances 100 Ω, 220 Ω, 470 Ω, 1 kΩ, 2,2 kΩ, 10 kΩ (5 %) | 4 lots de 6 valeurs, x3 exemplaires chacune | Ateliers 1, 2 |
| Condensateur 100 nF ou 1 µF | 4 | Atelier 3 (circuit RC) |
| Diode silicium (type 1N4148 ou 1N4001) | 4 | Atelier 4 (option A) |
| Résistance de protection série pour diode (~1 kΩ) | 4 | Atelier 4 (option A) |
| Potentiomètre 1-10 kΩ | 4 | Atelier 4 (option B) |
| Calculatrice scientifique | 1 par étudiant | Tous |
| Feuilles de compte-rendu / tableaux de mesures pré-imprimés | 1 par étudiant | Tous |

### Atelier 1 : Mesures et incertitudes (55 min)

- **Objectifs :** réaliser une série de mesures répétées, calculer une incertitude-type de type A, comparer à la valeur nominale.
- **Matériel par poste :** 1 alimentation stabilisée, 2 multimètres, 3 résistances de valeurs différentes (avec tolérance affichée sur le corps de la résistance), cordons de connexion, feuille de mesures.
- **Sécurité :** alimentation réglée à une tension faible (≤ 6 V), pas de risque particulier ; vérifier le calibre du multimètre avant de mesurer (ohmmètre hors tension du circuit).

**Déroulé détaillé**

1. **(5 min) Consignes et lecture du code couleur.** Chaque poste reçoit une résistance non identifiée par écrit.
   - ❓ *Q1. Lisez le code couleur de votre résistance : quelle est sa valeur nominale et sa tolérance annoncée (ex. 220 Ω ± 5 %) ?*
2. **(10 min) Mesure directe à l'ohmmètre.** Mesurer une seule fois la résistance à l'ohmmètre, hors circuit.
   - Relevé attendu : valeur affichée = ______ Ω.
   - ❓ *Q2. Cette valeur mesurée est-elle comprise dans l'intervalle [valeur nominale − tolérance ; valeur nominale + tolérance] ? Montrez le calcul de l'intervalle.*
3. **(15 min) Série de 10 mesures répétées d'une tension.** Monter la résistance sous l'alimentation stabilisée (tension fixée, ex. 5,00 V affichés). Mesurer la tension à ses bornes au voltmètre, **10 fois de suite**, en débranchant/rebranchant légèrement les pointes de touche entre chaque mesure (pour retrouver la variabilité réelle d'une manipulation).
   - Tableau à compléter :

     | Mesure n° | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |
     |---|---|---|---|---|---|---|---|---|---|---|
     | U (V) | | | | | | | | | | |

   - ❓ *Q3. Les 10 valeurs sont-elles rigoureusement identiques ? Proposez au moins deux causes possibles de cette dispersion (contact, résolution de l'appareil, bruit, légère variation de l'alimentation…).*
4. **(15 min) Traitement statistique.** À l'aide de la calculatrice (mode statistique) ou à la main :
   - Calculer x̄ (moyenne) et s (écart-type de l'échantillon).
   - ❓ *Q4. Calculez u_A = s/√n. Notez la valeur.*
   - ❓ *Q5. À partir de la résolution du voltmètre (relevée sur l'appareil), calculez u_B = résolution/√12.*
   - ❓ *Q6. Calculez l'incertitude-type composée u = √(u_A² + u_B²), puis l'incertitude élargie U = 2u. Écrivez le résultat final sous la forme U_mesurée = x̄ ± U (unité, bon nombre de chiffres significatifs).*
5. **(10 min) Conclusion et question de synthèse.**
   - ❓ *Q7. Le résultat de mesure est-il compatible avec la tension affichée par l'alimentation ? Justifiez par le calcul (comparaison de l'écart à U).*
   - ❓ *Q8. Si vous aviez réalisé 40 mesures au lieu de 10 (même dispersion s), quel serait l'effet sur u_A ? Vérifiez par le calcul (u_A ∝ 1/√n).*
- **Livrable :** tableau de mesures rempli + réponses aux questions Q1 à Q8 + résultat final encadré.
- **⚙ Si matériel insuffisant :** basculer sur la version informatique de cet atelier (§ 5bis, "Alternative A").

### Atelier 2 : Bases de l'électricité (55 min)

- **Objectifs :** vérifier expérimentalement la loi d'Ohm et les lois de Kirchhoff, mesurer une puissance.
- **Matériel par poste :** 1 plaque d'essai, 3-4 résistances (montage série puis parallèle), 2 multimètres, 1 alimentation stabilisée, cordons.
- **Sécurité :** toujours couper (ou mettre à zéro) l'alimentation avant de modifier le montage ; vérifier la polarité avant la mise sous tension.

**Déroulé détaillé**

1. **(5 min) Consignes et prévision théorique.** Avant tout branchement, avec E = 9 V, R1 = 220 Ω, R2 = 470 Ω donnés en série :
   - ❓ *Q1. Calculez la valeur théorique de R_éq, du courant I attendu, et des tensions U(R1) et U(R2) attendues.*
2. **(20 min) Montage série.** Réaliser le montage (schéma à dessiner sur le compte-rendu avant de monter). Mesurer :
   - le courant I à trois endroits différents du circuit série (avant R1, entre R1 et R2, après R2) ;
   - la tension aux bornes de R1, puis de R2 ;
   - la tension aux bornes de l'alimentation.

     | Grandeur | I avant R1 | I entre R1-R2 | I après R2 | U(R1) | U(R2) | U(alim) |
     |---|---|---|---|---|---|---|
     | Valeur mesurée | | | | | | |

   - ❓ *Q2. Le courant est-il identique aux trois points de mesure ? Cela confirme-t-il votre cours sur le montage série ?*
   - ❓ *Q3. Calculez U(R1) + U(R2) et comparez à U(alim) mesurée. Calculez l'écart relatif. La loi des mailles est-elle vérifiée aux incertitudes de mesure près ?*
   - ❓ *Q4. Comparez le courant mesuré à la valeur théorique de la Q1 : calculez l'écart relatif.*
3. **(20 min) Montage parallèle.** Remonter R1 et R2 en parallèle sous la même alimentation E. Mesurer :
   - le courant dans R1, le courant dans R2, le courant total débité par l'alimentation ;
   - la tension commune aux bornes de R1 et R2.

     | Grandeur | I(R1) | I(R2) | I(total) | U commune |
     |---|---|---|---|---|
     | Valeur mesurée | | | | |

   - ❓ *Q5. Calculez I(R1) + I(R2) et comparez à I(total) mesuré. La loi des nœuds est-elle vérifiée ?*
   - ❓ *Q6. La tension est-elle bien identique aux bornes de R1 et de R2 ? Est-ce cohérent avec le montage parallèle ?*
4. **(10 min) Puissance et bilan.**
   - ❓ *Q7. Calculez la puissance dissipée dans chaque résistance (P = U×I mesurés) puis la puissance totale débitée par l'alimentation (P = U(alim) × I(total)). Comparez les deux.*
   - ❓ *Q8. Entre le montage série et le montage parallèle (mêmes R1, R2, même E), lequel consomme le plus de puissance totale ? Expliquez pourquoi en une phrase à partir de R_éq.*
- **Livrable :** schémas des deux montages, tableaux de mesures remplis, réponses Q1 à Q8.
- **⚙ Si matériel insuffisant :** basculer sur la version informatique de cet atelier (§ 5bis, "Alternative B").

### Atelier 3 : Ondes : GBF et oscilloscope (55 min)

- **Objectifs :** prise en main du GBF et de l'oscilloscope, mesure de période/fréquence/amplitude, observation d'un déphasage.
- **Matériel par poste :** 1 GBF, 1 oscilloscope 2 voies, 1 résistance + 1 condensateur (circuit RC), cordons BNC et sondes.
- **Sécurité :** amplitude du GBF limitée à quelques volts, aucun risque particulier.

**Déroulé détaillé**

1. **(5 min) Repérage des commandes.**
   - ❓ *Q1. Sur votre oscilloscope, repérez et notez le rôle des réglages TIME/DIV (base de temps) et VOLTS/DIV (sensibilité verticale). Sur le GBF, repérez les réglages fréquence, amplitude et forme du signal.*
2. **(15 min) Mesure d'un signal sinusoïdal simple.** Régler le GBF sur un signal sinusoïdal, 1 kHz affiché, 2 V crête-à-crête affiché. Visualiser à l'oscilloscope.
   - Relever : base de temps utilisée, nombre de divisions occupées par une période, sensibilité verticale, nombre de divisions occupées par l'amplitude crête-à-crête.

     | Grandeur | Base de temps (s/div) | Nb div / période | T mesuré | f mesurée = 1/T | f affichée au GBF | Écart relatif |
     |---|---|---|---|---|---|---|
     | Valeur | | | | | 1 kHz | |

   - ❓ *Q2. Calculez l'écart relatif entre la fréquence mesurée à l'oscilloscope et celle affichée par le GBF. D'où peut venir cet écart (résolution de lecture, tolérance des appareils) ?*
   - ❓ *Q3. Faites de même pour l'amplitude : comparez l'amplitude mesurée sur l'écran à celle affichée par le GBF.*
3. **(20 min) Circuit RC et déphasage.** Monter en série R et C ; visualiser en voie 1 la tension d'entrée (aux bornes du générateur) et en voie 2 la tension aux bornes de C. Répéter la mesure pour trois fréquences différentes (ex. 100 Hz, 1 kHz, 10 kHz), amplitude d'entrée constante.

     | Fréquence | Décalage temporel Δt entre les 2 courbes | Déphasage φ = 360×Δt/T (°) | Amplitude de U_C (V) |
     |---|---|---|---|
     | 100 Hz | | | |
     | 1 kHz | | | |
     | 10 kHz | | | |

   - ❓ *Q4. Comment évolue l'amplitude de U_C quand la fréquence augmente ? Comment évolue le déphasage ?*
   - ❓ *Q5. Ce comportement correspond à un filtre passe-bas ou passe-haut ? Justifiez à partir de vos observations (et pas seulement du cours).*
4. **(15 min) Lien avec la fréquence de coupure.**
   - ❓ *Q6. À partir des valeurs de R et C de votre montage, calculez la fréquence de coupure théorique f_c = 1/(2πRC).*
   - ❓ *Q7. Cette fréquence se situe-t-elle entre vos trois points de mesure ? Le comportement observé en Q4/Q5 change-t-il de nature autour de f_c ?*
- **Livrable :** tableaux de mesures remplis, réponses Q1 à Q7, captures ou schémas d'écran annotés si possible.
- **⚙ Si matériel insuffisant :** basculer sur la version informatique de cet atelier (§ 5bis, "Alternative C") : c'est d'ailleurs l'atelier qui se simule le mieux, le simulateur intègre GBF et oscillo virtuels.

### Atelier 4 (bonus) : Semi-conducteurs ou systèmes bouclés (55 min)

**Option A : Caractéristique d'une diode**

- **Matériel :** 1 alimentation, 1 diode silicium, 1 résistance de protection (~1 kΩ), 2 multimètres, plaque d'essai.
- **Sécurité :** ne jamais dépasser le courant maximal de la diode (limité naturellement par la résistance de protection) ; ne pas alimenter directement la diode sans résistance en série.

**Déroulé détaillé**

1. **(5 min) Montage et consignes.** Monter la diode en série avec la résistance de protection sous l'alimentation réglable.
   - ❓ *Q1. Pourquoi place-t-on une résistance de protection en série avec la diode ? Que risquerait-il de se passer sans elle ?*
2. **(10 min) Sens bloqué.** Inverser la diode (sens bloqué), faire varier la tension d'alimentation de 0 à sa valeur maximale par paliers, mesurer le courant à chaque palier.
   - ❓ *Q2. Le courant mesuré en sens bloqué est-il rigoureusement nul ? Donnez son ordre de grandeur et comparez-le au courant observé en sens passant (étape suivante).*
3. **(25 min) Sens passant : relevé point par point.** Remettre la diode dans le bon sens. Faire varier la tension d'alimentation par petits paliers, en resserrant les points autour du seuil attendu (0,5 V ; 0,55 V ; 0,6 V ; 0,63 V ; 0,65 V ; 0,68 V ; 0,7 V ; 0,72 V ; 0,75 V), et mesurer à chaque palier la tension V_diode et le courant I.

     | V_diode (V) | 0,5 | 0,55 | 0,6 | 0,63 | 0,65 | 0,68 | 0,7 | 0,72 | 0,75 |
     |---|---|---|---|---|---|---|---|---|---|
     | I (mA) | | | | | | | | | |

   - Tracer le graphe I = f(V_diode) sur papier millimétré ou tableur.
   - ❓ *Q3. À partir de quelle tension le courant commence-t-il à croître significativement (au-delà du bruit de mesure) ? Cette valeur est-elle cohérente avec les 0,6-0,7 V annoncés en cours pour le silicium ?*
   - ❓ *Q4. La progression du courant est-elle linéaire, ou de plus en plus rapide ? Que cela indique-t-il sur la nature de la caractéristique I(V) d'une diode ?*
4. **(10 min) Bilan.**
   - ❓ *Q5. Citer une application où la diode est utilisée dans une carte électronique CIEL (redressement, protection, indicateur...).*

**Option B : Boucle ouverte / boucle fermée**

- **Matériel :** 1 potentiomètre, 1 alimentation, 2 multimètres (ou logiciel de simulation si pas de maquette disponible).

**Déroulé détaillé**

1. **(10 min) Montage en boucle ouverte.** Régler le potentiomètre à une position donnée sans jamais la corriger. Appliquer une "perturbation" simulée (ex. modifier légèrement la tension d'alimentation) et observer la tension de sortie.
   - ❓ *Q1. La sortie suit-elle la perturbation sans aucune correction ? Notez l'écart obtenu.*
2. **(20 min) Montage en boucle fermée (ou simulation guidée).** Mettre en place un retour qui compare la sortie à une consigne et ajuste la commande (manuellement si pas de correcteur automatique disponible : l'étudiant joue le rôle du correcteur en réajustant le potentiomètre pour ramener la sortie à la consigne après la perturbation).
   - ❓ *Q2. Combien d'ajustements/de temps faut-il pour revenir proche de la consigne après la perturbation ?*
   - ❓ *Q3. Identifiez sur votre montage : la consigne, la grandeur mesurée, l'écart, l'actionneur.*
3. **(15 min) Comparaison et bilan.**
   - ❓ *Q4. Comparez l'écart final en boucle ouverte (Q1) et en boucle fermée (Q2). Concluez sur l'intérêt d'un asservissement face à une perturbation.*
   - ❓ *Q5. Citer un exemple de système bouclé rencontré dans la vie courante ou dans un équipement CIEL (régulation, servomoteur, alimentation régulée…).*

- **Livrable (les deux options) :** tableaux/graphe remplis, réponses aux questions.
- **⚙ Si matériel insuffisant :** basculer sur la version informatique de cet atelier (§ 5bis, "Alternative D").

---

## 5bis. Alternative : TP informatique / simulation (en cas de manque de matériel)

Si le matériel de laboratoire ne permet pas d'équiper tous les postes en parallèle (cas fréquent), chaque atelier a un équivalent réalisable sur ordinateur, en salle informatique ou même sur PC portable/tablette personnelle, avec des outils **gratuits et fonctionnant dans le navigateur (aucune installation requise)**. On peut aussi mixer : 1 ou 2 postes en matériel réel + les autres sous-groupes en version simulée, en tournant.

**Outils utilisés (tous gratuits, navigateur uniquement)**

| Outil | Usage | Accès |
|---|---|---|
| Falstad Circuit Simulator | Circuits élec + oscilloscope + GBF virtuels, diodes | falstad.com/circuit |
| Tinkercad Circuits | Montage sur breadboard virtuel + multimètre | tinkercad.com/circuits (compte gratuit) |
| LibreOffice Calc / Excel | Traitement statistique des incertitudes | déjà installé en général |
| PhET Interactive Simulations (Univ. Colorado) | Ondes, circuits, notions qualitatives | phet.colorado.edu |

### Alternative A : Mesures et incertitudes (sur tableur)

- **Principe :** au lieu de mesurer physiquement, les étudiants exploitent une série de mesures déjà fournie (préparée par le professeur, réaliste avec dispersion) ou générée aléatoirement par une formule tableur, pour se concentrer sur le traitement statistique : qui est la vraie compétence visée par cet atelier.
- **Déroulé :** 5 min prise en main du fichier tableur fourni → 15 min l'étudiant génère ou récupère 10 valeurs de mesure (ex. avec une formule `=NORM.INV(ALEA();220;1,5)` pour simuler des mesures d'une résistance de 220 Ω avec 1,5 Ω d'écart-type réaliste) → 20 min calcul de x̄, s, u_A, u_B, u, U avec les formules du tableur (`MOYENNE`, `ECARTYPE.STANDARD`) → 15 min écriture du résultat final et test de compatibilité avec la valeur nominale.
- **Valeur ajoutée pédagogique :** en modifiant l'écart-type simulé ou le nombre de mesures n dans la formule, les étudiants observent immédiatement l'effet de n sur u_A (u_A diminue en 1/√n) : chose difficile à illustrer en manipulation réelle faute de temps.
- **Livrable :** fichier tableur avec formules visibles + résultat final rédigé.

### Alternative B : Bases de l'électricité (Falstad ou Tinkercad Circuits)

- **Principe :** construire virtuellement les mêmes montages série/parallèle, avec multimètres virtuels (voltmètre/ampèremètre) à placer sur le circuit.
- **Déroulé :** 10 min prise en main de l'interface → 20 min montage série (mesure U et I à différents points, vérification loi des mailles) → 20 min montage parallèle (loi des nœuds) → 5 min calcul de puissance à partir des relevés virtuels.
- **Avantage :** Falstad affiche en temps réel les valeurs de courant (couleur/épaisseur des fils animée) et de tension, ce qui rend la loi des nœuds et des mailles très visuelle.
- **Livrable :** capture d'écran des montages annotée + tableau de mesures + calculs.

### Alternative C : Ondes (Falstad, GBF et oscilloscope intégrés)

- **Principe :** Falstad propose directement un générateur de signal et un oscilloscope virtuels sur le même circuit, ce qui en fait l'atelier le plus fidèle à sa version physique.
- **Déroulé :** 10 min prise en main → 20 min réglage d'un générateur sinusoïdal, lecture de période/fréquence/amplitude sur le scope virtuel → 20 min montage d'un circuit RC, observation et mesure du déphasage entrée/sortie → 5 min bilan.
- **Livrable :** captures d'écran du scope virtuel annotées, calculs de fréquence et de déphasage, comparaison avec les valeurs réglées sur le générateur.

### Alternative D : Semi-conducteurs / boucle fermée (Falstad ou tableur)

- **Option A (diode) :** Falstad permet de tracer directement la caractéristique I(V) d'une diode virtuelle (mode "afficher le graphe I/V" du composant) : encore plus lisible que le relevé point par point en manipulation réelle.
- **Option B (boucle fermée) :** simulation sur tableur d'un système asservi simplifié : une formule récursive du type `T(n) = T(n-1) + k × (consigne − T(n-1))` (modèle proportionnel simple) permet de tracer l'évolution de la température vers la consigne et de comparer avec un modèle "boucle ouverte" où la commande reste fixe. Les étudiants font varier k et observent l'effet sur la rapidité et la stabilité : bonne introduction qualitative avant le cours d'asservissement.
- **Livrable :** caractéristique ou graphe d'évolution exporté/imprimé + commentaire.

---

## 6. Exercices d'application (60 min, avec corrigés)

À proposer en différenciation : les exercices 1 à 3 sont à faire par tous ; les exercices 4 et 5 sont réservés aux étudiants ayant terminé en avance ou identifiés "avancés".

**Exercice 1 : Bases de l'électricité**

Un pont diviseur de tension est réalisé avec R1 = 2,2 kΩ (en haut) et R2 = 1 kΩ (en bas), alimenté sous E = 12 V.
1) Calculer la tension aux bornes de R2. 2) Calculer le courant circulant dans le pont. 3) Calculer la puissance totale dissipée.

> **Corrigé.** U(R2) = 12 × 1000/(2200+1000) = 3,75 V. I = E/(R1+R2) = 12/3200 = 3,75 mA. P = E×I = 12 × 3,75.10⁻³ = 45 mW.

**Exercice 2 : Mesures et incertitudes**

Une série de 8 mesures d'une tension donne x̄ = 5,08 V et s = 0,06 V. Le multimètre a une incertitude constructeur de type B estimée à u_B = 0,02 V.
1) Calculer u_A. 2) En déduire u composée (u = √(u_A² + u_B²)). 3) Donner le résultat avec U (k=2), correctement écrit.

> **Corrigé.** u_A = 0,06/√8 ≈ 0,021 V. u = √(0,021² + 0,02²) ≈ 0,029 V. U ≈ 0,058 V ≈ 0,06 V. Résultat : U_mesurée = (5,08 ± 0,06) V.

**Exercice 3 : Ondes**

Base de temps 0,2 ms/div, une période occupe 3,5 divisions.
1) Calculer T. 2) En déduire f. 3) Ce signal est une onde sonore (v = 340 m/s) : calculer λ.

> **Corrigé.** T = 3,5 × 0,2.10⁻³ = 0,7 ms. f = 1/T ≈ 1429 Hz. λ = v/f ≈ 0,238 m ≈ 24 cm.

**Exercice 4 (bonus) : Semi-conducteurs**

Sur une diode silicium : V=0,5 V → I≈0 mA ; V=0,65 V → I≈2 mA ; V=0,7 V → I≈8 mA.
1) Que dire de la tension de seuil ? 2) Pourquoi le courant croît-il aussi vite entre 0,65 et 0,7 V ?

> **Corrigé.** Seuil ≈ 0,6-0,65 V, cohérent avec le silicium. Au-delà du seuil, la caractéristique I(V) est fortement non linéaire (croissance quasi exponentielle), typique d'une jonction PN passante.

**Exercice 5 (bonus) : Systèmes bouclés**

Un radiateur électrique est piloté par un thermostat qui compare la température mesurée à une consigne, et coupe/remet le chauffage selon l'écart.
1) Boucle ouverte ou fermée ? Justifier. 2) Identifier consigne, grandeur mesurée, écart, actionneur.

> **Corrigé.** Boucle fermée : la sortie (température) est renvoyée et comparée à la consigne. Consigne = température souhaitée ; mesure = température ambiante (capteur) ; écart = consigne − mesure ; actionneur = résistance chauffante.

### Exercices d'approfondissement (niveau avancé)

À réserver aux étudiants les plus à l'aise, en autonomie, ou comme base de la correction collective en fin de journée. Ils combinent plusieurs notions et introduisent des idées qui seront reprises plus tard dans l'année.

**Exercice A1 : Diviseur de tension en charge**

Un pont diviseur R1 = 4,7 kΩ / R2 = 2,2 kΩ est alimenté sous E = 10 V. On y branche un appareil de mesure (charge) modélisé par une résistance R_ch = 2,2 kΩ en parallèle sur R2.

1) Calculer la tension aux bornes de R2 **à vide** (sans charge).
2) Calculer la nouvelle résistance équivalente (R2 // R_ch) puis la tension aux bornes de R2 **en charge**.
3) Comparer les deux résultats et expliquer, en une phrase, pourquoi un appareil de mesure doit avoir une résistance d'entrée la plus grande possible.

> **Corrigé.**
> 1) U(R2) à vide = 10 × 2200/(4700+2200) = 3,19 V.
> 2) R2 // R_ch = (2200×2200)/(2200+2200) = 1100 Ω. U(R2) en charge = 10 × 1100/(4700+1100) = 1,90 V.
> 3) L'écart est important (3,19 V → 1,90 V) : brancher un appareil de mesure modifie le circuit qu'il mesure ("effet de charge"). Un voltmètre idéal doit avoir une résistance d'entrée très grande devant celle du circuit pour ne pas le perturber.

**Exercice A2 : Incertitude sur une grandeur avec exposant**

On veut déterminer la puissance dissipée P = U²/R à partir de U = (6,00 ± 0,05) V et R = (100 ± 2) Ω.

1) Rappeler la règle de propagation pour z = xⁿ : u(z)/z = n × u(x)/x. Justifier qualitativement pourquoi l'exposant "amplifie" l'incertitude relative.
2) Calculer l'incertitude relative sur U², puis sur R.
3) En déduire l'incertitude relative sur P, puis P avec son incertitude élargie (k=2), correctement écrite.

> **Corrigé.**
> 1) Une petite variation relative sur x se répercute n fois sur xⁿ (dérivée logarithmique : d(ln z) = n·d(ln x)) : plus l'exposant est élevé, plus l'incertitude relative se dégrade.
> 2) u(U²)/U² = 2 × (0,05/6,00) = 1,67 %. u(R)/R = 2/100 = 2,00 %.
> 3) u(P)/P = √(1,67² + 2,00²) % ≈ 2,60 %. P = 6,00²/100 = 0,360 W. u(P) ≈ 0,0094 W. U(P) = 2×0,0094 ≈ 0,019 W ≈ 0,02 W. Résultat : **P = (0,36 ± 0,02) W**.

**Exercice A3 : Battement de deux signaux**

Deux émetteurs radio proches émettent respectivement à f1 = 100,000 kHz et f2 = 100,003 kHz. Superposés, ils produisent un phénomène de battement.

1) Rappeler (ou admettre) que la fréquence de battement perçue vaut f_bat = |f1 − f2|. Calculer f_bat.
2) En déduire la période du battement.
3) Pourquoi ce phénomène est-il un problème pratique en télécommunications (deux canaux trop proches en fréquence) ? Donner une conséquence concrète.

> **Corrigé.**
> 1) f_bat = |100,003 − 100,000| kHz = 3 Hz.
> 2) T_bat = 1/f_bat ≈ 0,33 s.
> 3) Deux porteuses trop proches créent une interférence audible/mesurable (battement, brouillage) : c'est pourquoi les canaux radio sont espacés d'un écart minimal normalisé (canalisation) pour éviter le recouvrement spectral.

**Exercice A4 : Filtre RC passe-bas et fréquence de coupure**

Un filtre RC passe-bas est réalisé avec R = 1,0 kΩ et C = 100 nF.

1) Donner (ou admettre) la formule de la fréquence de coupure : f_c = 1/(2πRC). Calculer f_c.
2) Un signal utile à 200 Hz et un bruit parasite à 50 kHz traversent ce filtre. Lequel est fortement atténué ? Justifier sans calcul détaillé, juste par comparaison à f_c.
3) On veut abaisser f_c d'un facteur 10 sans changer R : quelle nouvelle valeur de C faut-il choisir ?

> **Corrigé.**
> 1) f_c = 1/(2π × 1000 × 100.10⁻⁹) ≈ 1592 Hz ≈ 1,6 kHz.
> 2) Le signal à 200 Hz est bien en dessous de f_c : il passe presque sans atténuation. Le parasite à 50 kHz est très au-dessus de f_c : il est fortement atténué par le filtre passe-bas.
> 3) f_c ∝ 1/C, donc pour diviser f_c par 10 il faut multiplier C par 10 : C = 1 µF.

**Exercice A5 (mixte, difficile) : Atténuation en décibels sur une liaison**

Un signal de puissance P_e = 2,0 mW est injecté dans un câble ; en sortie, on mesure P_s = 0,5 mW.

1) Calculer l'atténuation en dB : A(dB) = 10 × log₁₀(P_e/P_s).
2) Si le câble atténue de façon linéaire (en dB par mètre) et mesure 25 m, calculer l'atténuation linéique en dB/m.
3) Quelle longueur maximale de câble peut-on utiliser si l'atténuation totale ne doit pas dépasser 10 dB ?

> **Corrigé.**
> 1) A = 10 × log₁₀(2,0/0,5) = 10 × log₁₀(4) ≈ 6,02 dB.
> 2) 6,02/25 ≈ 0,241 dB/m.
> 3) L_max = 10/0,241 ≈ 41,5 m.

---

## 7. Exercice type BTS ("annale") et devoir maison

L'exercice ci-dessous est construit dans l'esprit d'un sujet d'examen BTS (mise en situation professionnelle, plusieurs parties indépendantes, données réalistes) et couvre les trois priorités de la séance. Il peut être démarré en classe en fin de séance et terminé en autonomie.

### Contrôle d'une liaison de mesure

*Contexte : dans le cadre de la maintenance d'une installation, un technicien doit caractériser un signal transmis sur une liaison filaire avant de le raccorder à une carte d'acquisition.*

**Partie A : Mesures et incertitudes (8 points)**

Le technicien relève 10 fois l'amplitude crête d'un signal avec un oscilloscope de résolution 0,02 V : 2,14 ; 2,16 ; 2,12 ; 2,15 ; 2,18 ; 2,13 ; 2,17 ; 2,14 ; 2,16 ; 2,15 (en V).

1) Calculer x̄ et s (formules attendues, résultat à 3 chiffres significatifs).
2) Calculer u_A.
3) Calculer u_B = résolution/√12.
4) Calculer u composée puis U (k=2). Écrire le résultat final.

**Partie B : Ondes (7 points)**

Le signal a une fréquence de 1,2 kHz et se propage sur le câble à 2.10⁸ m/s.

1) Calculer T. 2) Calculer λ. 3) Le câble mesure 15 m. Exprimer sa longueur en fraction de λ et commenter l'intérêt pour une liaison de mesure.

**Partie C : Électricité (5 points)**

En sortie de câble, le signal attaque une résistance d'adaptation R = 50 Ω, tension efficace mesurée 1,5 V.

1) Calculer le courant efficace. 2) Calculer la puissance moyenne dissipée.

### Corrigé de l'exercice type BTS

> **Partie A.** x̄ = 2,150 V. s ≈ 0,0184 V. u_A = s/√10 ≈ 0,0058 V. u_B = 0,02/√12 ≈ 0,0058 V. u = √(u_A²+u_B²) ≈ 0,0082 V. U = 2u ≈ 0,016 V ≈ 0,02 V. Résultat : U_signal = (2,15 ± 0,02) V.

> **Partie B.** T = 1/1200 ≈ 0,833 ms. λ = v/f = 2.10⁸/1200 ≈ 1,67.10⁵ m. Longueur/λ = 15/1,67.10⁵ ≈ 9.10⁻⁵ : le câble est très court devant λ, les effets de propagation sont négligeables ici.

> **Partie C.** I = U/R = 1,5/50 = 30 mA. P = U×I = 45 mW (ou U²/R = 1,5²/50 = 45 mW).

### Devoir maison : Électromagnétisme

À proposer si le thème n'a pas pu être abordé en séance.

1. Une antenne émet à 433 MHz (liaisons courte-portée). Calculer sa longueur d'onde dans le vide (c ≈ 3.10⁸ m/s).
2. Expliquer, en quelques lignes, pourquoi E et B sont perpendiculaires entre eux et à la direction de propagation.
3. Une onde radio passe de l'air à un matériau plus dense : citer deux phénomènes possibles à l'interface et une situation professionnelle CIEL où cela compte (pose d'antenne, câblage, blindage…).

---

## 8. Annexe : Fiche de suivi élève

À remplir en fin de diagnostic puis en fin de séance.

| Nom / Prénom | Élec (/6) | Incert. (/5) | Ondes (/5) | Bonus (/4) | Groupe TP | Remarques |
|---|---|---|---|---|---|---|
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |

---

## Bibliographie et ressources pour aller plus loin

Sélection d'ouvrages de référence, reconnus et largement utilisés dans l'enseignement technique et industriel francophone.

### Références techniques par thème

| Thème | Ouvrage | Auteur(s) | Éditeur |
|---|---|---|---|
| Mesures, capteurs, instrumentation | *Les capteurs en instrumentation industrielle* | Georges Asch et collaborateurs | Dunod |
| Électrotechnique / bases élec | *Électrotechnique* | Théodore Wildi | De Boeck |
| Électronique, semi-conducteurs | *Électronique : composants et systèmes d'application* | Robert Boylestad, Louis Nashelsky | Pearson / ERPI (traduction française) |
| Systèmes bouclés / asservissement | *Automatique : systèmes linéaires, non linéaires, à temps continu, à temps discret* | Yves Granjon | Dunod |
| Traitement du signal | *Traitement des signaux et acquisition de données* (collection Aide-mémoire) | Francis Cottet | Dunod |
| Mesures et incertitudes (référence officielle) | *Évaluation des données de mesure : Guide pour l'expression de l'incertitude de mesure* (GUM), JCGM 100:2008 | BIPM / JCGM | Téléchargement gratuit sur bipm.org |

### Pour la culture scientifique et donner du sens (à recommander aux étudiants curieux)

| Ouvrage | Auteur | Intérêt |
|---|---|---|
| *Le cours de physique de Feynman* | Richard Feynman | Un classique mondial, pédagogique et vivant, pour (re)donner du sens aux notions de base |
| *Le Goût du vrai* | Étienne Klein | Physicien et vulgarisateur français, sur l'esprit scientifique et la démarche expérimentale |
| Collection *Que sais-je ?* (ex. *L'électronique*, *Les ondes électromagnétiques*) | Divers auteurs | Format court et accessible pour des mises au point rapides sur un thème précis |

### Ressources numériques et normatives (gratuites)

- **BIPM/JCGM** : Guide pour l'expression de l'incertitude de mesure (GUM) et vocabulaire international de métrologie (VIM), téléchargeables gratuitement sur *bipm.org*.
- **Eduscol / sites académiques de sciences physiques** : ressources pédagogiques, banques d'exercices et documents d'accompagnement mutualisés entre professeurs de STS.
- **Falstad Circuit Simulator** (falstad.com/circuit) : déjà mentionné en § 5bis, également très utile hors séance pour préparer ou illustrer un cours.
