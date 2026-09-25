# BTS CIEL 2 : Physique
## Recueil de TP

## Table des matières

- [0. Aide-mémoire : unités et équivalences](#sec-0-aide-memoire-unites-et-equivalences)
- [Index des TP](#sec-index-des-tp)
- [Fiche outil : prise en main de Falstad](#sec-fiche-outil-prise-en-main-de-falstad)
- [Séance de rentrée : organisation du TP tournant](#sec-seance-de-rentree-organisation-du-tp-tournant)
- [Chapitre 1 : Électricité et optoélectronique](#sec-chapitre-1-electricite-et-optoelectronique)
    - [TP 1.1 : Bases de l'électricité](#sec-tp-1-1-bases-de-l-electricite)
        - [Version simulée du TP 1.1 (Falstad ou Tinkercad Circuits)](#sec-version-simulee-du-tp-1-1-falstad-ou-tinkercad-circuits)
    - [TP 1.2 : Caractéristique d'une diode](#sec-tp-1-2-caracteristique-d-une-diode)
        - [Version Falstad du TP 1.2 (version de référence) : tracer la caractéristique d'une diode](#sec-version-falstad-du-tp-1-2-version-de-reference-tracer-la-caracteristiq)
    - [TP 1.3 : Condensateur et bobine en régime sinusoïdal : impédance et déphasage](#sec-tp-1-3-condensateur-et-bobine-en-regime-sinusoidal-impedance-et-dephas)
    - [TP 1.4 : Résonance d'un dipôle RLC série](#sec-tp-1-4-resonance-d-un-dipole-rlc-serie)
    - [TP 1.5 : Théorème de superposition et modèle de Thévenin](#sec-tp-1-5-theoreme-de-superposition-et-modele-de-thevenin)
    - [TP 1.6 : Décibels et chaîne d'atténuateurs](#sec-tp-1-6-decibels-et-chaine-d-attenuateurs)
    - [TP 1.7 : LED : tension de seuil, couleur et longueur d'onde](#sec-tp-1-7-led-tension-de-seuil-couleur-et-longueur-d-onde)
    - [TP 1.8 (pour aller plus loin) : Photodiode : deux modes de fonctionnement](#sec-tp-1-8-pour-aller-plus-loin-photodiode-deux-modes-de-fonctionnement)
- [Chapitre 2 : Mesures et incertitudes](#sec-chapitre-2-mesures-et-incertitudes)
    - [TP 2.1 : Mesures et incertitudes](#sec-tp-2-1-mesures-et-incertitudes)
        - [Version simulée du TP 2.1 (tableur)](#sec-version-simulee-du-tp-2-1-tableur)
- [Chapitre 3 : Ondes et propagation](#sec-chapitre-3-ondes-et-propagation)
    - [TP 3.1 : Ondes : GBF et oscilloscope](#sec-tp-3-1-ondes-gbf-et-oscilloscope)
        - [Version simulée du TP 3.1 (Falstad, GBF et oscilloscope intégrés)](#sec-version-simulee-du-tp-3-1-falstad-gbf-et-oscilloscope-integres)
- [Chapitre 4 : Systèmes bouclés et asservissement](#sec-chapitre-4-systemes-boucles-et-asservissement)
    - [TP 4.1 : Boucle ouverte / boucle fermée](#sec-tp-4-1-boucle-ouverte-boucle-fermee)
        - [Version Falstad du TP 4.1 (version de référence) : boucle ouverte contre boucle fermée](#sec-version-falstad-du-tp-4-1-version-de-reference-boucle-ouverte-contre-b)
- [Chapitre 5 : Traitement du signal](#sec-chapitre-5-traitement-du-signal)
    - [TP 5.1 : Mesure de gain et d'atténuation d'un quadripôle](#sec-tp-5-1-mesure-de-gain-et-d-attenuation-d-un-quadripole)
- [Chapitre 6 : Optique](#sec-chapitre-6-optique)
- [Chapitre 7 : Préparation à l'épreuve](#sec-chapitre-7-preparation-a-l-epreuve)
- [Projet : Mémoire de 64 bits](#sec-projet-memoire-64-bits)
    - [Projet de TP : Construire une mémoire de 64 bits](#sec-mem-projet-de-tp-construire-une-memoire-de-64-bits)
    - [Sommaire](#sec-mem-sommaire)
    - [1. Présentation du projet](#sec-mem-1-presentation-du-projet)
    - [2. Matériel général](#sec-mem-2-materiel-general)
    - [3. TP 1 : Un bit physique](#sec-mem-3-tp-1-un-bit-physique)
    - [4. TP 2 : Un octet électronique](#sec-mem-4-tp-2-un-octet-electronique)
    - [5. TP 3 : Une mémoire collective de 64 bits](#sec-mem-5-tp-3-une-memoire-collective-de-64-bits)
    - [6. Évaluation](#sec-mem-6-evaluation)
    - [7. Annexes techniques](#sec-mem-7-annexes-techniques)
    - [Conclusion du projet](#sec-mem-conclusion-du-projet)
---

<a id="sec-0-aide-memoire-unites-et-equivalences"></a>

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
| Fréquence ↔ période | $f = 1/T$ ; $T = 1/f$ | 1 kHz ↔ 1 ms |
| Puissance ↔ dB | A(dB) = 10·log₁₀(P₂/P₁) | ratio 2 ↔ ≈ 3 dB ; ratio 10 ↔ 10 dB |

---

<a id="sec-index-des-tp"></a>

## Index des TP

Chaque TP porte un numéro **chapitre.rang** (TP 1.3 = troisième TP du chapitre 1), le même que dans le recueil de cours. Chaque fiche commence par un encadré indiquant la durée, le mode (matériel réel ou simulateur Falstad), la section du cours à relire et le livrable attendu. Lorsqu'un TP existe en version matériel **et** en version simulée, la version simulée suit immédiatement la version matériel.

| N° | Titre | Chapitre | Durée | Mode | Séance |
|---|---|---|---|---|---|
| TP 1.1 | Bases de l'électricité (série, parallèle, lois de Kirchhoff) | 1 | 55 min | Matériel, ou Falstad/Tinkercad | Rentrée (rotation) |
| TP 1.2 | Caractéristique d'une diode | 1 | 55 min | **Falstad** (matériel indisponible) | Rentrée (bonus) |
| TP 1.3 | Condensateur et bobine en régime sinusoïdal : impédance et déphasage | 1 | 55 min | Falstad | Chapitre 1 |
| TP 1.4 | Résonance d'un dipôle RLC série | 1 | 55 min | Falstad | Chapitre 1 |
| TP 1.5 | Théorème de superposition et modèle de Thévenin | 1 | 55 min | Falstad | Chapitre 1 |
| TP 1.6 | Décibels et chaîne d'atténuateurs | 1 | 55 min | Falstad | Chapitre 1 |
| TP 1.7 | LED : tension de seuil, couleur et longueur d'onde | 1 | 45 min | Falstad | Chapitre 1 |
| TP 1.8 | Photodiode : deux modes de fonctionnement (pour aller plus loin) | 1 | 45 min | Falstad | Chapitre 1 |
| TP 2.1 | Mesures et incertitudes | 2 | 55 min | Matériel, ou tableur | Rentrée (rotation) |
| TP 3.1 | Ondes : GBF et oscilloscope | 3 | 55 min | Matériel, ou Falstad | Rentrée (rotation) |
| TP 4.1 | Boucle ouverte / boucle fermée | 4 | 55 min | **Falstad** (matériel indisponible) | Rentrée (bonus) |
| TP 5.1 | Mesure de gain et d'atténuation d'un quadripôle | 5 | 2 h | Matériel, ou Falstad | Chapitre 5 |
| Projet | Mémoire de 64 bits (3 séances) | Transversal | ≈ 10 h | Matériel (+ Logisim/Falstad) | Fin de document |

---

<a id="sec-fiche-outil-prise-en-main-de-falstad"></a>

## Fiche outil : prise en main de Falstad

Cette fiche est commune à tous les TP réalisés sur le simulateur (TP 1.2 à 1.8, TP 4.1, et les versions simulées des autres). À faire lire une fois, puis à garder sous la main.

**Avant de commencer (pour tout le sous-groupe, 5 min)**

1. Ouvrir un navigateur et aller sur **falstad.com/circuit**.
2. Le simulateur ouvre toujours un circuit d'exemple : le vider entièrement par le menu **Fichier → Nouveau circuit vierge**, ou sélectionner tout et supprimer. L'écran doit être vide.
3. Repérer les trois zones : la **zone de dessin** (grande grille), le **panneau de droite** (bouton Run/Stop, curseur de vitesse de simulation), et le **menu du haut** (Fichier, Édition, Dessiner, Oscilloscopes, Options).
4. Deux gestes à connaître :
   - **Placer un composant** : menu **Dessiner** (*Draw*), choisir le composant, puis **cliquer-glisser** sur la grille pour le tracer (la longueur du glissement donne la taille du composant).
   - **Modifier une valeur** : **clic droit** sur le composant → **Éditer…**, saisir la valeur, valider.
   - **Effacer** : clic droit sur le composant → **Supprimer** (*Delete*).
5. **Vocabulaire :** certains noms employés dans l'énoncé désignent un **rôle**, pas un composant du menu. Une « résistance de protection », une « résistance de charge » ou une « résistance de rappel » sont toutes de simples **résistances** (*Ajouter une résistance*) : seules leur valeur et leur place dans le circuit changent. De même, la « consigne » de le TP 4.1 est une simple **source de tension continue**.
6. Astuce de lecture : une fois la simulation lancée, Falstad affiche des **points mobiles** sur les fils (le courant) et un **code couleur** de tension (vert = potentiel positif, rouge = négatif, gris = 0 V). Survoler un composant affiche sa tension et son courant dans le bandeau inférieur.

> ⚠ Le simulateur est utilisé **en français** (le choix de la langue se fait dans le menu **Options**).

---

### Matériel global à préparer (pour 4 postes en parallèle)

| Matériel | Quantité | Utilisé pour |
|---|---|---|
| Alimentation stabilisée 0-15 V | 4 | TP 1, 2, 4 |
| Multimètre numérique (voltmètre/ampèremètre/ohmmètre) | 8 (2 par poste) | TP 1, 2, 4 |
| Générateur basses fréquences (GBF) | 4 | TP 3.1 |
| Oscilloscope 2 voies | 4 | TP 3.1, 4 |
| Plaque d'essai (breadboard) | 8 | TP 2, 3, 4 |
| Jeu de fils de raccordement / cordons banane-banane et BNC | 4 lots | Tous |
| Résistances 100 Ω, 220 Ω, 470 Ω, 1 kΩ, 2,2 kΩ, 10 kΩ (5 %) | 4 lots de 6 valeurs, x3 exemplaires chacune | TP 1, 2 |
| Condensateur 100 nF ou 1 µF | 4 | TP 3.1 (circuit RC) |
| Diode silicium (type 1N4148 ou 1N4001) | 4 | TP 1.2 |
| Résistance de protection série pour diode (~1 kΩ) | 4 | TP 1.2 |
| Potentiomètre 1-10 kΩ | 4 | TP 4.1 |
| Calculatrice scientifique | 1 par étudiant | Tous |
| Feuilles de compte-rendu / tableaux de mesures pré-imprimés | 1 par étudiant | Tous |

---

<div style="page-break-after: always;"></div>

&nbsp;

<div style="page-break-after: always;"></div>

<a id="sec-chapitre-1-electricite-et-optoelectronique"></a>

## Chapitre 1 : Électricité et optoélectronique

<a id="sec-tp-1-1-bases-de-l-electricite"></a>

### TP 1.1 : Bases de l'électricité

> **Durée :** 55 min · **Mode :** matériel (version simulée ci-dessous) · **Cours :** Chapitre 1, §1.1 · **Prérequis :** aucun
> **Objectif :** vérifier expérimentalement la loi d'Ohm, les lois de Kirchhoff et les associations série/parallèle.

- **Objectifs :** vérifier expérimentalement la loi d'Ohm et les lois de Kirchhoff, mesurer une puissance.
- **Matériel par poste :** 1 plaque d'essai, 3-4 résistances (montage série puis parallèle), 2 multimètres, 1 alimentation stabilisée, cordons.
- **Sécurité :** toujours couper (ou mettre à zéro) l'alimentation avant de modifier le montage ; vérifier la polarité avant la mise sous tension.

**Déroulé détaillé**

1. **(5 min) Consignes et prévision théorique.** Avant tout branchement, avec E = 9 V, R1 = 220 Ω, R2 = 470 Ω donnés en série :
   - ❓ *Q1. Calculez la valeur théorique de $R_{éq}$, du courant I attendu, et des tensions U(R1) et U(R2) attendues.*
<img src="figures/Tp/schema_montage_serie.svg" width="320" alt="TP2a_serie"/>

2. **(20 min) Montage série.** Réaliser le montage ci-dessus (le reproduire sur le compte-rendu avant de monter). Mesurer :
   - le courant I à trois endroits différents du circuit série (avant R1, entre R1 et R2, après R2) ;
   - la tension aux bornes de R1, puis de R2 ;
   - la tension aux bornes de l'alimentation.

     | Grandeur | I avant R1 | I entre R1-R2 | I après R2 | U(R1) | U(R2) | U(alim) |
     |---|---|---|---|---|---|---|
     | Valeur mesurée | | | | | | |

   - ❓ *Q2. Le courant est-il identique aux trois points de mesure ? Cela confirme-t-il votre cours sur le montage série ?*
   - ❓ *Q3. Calculez U(R1) + U(R2) et comparez à U(alim) mesurée. Calculez l'écart relatif. La loi des mailles est-elle vérifiée aux incertitudes de mesure près ?*
   - ❓ *Q4. Comparez le courant mesuré à la valeur théorique de la Q1 : calculez l'écart relatif.*
<img src="figures/Tp/schema_montage_parallele.svg" width="320" alt="TP2b_parallele"/>

3. **(20 min) Montage parallèle.** Remonter R1 et R2 en parallèle sous la même alimentation E, comme ci-dessus. Mesurer :
   - le courant dans R1, le courant dans R2, le courant total débité par l'alimentation ;
   - la tension commune aux bornes de R1 et R2.

     | Grandeur | I(R1) | I(R2) | I(total) | U commune |
     |---|---|---|---|---|
     | Valeur mesurée | | | | |

   - ❓ *Q5. Calculez I(R1) + I(R2) et comparez à I(total) mesuré. La loi des nœuds est-elle vérifiée ?*
   - ❓ *Q6. La tension est-elle bien identique aux bornes de R1 et de R2 ? Est-ce cohérent avec le montage parallèle ?*
4. **(10 min) Puissance et bilan.**
   - ❓ *Q7. Calculez la puissance dissipée dans chaque résistance ($P = U \times I$ mesurés) puis la puissance totale débitée par l'alimentation ($P = U_{alim} \times I_{total}$). Comparez les deux.*
   - ❓ *Q8. Entre le montage série et le montage parallèle (mêmes R1, R2, même E), lequel consomme le plus de puissance totale ? Expliquez pourquoi en une phrase à partir de $R_{éq}$.*
- **Livrable :** schémas des deux montages, tableaux de mesures remplis, réponses Q1 à Q8.
- **⚙ Si matériel insuffisant :** basculer sur la version informatique de cet TP (version simulée du TP 1.1).

<a id="sec-version-simulee-du-tp-1-1-falstad-ou-tinkercad-circuits"></a>

#### Version simulée du TP 1.1 (Falstad ou Tinkercad Circuits)

- **Principe :** construire virtuellement les mêmes montages série/parallèle, avec multimètres virtuels (voltmètre/ampèremètre) à placer sur le circuit.
- **Déroulé :** 10 min prise en main de l'interface → 20 min montage série (mesure U et I à différents points, vérification loi des mailles) → 20 min montage parallèle (loi des nœuds) → 5 min calcul de puissance à partir des relevés virtuels.
- **Avantage :** Falstad affiche en temps réel les valeurs de courant (couleur/épaisseur des fils animée) et de tension, ce qui rend la loi des nœuds et des mailles très visuelle.
- **Livrable :** capture d'écran des montages annotée + tableau de mesures + calculs.

---

<a id="sec-tp-1-2-caracteristique-d-une-diode"></a>

### TP 1.2 : Caractéristique d'une diode

> **Durée :** 55 min · **Mode :** **Falstad** (le matériel n'étant pas disponible, la version simulée ci-dessous est la version de référence) · **Cours :** Chapitre 1, §1.4 · **Prérequis :** TP 1.1, fiche outil Falstad
> **Objectif :** relever point par point la caractéristique $I(V)$ d'une diode et en déduire sa tension de seuil.

> Le déroulé ci-dessous décrit la version sur **matériel réel**, conservée pour référence. La version **Falstad, à suivre en séance**, est détaillée juste après.

- **Matériel :** 1 alimentation, 1 diode silicium, 1 résistance de protection (~1 kΩ), 2 multimètres, plaque d'essai.
- **Sécurité :** ne jamais dépasser le courant maximal de la diode (limité naturellement par la résistance de protection) ; ne pas alimenter directement la diode sans résistance en série.

<img src="figures/Tp/schema_diode_resistance_protection.svg" width="320" alt="TP4a_diode"/>

**Déroulé détaillé**

1. **(5 min) Montage et consignes.** Monter la diode en série avec la résistance de protection sous l'alimentation réglable.
   - ❓ *Q1. Pourquoi place-t-on une résistance de protection en série avec la diode ? Que risquerait-il de se passer sans elle ?*
2. **(10 min) Sens bloqué.** Inverser la diode (sens bloqué), faire varier la tension d'alimentation de 0 à sa valeur maximale par paliers, mesurer le courant à chaque palier.
   - ❓ *Q2. Le courant mesuré en sens bloqué est-il rigoureusement nul ? Donnez son ordre de grandeur et comparez-le au courant observé en sens passant (étape suivante).*
3. **(25 min) Sens passant : relevé point par point.** Remettre la diode dans le bon sens. Faire varier la tension d'alimentation par petits paliers, en resserrant les points autour du seuil attendu (0,5 V ; 0,55 V ; 0,6 V ; 0,63 V ; 0,65 V ; 0,68 V ; 0,7 V ; 0,72 V ; 0,75 V), et mesurer à chaque palier la tension $V_{diode}$ et le courant I.

     | $V_{diode}$ (V) | 0,5 | 0,55 | 0,6 | 0,63 | 0,65 | 0,68 | 0,7 | 0,72 | 0,75 |
     |---|---|---|---|---|---|---|---|---|---|
     | I (mA) | | | | | | | | | |

   - Tracer le graphe $I = f(V_{diode})$ sur papier millimétré ou tableur.
   - ❓ *Q3. À partir de quelle tension le courant commence-t-il à croître significativement (au-delà du bruit de mesure) ? Cette valeur est-elle cohérente avec les 0,6-0,7 V annoncés en cours pour le silicium ?*
   - ❓ *Q4. La progression du courant est-elle linéaire, ou de plus en plus rapide ? Que cela indique-t-il sur la nature de la caractéristique $I(V)$ d'une diode ?*
4. **(10 min) Bilan.**
   - ❓ *Q5. Citer une application où la diode est utilisée dans une carte électronique CIEL (redressement, protection, indicateur...).*

---

<a id="sec-version-falstad-du-tp-1-2-version-de-reference-tracer-la-caracteristiq"></a>

#### Version Falstad du TP 1.2 (version de référence) : tracer la caractéristique d'une diode

**Objectif :** construire un circuit diode + résistance de protection, relever point par point le couple $(V_{diode},\, I)$, tracer $I = f(V_{diode})$ et en déduire la tension de seuil.

Vous aurez besoin des racourcie clavier : https://defkey.com/fr/falstad-circuit-simulator-raccourcis-clavier. Si il n'y a pas de raccourcie cherchez dans le menu dessiner en hau à gauche.

**Étape 1 (10 min) : construire le circuit**

Le circuit à reproduire est celui du TP 1.2 (version matériel ci-dessus) : une source de tension continue, une résistance de protection de 1 kΩ et une diode en série, le tout refermé sur la masse.

1. **Placer la source** : menu **Ajouter une source de tension (2 bornes)** (*Draw → Inputs and Sources → Add Voltage Source (2-terminal)*). Tracer un segment **vertical** à gauche de l'écran (glisser du bas vers le haut).
2. **Régler la source** : clic droit dessus → **Éditer…**. Choisir une source **continue (DC)** et mettre la tension à **0,5 V** pour commencer.
3. **Placer la résistance** : **Ajouter une résistance** (*Draw → Passive Components → Add Resistor*). La tracer **horizontalement**, à partir de la borne du haut de la source.
4. **Régler la résistance** : clic droit → **Éditer…** → **1000 Ω** (1 kΩ).
5. **Placer la diode** : **Ajouter une diode**. La tracer horizontalement, dans le prolongement de la résistance. Vérifier le sens : la barre du symbole (la cathode) doit être **à droite**, côté masse. Si le sens est inversé, clic droit → **Inverser les bornes** , ou refaire le tracé dans l'autre sens.
6. **Placer la masse** : **Ajouter une masse** . La placer sous la borne du bas de la source, et la relier.
7. **Fermer le circuit** : **Ajouter un fil**w pour relier la sortie de la diode jusqu'à la masse.
8. **Vérifier avant de lancer** : le circuit doit former une boucle fermée unique : source → résistance → diode → masse → source. Aucun fil ne doit rester en l'air.

- ❓ *Q1. Reproduisez sur votre compte-rendu le schéma que vous avez construit, avec les valeurs. Pourquoi place-t-on une résistance de protection en série avec la diode ? Que se passerait-il, dans le simulateur comme en réel, si on la supprimait ?*

**Étape 2 (10 min) : observer le sens bloqué**

9. Inverser la diode (clic droit → **Inverser les bornes**) : elle est maintenant montée **en sens bloqué**.
10. Lancer la simulation (bouton **Marche / Run** dans le panneau de droite s'il est sur Arrêt).
11. Faire varier la tension de la source de 0 V à 5 V (clic droit → **Éditer…**, ou ajouter un curseur : clic droit → **Curseurs…** (*Sliders…*) pour régler la tension en continu).
12. Survoler la diode pour lire le courant qui la traverse, à chaque valeur de tension.

- ❓ *Q2. Le courant en sens bloqué est-il rigoureusement nul ? Notez son ordre de grandeur (attention aux unités : le simulateur affiche souvent des nanoampères ou des picoampères). Comparez-le au courant que vous mesurerez en sens passant à l'étape suivante.*

**Étape 3 (25 min) : relevé point par point en sens passant**

13. Remettre la diode dans le **bon sens** (clic droit → **Inverser les bornes**).
14. Pour chaque valeur de tension de source indiquée dans le tableau, éditer la source, laisser la simulation se stabiliser une seconde, puis **survoler la diode** pour lire $V_{diode}$ et $I$.
15. Compléter le tableau ci-dessous (les valeurs de source sont resserrées autour du seuil attendu) :

| Tension de la source (V) | 0,50 | 0,60 | 0,70 | 0,80 | 1,00 | 1,50 | 2,00 | 3,00 | 5,00 |
|---|---|---|---|---|---|---|---|---|---|
| $V_{diode}$ mesurée (V) | | | | | | | | | |
| $I$ mesuré (mA) | | | | | | | | | |

16. **Tracer la caractéristique** $I = f(V_{diode})$ : sur papier millimétré, ou dans un tableur en reportant les deux lignes du tableau.

- ❓ *Q3. À partir de quelle tension $V_{diode}$ le courant commence-t-il à croître significativement ? Cette valeur est-elle cohérente avec les 0,6 à 0,7 V annoncés en cours pour le silicium ?*
- ❓ *Q4. Quand la tension de la source passe de 2 V à 5 V, de combien varie $V_{diode}$ ? Et le courant $I$ ? Qu'en concluez-vous sur le modèle simplifié « la diode passante impose environ 0,7 V à ses bornes » ?*
- ❓ *Q5. La progression du courant est-elle linéaire, ou de plus en plus rapide ? Que cela indique-t-il sur la nature de la caractéristique $I(V)$ d'une diode ? Une diode obéit-elle à la loi d'Ohm ?*

**Étape 4 (10 min) : vérification par le calcul et bilan**

17. Reprendre trois points du tableau (par exemple sources à 1 V, 2 V et 5 V) et vérifier la cohérence par la loi des mailles : la tension aux bornes de la résistance vaut $U_R = E - V_{diode}$, et le courant doit valoir $I = U_R / R$.

- ❓ *Q6. Pour chacun des trois points, comparez le courant calculé $I = (E - V_{diode})/R$ au courant lu dans le simulateur. Les deux concordent-ils ?*
- ❓ *Q7. Citez une application où la diode est utilisée dans une carte électronique*

**Livrable :** schéma du circuit construit, tableau de mesures complet, graphe $I = f(V_{diode})$ tracé et annoté (seuil repéré), réponses Q1 à Q7, capture d'écran du circuit sous Falstad.

---

---

<a id="sec-tp-1-3-condensateur-et-bobine-en-regime-sinusoidal-impedance-et-dephas"></a>

### TP 1.3 : Condensateur et bobine en régime sinusoïdal : impédance et déphasage

> **Durée :** 55 min · **Mode :** Falstad (les étudiants construisent le circuit) · **Cours :** Chapitre 1, §1.2 · **Prérequis :** fiche outil Falstad, TP 1.1
> **Objectif :** constater qu'un condensateur et une bobine ne se comportent pas comme une résistance : leur « résistance apparente » (impédance) dépend de la fréquence, et ils déphasent le courant par rapport à la tension.

**Étape 1 (10 min) : construire le circuit RC**

1. Placer une **source de tension sinusoïdale** : **Dessiner → Entrées et sources → Ajouter une source de tension (2 bornes)**, puis clic droit → **Éditer…** : forme d'onde **sinusoïdale**, tension max **5 V**, fréquence **1 kHz**. Relier sa borne basse à une masse.
2. Placer en série, depuis la borne haute de la source : une **résistance** R = **1 kΩ**, puis un **condensateur** (**Dessiner → Composants passifs → Ajouter un condensateur**) C = **100 nF**, dont la seconde borne revient à la masse.
3. Afficher les signaux : clic droit sur la **source** → **Voir dans un nouvel oscilloscope** (tension d'entrée $u(t)$), puis clic droit sur la **résistance** → **Voir dans un nouvel oscilloscope**. La tension aux bornes de R est l'image du courant : $i(t) = u_R(t)/R$.
4. Pour comparer les deux courbes sur le même graphe : clic droit sur l'un des oscilloscopes → **Combiner** (*Combine*) avec l'autre, ou les laisser empilés l'un au-dessus de l'autre.

**Étape 2 (15 min) : mesurer amplitude et déphasage à 1 kHz**

5. Relever l'amplitude de $u_R$ (au survol de l'oscilloscope ou de la résistance), en déduire l'amplitude du courant $I_{max} = U_{R,max}/R$.
6. Relever le décalage temporel $\Delta t$ entre le passage par zéro de $u(t)$ et celui de $u_R(t)$, et la période $T$. En déduire le déphasage $\varphi = 360 \times \Delta t / T$.
7. Compléter la première ligne du tableau.

| f | $Z_C = 1/(C\omega)$ calculé | $\lvert Z \rvert = \sqrt{R^2 + Z_C^2}$ calculé | $I_{max}$ calculé | $I_{max}$ mesuré | $\varphi$ mesuré | Le courant est… |
|---|---|---|---|---|---|---|
| 1 kHz | | | | | | en avance / en retard |
| 100 Hz | | | | | | |
| 10 kHz | | | | | | |

- ❓ *Q1. À 1 kHz, comparez $I_{max}$ mesuré et calculé. Le condensateur se comporte-t-il comme une résistance de 1592 Ω ? Qu'est-ce qui le distingue d'une vraie résistance (regardez le déphasage) ?*
- ❓ *Q2. Le courant est-il en avance ou en retard sur la tension ? Comparez au signe attendu pour un condensateur.*

**Étape 3 (15 min) : faire varier la fréquence**

8. Éditer la source : fréquence **100 Hz**, refaire les mesures. Puis **10 kHz**.

- ❓ *Q3. Quand la fréquence augmente, l'impédance du condensateur augmente-t-elle ou diminue-t-elle ? Que devient le déphasage ? Vers quel comportement (résistif ou capacitif) le circuit tend-il à haute fréquence ?*
- ❓ *Q4. Un condensateur « laisse passer » les hautes fréquences et « bloque » les basses fréquences : reformulez cette phrase à partir de vos mesures.*

**Étape 4 (10 min) : remplacer le condensateur par une bobine**

9. Supprimer le condensateur et placer une **bobine** (**Dessiner → Composants passifs → Ajouter une inductance**) L = **100 mH** au même endroit. Refaire les mesures à 1 kHz.

- ❓ *Q5. Calculez $Z_L = L\omega$ à 1 kHz et comparez au courant mesuré. Le courant est-il maintenant en avance ou en retard ? Que constatez-vous par rapport au condensateur ?*
- ❓ *Q6. Résumez en une phrase le comportement de R, de C et de L vis-à-vis de la fréquence.*

**Livrable :** tableau complet, captures d'écran des oscillogrammes (1 kHz avec C, 1 kHz avec L) avec $\Delta t$ et $T$ repérés, réponses Q1 à Q6.

---

<a id="sec-tp-1-4-resonance-d-un-dipole-rlc-serie"></a>

### TP 1.4 : Résonance d'un dipôle RLC série

> **Durée :** 55 min · **Mode :** Falstad · **Cours :** Chapitre 1, §1.2 (résonance, facteur de qualité, surtension) · **Prérequis :** TP 1.3
> **Objectif :** mettre en évidence la fréquence de résonance d'un circuit RLC série, mesurer sa bande passante et observer le phénomène de surtension.

**Étape 1 (10 min) : construire le circuit**

1. Source sinusoïdale, tension max **1 V** (attention, 1 V et non 5 V : la surtension à la résonance sera déjà importante), fréquence initiale **1 kHz**, borne basse à la masse.
2. En série depuis la source : R = **20 Ω**, L = **10 mH**, C = **100 nF**, retour à la masse. (RLC : On met une résistance, puis une bobine puis un condensateur).
3. Oscilloscope sur la **résistance** (image du courant) et un second sur le **condensateur**.

- ❓ *Q1. Avant toute mesure, calculez la fréquence de résonance théorique $f_0 = \dfrac{1}{2\pi\sqrt{LC}}$ et le facteur de qualité $Q = \dfrac{1}{R}\sqrt{\dfrac{L}{C}}$.*

**Étape 2 (20 min) : relevé de la courbe de résonance**

4. Pour chaque fréquence du tableau, éditer la source, attendre la stabilisation, relever l'amplitude de $u_R$ (donc $I_{max} = U_{R,max}/R$) et l'amplitude de $u_C$.

| f (kHz) | 1 | 3 | 4 | 4,5 | 4,8 | 5,0 | 5,2 | 5,5 | 6 | 8 | 12 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| $U_{R,max}$ (V) | | | | | | | | | | | |
| $I_{max}$ (mA) | | | | | | | | | | | |
| $U_{C,max}$ (V) | | | | | | | | | | | |

5. Affiner autour du maximum : tester 4,9 ; 5,0 ; 5,1 kHz pour encadrer précisément $f_0$.
6. Tracer $I_{max} = f(f)$ (papier ou tableur).

- ❓ *Q2. Quelle fréquence donne le courant maximal ? Comparez à la valeur théorique.*
- ❓ *Q3. À la résonance, quelle est la tension max aux bornes du condensateur ? Comparez-la à la tension de la source (1 V). Quel est le rapport ? Comparez ce rapport au facteur de qualité Q calculé en Q1. C'est le phénomène de **surtension**.*
- ❓ *Q4. Pourquoi ce phénomène impose-t-il de choisir des condensateurs avec une tenue en tension supérieure à celle de l'alimentation ?*

**Étape 3 (15 min) : bande passante et sélectivité**

7. Repérer $I_{max}$ à la résonance, calculer $I_{max}/\sqrt{2}$, puis chercher (en affinant la fréquence de part et d'autre de $f_0$) les deux fréquences $f_1$ et $f_2$ pour lesquelles le courant vaut cette valeur. La bande passante vaut $\Delta f = f_2 - f_1$.

- ❓ *Q5. Comparez $\Delta f$ mesurée à la valeur théorique $\Delta f = f_0/Q$.*

8. Remplacer R = 20 Ω par R = **100 Ω** et relever à nouveau $I_{max}$ à 4, 5 et 6 kHz.

- ❓ *Q6. La résonance est-elle plus « pointue » ou plus « plate » avec 100 Ω ? Quel est le nouveau Q ? Lequel des deux circuits est le plus sélectif ?*
- ❓ *Q7. Application : un lecteur NFC doit capter 13,56 MHz et rejeter les fréquences voisines. Faut-il un Q élevé ou faible ? Justifiez.*

**Livrable :** tableau, courbe de résonance tracée avec $f_0$, $f_1$, $f_2$ et $\Delta f$ repérés, réponses Q1 à Q7.

---

<a id="sec-tp-1-5-theoreme-de-superposition-et-modele-de-thevenin"></a>

### TP 1.5 : Théorème de superposition et modèle de Thévenin

> **Durée :** 55 min · **Mode :** Falstad · **Cours :** Chapitre 1, §1.2 (théorèmes utiles) · **Prérequis :** TP 1.1
> **Objectif :** vérifier expérimentalement deux théorèmes qui permettent de simplifier l'étude de n'importe quel circuit linéaire.

**Étape 1 (10 min) : construire le réseau à deux sources**

1. Placer deux sources de tension **continues** : $E_1$ = **12 V** (à gauche) et $E_2$ = **5 V** (à droite), chacune avec sa borne basse à la masse.
2. Placer trois résistances : $R_1$ = **1 kΩ** de la borne haute de $E_1$ vers un nœud central **A** ; $R_2$ = **2,2 kΩ** de la borne haute de $E_2$ vers ce même nœud A ; $R_3$ = **1 kΩ** du nœud A vers la masse.
3. Vérifier que le nœud A relie bien les trois résistances (un point de jonction apparaît dans Falstad quand trois fils se rejoignent).

**Étape 2 (15 min) : théorème de superposition**

4. Lancer la simulation, survoler le nœud A et relever $V_A$ (tension du nœud par rapport à la masse). Relever aussi le courant dans $R_3$.
5. **Éteindre $E_2$** : clic droit sur $E_2$ → **Éditer…** → tension **0 V** (une source de tension éteinte équivaut à un fil). Relever $V_{A1}$.
6. **Rallumer $E_2$ (5 V) et éteindre $E_1$** (0 V). Relever $V_{A2}$.

| Configuration | $V_A$ mesurée | $I_{R_3}$ mesurée |
|---|---|---|
| Les deux sources actives | | |
| $E_1$ seule ($E_2$ = 0 V) | | |
| $E_2$ seule ($E_1$ = 0 V) | | |
| Somme des deux contributions | | |

- ❓ *Q1. Comparez $V_{A1} + V_{A2}$ à $V_A$. Le théorème de superposition est-il vérifié ?*
- ❓ *Q2. Calculez $V_{A1}$ par un pont diviseur (avec $E_2$ éteinte, $R_2$ et $R_3$ sont en parallèle) et comparez à la mesure.*
- ❓ *Q3. Pourquoi « éteindre » une source de tension revient-il à la remplacer par un fil, et non par un circuit ouvert ?*

**Étape 3 (20 min) : modèle de Thévenin vu par $R_3$**

On considère $R_3$ comme la « charge » : tout le reste du circuit (les deux sources, $R_1$, $R_2$) est le « dipôle actif » que l'on veut remplacer par un modèle de Thévenin (une source $E_{Th}$ en série avec une résistance $R_{Th}$).

7. Remettre les deux sources actives. **Retirer $R_3$** (clic droit → Supprimer) : le nœud A est maintenant « à vide ». Relever la tension $V_A$ à vide : c'est $E_{Th}$.
8. Remplacer $R_3$ par un **fil** direct entre A et la masse (court-circuit) : relever le courant qui y circule, $I_{CC}$. En déduire $R_{Th} = E_{Th}/I_{CC}$.
9. Vérification par le calcul : $R_{Th}$ est la résistance vue depuis A quand les sources sont éteintes, soit $R_1$ en parallèle avec $R_2$. Calculer et comparer.
10. **Construire le modèle de Thévenin** à côté : une source de tension continue réglée sur la valeur $E_{Th}$ mesurée, en série avec une résistance de valeur $R_{Th}$, alimentant une résistance de **1 kΩ** (la charge $R_3$). Relever la tension aux bornes de cette charge.

- ❓ *Q4. Comparez la tension aux bornes de la charge dans le circuit complet (étape 4) et dans le modèle de Thévenin (étape 10). Le modèle est-il équivalent ?*
- ❓ *Q5. Remplacez la charge par 470 Ω dans les deux circuits : l'équivalence tient-elle toujours ?*
- ❓ *Q6. Quel est l'intérêt pratique de ce modèle quand on veut brancher un capteur ou un appareil de mesure sur un circuit complexe (pensez à l'effet de charge vu au TP 1.1) ?*

**Livrable :** les deux tableaux, les captures des trois circuits (réseau complet, réseau court-circuité, modèle de Thévenin), réponses Q1 à Q6.

---

<a id="sec-tp-1-6-decibels-et-chaine-d-attenuateurs"></a>

### TP 1.6 : Décibels et chaîne d'atténuateurs

> **Durée :** 55 min · **Mode :** Falstad · **Cours :** Chapitre 1, §1.3 · **Prérequis :** TP 1.1 (pont diviseur)
> **Objectif :** mesurer des gains en tension, les convertir en dB, et vérifier que les gains en dB s'additionnent en cascade… à condition que les étages ne se chargent pas mutuellement.

**Étape 1 (10 min) : un atténuateur**

1. Source de tension **continue** (ou sinusoïdale à 1 kHz, au choix) $U_e$ = **10 V**, borne basse à la masse.
2. Pont diviseur : $R_1$ = **1 kΩ** puis $R_2$ = **1 kΩ** vers la masse. La sortie $U_s$ est prise aux bornes de $R_2$.
3. Relever $U_s$, calculer $A_v = U_s/U_e$ et le gain en dB : $G = 20\log_{10}(U_s/U_e)$.

- ❓ *Q1. Quelle valeur en dB obtenez-vous ? Retrouvez la valeur remarquable correspondante.*

**Étape 2 (15 min) : deux atténuateurs en cascade**

4. Ajouter un second pont diviseur identique ($R_3$ = 1 kΩ, $R_4$ = 1 kΩ) alimenté par la sortie du premier (relier le haut de $R_3$ au point $U_s$ du premier pont). Relever la tension $U_{s2}$ aux bornes de $R_4$.
5. Calculer le gain total mesuré en dB.

- ❓ *Q2. On attendait −6 dB + (−6 dB) = −12 dB. Obtenez-vous cette valeur ? Si non, calculez la résistance équivalente vue par le premier pont ($R_2$ en parallèle avec $R_3 + R_4$) et expliquez l'écart : c'est l'**effet de charge** entre étages.*

**Étape 3 (15 min) : isoler les étages avec un suiveur**

6. Insérer entre les deux ponts un **AOP monté en suiveur** (voir TP 4.1 pour le câblage : entrée + sur la sortie du premier pont, sortie reliée à l'entrée −, alimentation ±15 V ou 12 V). La sortie du suiveur alimente le second pont.
7. Relever à nouveau $U_{s2}$ et le gain total en dB.

- ❓ *Q3. Retrouvez-vous maintenant −12 dB ? Pourquoi un suiveur (gain 0 dB) permet-il aux gains de s'additionner correctement ? Quelle propriété du suiveur est en jeu (résistance d'entrée, résistance de sortie) ?*

**Étape 4 (15 min) : ajouter un étage amplificateur**

8. En sortie du second pont, ajouter un **AOP non inverseur** de gain 10 : entrée + sur $U_{s2}$, résistance $R_a$ = **1 kΩ** entre l'entrée − et la masse, résistance $R_b$ = **9 kΩ** entre la sortie et l'entrée − (gain $1 + R_b/R_a = 10$). Relever la tension finale.

- ❓ *Q4. Convertissez le gain de l'amplificateur en dB. Calculez le gain total de la chaîne (atténuateur, atténuateur, amplificateur) en additionnant les dB, puis comparez à la mesure.*
- ❓ *Q5. Exprimez la tension finale en dBV (référence 1 V) et la tension d'entrée en dBV. Vérifiez que la différence redonne le gain total.*
- ❓ *Q6. Application : dans un bilan de liaison Wi-Fi ou fibre, on additionne les gains d'antenne et les pertes de câble en dB sans se soucier de l'effet de charge. Quelle hypothèse cela suppose-t-il sur les impédances (rappel : 50 Ω partout) ?*

**Livrable :** tableau des tensions et gains (linéaire et dB) pour chaque configuration, captures des circuits, réponses Q1 à Q6.

---

<a id="sec-tp-1-7-led-tension-de-seuil-couleur-et-longueur-d-onde"></a>

### TP 1.7 : LED : tension de seuil, couleur et longueur d'onde

> **Durée :** 45 min · **Mode :** Falstad · **Cours :** Chapitre 1, §1.5 et §1.6 · **Prérequis :** TP 1.2 (diode)
> **Objectif :** relier la tension de seuil d'une LED à la couleur qu'elle émet, et retrouver la longueur d'onde à partir de l'énergie des photons.

**Étape 1 (10 min) : construire le circuit**

1. Source de tension continue $E$ = **5 V**, borne basse à la masse.
2. Résistance de protection R = **330 Ω** en série, puis une **LED** : **Dessiner → Sorties et étiquettes → Ajouter une LED**, cathode (barre) côté masse.
3. Clic droit sur la LED → **Éditer…** : repérer les réglages de **couleur** et de **tension directe** (*forward voltage*). Régler une LED **rouge** avec une tension directe de **1,8 V**.
4. Lancer la simulation : la LED doit s'allumer (elle se colore dans le simulateur). Survoler la LED pour lire sa tension et son courant.

**Étape 2 (15 min) : trois couleurs**

5. Compléter le tableau pour trois LED en changeant la couleur et la tension directe : rouge 1,8 V ; verte 2,1 V ; bleue 3,0 V.

| LED | Tension directe réglée $V_F$ (V) | Tension mesurée aux bornes (V) | Courant mesuré (mA) | Énergie du photon $E = eV_F$ (eV) | $\lambda = \dfrac{hc}{E}$ calculée (nm) | Couleur attendue pour cette λ |
|---|---|---|---|---|---|---|
| Rouge | 1,8 | | | | | |
| Verte | 2,1 | | | | | |
| Bleue | 3,0 | | | | | |

Constantes : $h = 6{,}63 \times 10^{-34}$ J·s, $c = 3{,}0 \times 10^8$ m/s, $e = 1{,}6 \times 10^{-19}$ C. Astuce : $\lambda\,(\text{nm}) \approx 1240 / E\,(\text{eV})$.

- ❓ *Q1. La tension de seuil d'une LED est-elle la même quelle que soit sa couleur ? Dans quel sens varie-t-elle du rouge au bleu ?*
- ❓ *Q2. Les longueurs d'onde calculées sont-elles cohérentes avec les couleurs (rouge ≈ 620-700 nm, vert ≈ 500-570 nm, bleu ≈ 450-490 nm) ? D'où vient l'écart éventuel (la tension aux bornes n'est pas exactement l'énergie du gap) ?*
- ❓ *Q3. Expliquez avec le cours (§1.5-1.6) pourquoi une LED bleue a besoin d'une tension plus élevée qu'une LED rouge.*

**Étape 3 (15 min) : dimensionner la résistance de protection**

6. Pour la LED bleue, on veut un courant de **10 mA** exactement. Calculer la résistance nécessaire : $R = (E - V_F)/I$. La régler dans le simulateur et vérifier le courant.
7. Passer $E$ à **3,3 V** (tension d'un microcontrôleur) : la LED bleue s'allume-t-elle encore correctement ? Et la rouge ?

- ❓ *Q4. Pourquoi ne peut-on pas piloter directement une LED bleue de 3,0 V avec une sortie 3,3 V et une résistance de 330 Ω ? Quel courant obtient-on ?*
- ❓ *Q5. Application : les LED de face avant d'un switch ou d'une carte réseau sont de couleurs différentes. En quoi cela influence-t-il le choix des résistances de limitation sur la carte ?*

**Livrable :** tableau complet, réponses Q1 à Q5, capture du circuit avec la LED bleue à 10 mA.

---

<a id="sec-tp-1-8-pour-aller-plus-loin-photodiode-deux-modes-de-fonctionnement"></a>

### TP 1.8 (pour aller plus loin) : Photodiode : deux modes de fonctionnement

> **Durée :** 45 min · **Mode :** Falstad (modèle équivalent) · **Cours :** Chapitre 1, §1.8 · **Prérequis :** TP 1.2 et TP 1.7
> **Objectif :** comprendre les deux modes d'utilisation d'une photodiode (photoconducteur et photovoltaïque) à partir de son modèle électrique équivalent.

Falstad ne propose pas de composant « photodiode » avec une commande d'éclairement. On utilise donc son **modèle électrique** : une **source de courant** (le courant photonique $I_{ph}$, proportionnel à l'éclairement) en parallèle avec une **diode** ordinaire (la jonction PN). Faire varier $I_{ph}$ revient à faire varier la lumière reçue.

**Étape 1 (10 min) : construire le modèle**

1. Placer une **diode** verticale, anode en bas, cathode en haut.
2. Placer une **source de courant** (**Dessiner → Entrées et sources → Ajouter une source de courant**) en parallèle de la diode, orientée pour que le courant circule **de la cathode vers l'anode à l'extérieur** de la diode (c'est-à-dire dans le sens inverse de la diode). Régler $I_{ph}$ = **50 µA**.
3. Repérer les deux bornes du modèle : **K** (cathode, en haut) et **A** (anode, en bas). C'est ce dipôle que l'on va utiliser dans les deux modes.

**Étape 2 (15 min) : mode photoconducteur (capteur, récepteur fibre)**

4. Polariser le modèle **en inverse** : source de tension continue **5 V** dont le + est relié à K ; entre A et la masse, placer une **résistance de mesure** R = **10 kΩ**. La tension de sortie est prise aux bornes de R.
5. Relever $U_s$ pour $I_{ph}$ = 10 µA, 20 µA, 50 µA, 100 µA, 200 µA.

| $I_{ph}$ (µA) | 10 | 20 | 50 | 100 | 200 |
|---|---|---|---|---|---|
| $U_s$ mesurée (V) | | | | | |
| $U_s = R \times I_{ph}$ calculée (V) | | | | | |

- ❓ *Q1. La tension de sortie est-elle proportionnelle à l'éclairement ? Pourquoi ce mode est-il utilisé dans un récepteur de fibre optique ou un capteur de luminosité ?*
- ❓ *Q2. Que se passe-t-il si l'on passe la tension de polarisation de 5 V à 10 V, à $I_{ph}$ constant ? Que peut-on en conclure sur l'indépendance du courant vis-à-vis de la tension inverse ?*

**Étape 3 (15 min) : mode photovoltaïque (cellule solaire)**

6. Retirer la source 5 V. Relier simplement une résistance de charge R = **10 kΩ** entre K et A. Relever la tension aux bornes de la charge pour les mêmes valeurs de $I_{ph}$.
7. Refaire la mesure avec R = 100 kΩ, puis en circuit ouvert (supprimer R).

- ❓ *Q3. La tension obtenue est-elle proportionnelle à $I_{ph}$ ? Vers quelle valeur maximale tend-elle en circuit ouvert ? À quoi correspond cette valeur (pensez à la tension de seuil de la diode) ?*
- ❓ *Q4. Dans ce mode, la photodiode fournit-elle ou consomme-t-elle de l'énergie ? En quoi est-ce le principe d'un panneau solaire ?*
- ❓ *Q5. Résumez dans un tableau les différences entre les deux modes : polarisation, grandeur de sortie, linéarité, application.*

**Livrable :** les deux tableaux, captures des deux montages, réponses Q1 à Q5.

---

<div style="page-break-after: always;"></div>

&nbsp;

<div style="page-break-after: always;"></div>

<a id="sec-chapitre-2-mesures-et-incertitudes"></a>

## Chapitre 2 : Mesures et incertitudes

<a id="sec-tp-2-1-mesures-et-incertitudes"></a>

### TP 2.1 : Mesures et incertitudes

> **Durée :** 55 min · **Mode :** matériel (version tableur ci-dessous) · **Cours :** Chapitre 2, §2.1 · **Prérequis :** aucun
> **Objectif :** réaliser une série de mesures, calculer les incertitudes de type A et B et écrire correctement un résultat.

- **Objectifs :** réaliser une série de mesures répétées, calculer une incertitude-type de type A, comparer à la valeur nominale.
- **Matériel par poste :** 1 alimentation stabilisée, 2 multimètres, 3 résistances de valeurs différentes (avec tolérance affichée sur le corps de la résistance), cordons de connexion, feuille de mesures.
- **Sécurité :** alimentation réglée à une tension faible (≤ 6 V), pas de risque particulier ; vérifier le calibre du multimètre avant de mesurer (ohmmètre hors tension du circuit).

<img src="figures/Tp/schema_mesure_tension.svg" width="320" alt="TP1_mesure_tension"/>

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
   - ❓ *Q4. Calculez $u_A = s/\sqrt{n}$. Notez la valeur.*
   - ❓ *Q5. À partir de la résolution du voltmètre (relevée sur l'appareil), calculez $u_B = \text{résolution}/\sqrt{12}$.*
   - ❓ *Q6. Calculez l'incertitude-type composée $u = \sqrt{u_A^2 + u_B^2}$, puis l'incertitude élargie $U = 2u$. Écrivez le résultat final sous la forme $U_{mesurée} = \bar{x} \pm U$ (unité, bon nombre de chiffres significatifs).*
5. **(10 min) Conclusion et question de synthèse.**
   - ❓ *Q7. Le résultat de mesure est-il compatible avec la tension affichée par l'alimentation ? Justifiez par le calcul (comparaison de l'écart à U).*
   - ❓ *Q8. Si vous aviez réalisé 40 mesures au lieu de 10 (même dispersion s), quel serait l'effet sur u_A ? Vérifiez par le calcul ($u_A \propto 1/\sqrt{n}$).*
- **Livrable :** tableau de mesures rempli + réponses aux questions Q1 à Q8 + résultat final encadré.
- **⚙ Si matériel insuffisant :** basculer sur la version informatique de cet TP (version simulée du TP 2.1).

---

<a id="sec-version-simulee-du-tp-2-1-tableur"></a>

#### Version simulée du TP 2.1 (tableur)

- **Principe :** au lieu de mesurer physiquement, les étudiants exploitent une série de mesures déjà fournie (préparée par le professeur, réaliste avec dispersion) ou générée aléatoirement par une formule tableur, pour se concentrer sur le traitement statistique : qui est la vraie compétence visée par cet TP.
- **Déroulé :** 5 min prise en main du fichier tableur fourni → 15 min l'étudiant génère ou récupère 10 valeurs de mesure (ex. avec une formule `=NORM.INV(ALEA();220;1,5)` pour simuler des mesures d'une résistance de 220 Ω avec 1,5 Ω d'écart-type réaliste) → 20 min calcul de x̄, s, u_A, u_B, u, U avec les formules du tableur (`MOYENNE`, `ECARTYPE.STANDARD`) → 15 min écriture du résultat final et test de compatibilité avec la valeur nominale.
- En modifiant l'écart-type simulé ou le nombre de mesures n dans la formule, on observe immédiatement l'effet de n sur u_A ($u_A$ diminue en $1/\sqrt{n}$).
- **Livrable :** fichier tableur avec formules visibles + résultat final rédigé.

---

<div style="page-break-after: always;"></div>

&nbsp;

<div style="page-break-after: always;"></div>

<a id="sec-chapitre-3-ondes-et-propagation"></a>

## Chapitre 3 : Ondes et propagation

<a id="sec-tp-3-1-ondes-gbf-et-oscilloscope"></a>

### TP 3.1 : Ondes : GBF et oscilloscope

> **Durée :** 55 min · **Mode :** matériel (version Falstad ci-dessous) · **Cours :** Chapitre 3, §3.2-3.3 · **Prérequis :** aucun
> **Objectif :** régler un GBF, lire période, fréquence et amplitude à l'oscilloscope, mesurer un déphasage.

- **Objectifs :** prise en main du GBF et de l'oscilloscope, mesure de période/fréquence/amplitude, observation d'un déphasage.
- **Matériel par poste :** 1 GBF, 1 oscilloscope 2 voies, 1 résistance + 1 condensateur (circuit RC), cordons BNC et sondes.
- **Sécurité :** amplitude du GBF limitée à quelques volts, aucun risque particulier.

<img src="figures/Tp/schema_circuit_rc_gbf_oscillo.svg" width="320" alt="TP3_rc"/>

**Déroulé détaillé**

1. **(5 min) Repérage des commandes.**
   - ❓ *Q1. Sur votre oscilloscope, repérez et notez le rôle des réglages TIME/DIV (base de temps) et VOLTS/DIV (sensibilité verticale). Sur le GBF, repérez les réglages fréquence, amplitude et forme du signal.*
2. **(15 min) Mesure d'un signal sinusoïdal simple.** Régler le GBF sur un signal sinusoïdal, 1 kHz affiché, 2 V crête-à-crête affiché. Visualiser à l'oscilloscope.
   - Relever : base de temps utilisée, nombre de divisions occupées par une période, sensibilité verticale, nombre de divisions occupées par l'amplitude crête-à-crête.

     | Grandeur | Base de temps (s/div) | Nb div / période | T mesuré | $f_{mesurée} = 1/T$ | f affichée au GBF | Écart relatif |
     |---|---|---|---|---|---|---|
     | Valeur | | | | | 1 kHz | |

   - ❓ *Q2. Calculez l'écart relatif entre la fréquence mesurée à l'oscilloscope et celle affichée par le GBF. D'où peut venir cet écart (résolution de lecture, tolérance des appareils) ?*
   - ❓ *Q3. Faites de même pour l'amplitude : comparez l'amplitude mesurée sur l'écran à celle affichée par le GBF.*
3. **(20 min) Circuit RC et déphasage.** Monter en série R et C ; visualiser en voie 1 la tension d'entrée (aux bornes du générateur) et en voie 2 la tension aux bornes de C. Répéter la mesure pour trois fréquences différentes (ex. 100 Hz, 1 kHz, 10 kHz), amplitude d'entrée constante.

     | Fréquence | Décalage temporel Δt entre les 2 courbes | Déphasage $\varphi = 360 \times \Delta t / T$ (°) | Amplitude de $U_C$ (V) |
     |---|---|---|---|
     | 100 Hz | | | |
     | 1 kHz | | | |
     | 10 kHz | | | |

   - ❓ *Q4. Comment évolue l'amplitude de $U_C$ quand la fréquence augmente ? Comment évolue le déphasage ?*
   - ❓ *Q5. Ce comportement correspond à un filtre passe-bas ou passe-haut ? Justifiez à partir de vos observations (et pas seulement du cours).*
4. **(15 min) Lien avec la fréquence de coupure.**
   - ❓ *Q6. À partir des valeurs de R et C de votre montage, calculez la fréquence de coupure théorique $f_c = \dfrac{1}{2\pi RC}$.*
   - ❓ *Q7. Cette fréquence se situe-t-elle entre vos trois points de mesure ? Le comportement observé en Q4/Q5 change-t-il de nature autour de f_c ?*
- **Livrable :** tableaux de mesures remplis, réponses Q1 à Q7, captures ou schémas d'écran annotés si possible.
- **⚙ Si matériel insuffisant :** basculer sur la version informatique de cet TP (version simulée du TP 3.1) : c'est d'ailleurs l'TP qui se simule le mieux, le simulateur intègre GBF et oscillo virtuels.

---

<a id="sec-version-simulee-du-tp-3-1-falstad-gbf-et-oscilloscope-integres"></a>

#### Version simulée du TP 3.1 (Falstad, GBF et oscilloscope intégrés)

- **Principe :** Falstad propose directement un générateur de signal et un oscilloscope virtuels sur le même circuit, ce qui en fait l'TP le plus fidèle à sa version physique.
- **Déroulé :** 10 min prise en main → 20 min réglage d'un générateur sinusoïdal, lecture de période/fréquence/amplitude sur le scope virtuel → 20 min montage d'un circuit RC, observation et mesure du déphasage entrée/sortie → 5 min bilan.
- **Livrable :** captures d'écran du scope virtuel annotées, calculs de fréquence et de déphasage, comparaison avec les valeurs réglées sur le générateur.

---

<div style="page-break-after: always;"></div>

&nbsp;

<div style="page-break-after: always;"></div>

<a id="sec-chapitre-4-systemes-boucles-et-asservissement"></a>

## Chapitre 4 : Systèmes bouclés et asservissement

<a id="sec-tp-4-1-boucle-ouverte-boucle-fermee"></a>

### TP 4.1 : Boucle ouverte / boucle fermée

**Avant de commencer (pour tout le sous-groupe, 5 min)**

1. Ouvrir un navigateur et aller sur **falstad.com/circuit**.
2. Le simulateur ouvre toujours un circuit d'exemple : le vider entièrement par le menu **Fichier → Nouveau circuit vierge**, ou sélectionner tout et supprimer. L'écran doit être vide.
3. Repérer les trois zones : la **zone de dessin** (grande grille), le **panneau de droite** (bouton Run/Stop, curseur de vitesse de simulation), et le **menu du haut** (Fichier, Édition, Dessiner, Oscilloscopes, Options).
4. Deux gestes à connaître :
   - **Placer un composant** : menu **Dessiner** (*Draw*), choisir le composant, puis **cliquer-glisser** sur la grille pour le tracer (la longueur du glissement donne la taille du composant).
   - **Modifier une valeur** : **clic droit** sur le composant → **Éditer…**, saisir la valeur, valider.
   - **Effacer** : clic droit sur le composant → **Supprimer** (*Delete*).
5. Astuce de lecture : une fois la simulation lancée, Falstad affiche des **points mobiles** sur les fils (le courant) et un **code couleur** de tension (vert = potentiel positif, rouge = négatif, gris = 0 V). Survoler un composant affiche sa tension et son courant dans le bandeau inférieur.

> ⚠ Le simulateur est utilisé **en français** (le choix de la langue se fait dans le menu **Options**).

---

<a id="sec-option-a-tracer-la-caracteristique-d-une-diode"></a>

#### Option A : tracer la caractéristique d'une diode

**Objectif :** construire un circuit diode + résistance de protection, relever point par point le couple $(V_{diode},\, I)$, tracer $I = f(V_{diode})$ et en déduire la tension de seuil.

Vous aurez besoin des racourcie clavier : https://defkey.com/fr/falstad-circuit-simulator-raccourcis-clavier. Si il n'y a pas de raccourcie cherchez dans le menu dessiner en hau à gauche.

**Étape 1 (10 min) : construire le circuit**

Le circuit à reproduire est celui de l'atelier 4 option A : une source de tension continue, une résistance de protection de 1 kΩ et une diode en série, le tout refermé sur la masse.

1. **Placer la source** : menu **Ajouter une source de tension (2 bornes)** (*Draw → Inputs and Sources → Add Voltage Source (2-terminal)*). Tracer un segment **vertical** à gauche de l'écran (glisser du bas vers le haut).
2. **Régler la source** : clic droit dessus → **Éditer…**. Choisir une source **continue (DC)** et mettre la tension à **0,5 V** pour commencer.
3. **Placer la résistance** : **Ajouter une résistance** (*Draw → Passive Components → Add Resistor*). La tracer **horizontalement**, à partir de la borne du haut de la source.
4. **Régler la résistance** : clic droit → **Éditer…** → **1000 Ω** (1 kΩ).
5. **Placer la diode** : **Ajouter une diode**. La tracer horizontalement, dans le prolongement de la résistance. Vérifier le sens : la barre du symbole (la cathode) doit être **à droite**, côté masse. Si le sens est inversé, clic droit → **Inverser les bornes** , ou refaire le tracé dans l'autre sens.
6. **Placer la masse** : **Ajouter une masse** . La placer sous la borne du bas de la source, et la relier.
7. **Fermer le circuit** : **Ajouter un fil**w pour relier la sortie de la diode jusqu'à la masse.
8. **Vérifier avant de lancer** : le circuit doit former une boucle fermée unique : source → résistance → diode → masse → source. Aucun fil ne doit rester en l'air.

- ❓ *Q1. Reproduisez sur votre compte-rendu le schéma que vous avez construit, avec les valeurs. Pourquoi place-t-on une résistance de protection en série avec la diode ? Que se passerait-il, dans le simulateur comme en réel, si on la supprimait ?*

**Étape 2 (10 min) : observer le sens bloqué**

9. Inverser la diode (clic droit → **Inverser les bornes**) : elle est maintenant montée **en sens bloqué**.
10. Lancer la simulation (bouton **Marche / Run** dans le panneau de droite s'il est sur Arrêt).
11. Faire varier la tension de la source de 0 V à 5 V (clic droit → **Éditer…**, ou ajouter un curseur : clic droit → **Curseurs…** (*Sliders…*) pour régler la tension en continu).
12. Survoler la diode pour lire le courant qui la traverse, à chaque valeur de tension.

- ❓ *Q2. Le courant en sens bloqué est-il rigoureusement nul ? Notez son ordre de grandeur (attention aux unités : le simulateur affiche souvent des nanoampères ou des picoampères). Comparez-le au courant que vous mesurerez en sens passant à l'étape suivante.*

**Étape 3 (25 min) : relevé point par point en sens passant**

13. Remettre la diode dans le **bon sens** (clic droit → **Inverser les bornes**).
14. Pour chaque valeur de tension de source indiquée dans le tableau, éditer la source, laisser la simulation se stabiliser une seconde, puis **survoler la diode** pour lire $V_{diode}$ et $I$.
15. Compléter le tableau ci-dessous (les valeurs de source sont resserrées autour du seuil attendu) :

| Tension de la source (V) | 0,50 | 0,60 | 0,70 | 0,80 | 1,00 | 1,50 | 2,00 | 3,00 | 5,00 |
|---|---|---|---|---|---|---|---|---|---|
| $V_{diode}$ mesurée (V) | | | | | | | | | |
| $I$ mesuré (mA) | | | | | | | | | |

16. **Tracer la caractéristique** $I = f(V_{diode})$ : sur papier millimétré, ou dans un tableur en reportant les deux lignes du tableau.

- ❓ *Q3. À partir de quelle tension $V_{diode}$ le courant commence-t-il à croître significativement ? Cette valeur est-elle cohérente avec les 0,6 à 0,7 V annoncés en cours pour le silicium ?*
- ❓ *Q4. Quand la tension de la source passe de 2 V à 5 V, de combien varie $V_{diode}$ ? Et le courant $I$ ? Qu'en concluez-vous sur le modèle simplifié « la diode passante impose environ 0,7 V à ses bornes » ?*
- ❓ *Q5. La progression du courant est-elle linéaire, ou de plus en plus rapide ? Que cela indique-t-il sur la nature de la caractéristique $I(V)$ d'une diode ? Une diode obéit-elle à la loi d'Ohm ?*

**Étape 4 (10 min) : vérification par le calcul et bilan**

17. Reprendre trois points du tableau (par exemple sources à 1 V, 2 V et 5 V) et vérifier la cohérence par la loi des mailles : la tension aux bornes de la résistance vaut $U_R = E - V_{diode}$, et le courant doit valoir $I = U_R / R$.

- ❓ *Q6. Pour chacun des trois points, comparez le courant calculé $I = (E - V_{diode})/R$ au courant lu dans le simulateur. Les deux concordent-ils ?*
- ❓ *Q7. Citez une application où la diode est utilisée dans une carte électronique*

**Livrable option A :** schéma du circuit construit, tableau de mesures complet, graphe $I = f(V_{diode})$ tracé et annoté (seuil repéré), réponses Q1 à Q7, capture d'écran du circuit sous Falstad.

---

<a id="sec-option-b-boucle-ouverte-contre-boucle-fermee"></a>

#### Option B : boucle ouverte contre boucle fermée

**Objectif :** construire deux circuits de régulation de tension, l'un sans retour (boucle ouverte), l'autre avec retour (boucle fermée), puis comparer leur réaction à une même perturbation.

**Étape 1 (10 min) : construire le montage en boucle ouverte**

Un potentiomètre règle « à la main » une tension de sortie, sans jamais vérifier le résultat obtenu.

1. **Placer une source de tension** (**Dessiner → Entrées et sources → Ajouter une source de tension (2 terminaux)**), verticale à gauche, réglée sur **12 V** en continu. Relier sa borne basse à une **masse** (**Dessiner → Sorties et étiquettes → Ajouter une masse**).
2. **Placer un potentiomètre** : **Dessiner → Composants passifs → Ajouter un potentiomètre**, tracé verticalement à droite de la source. Clic droit → **Éditer…** → résistance totale **10 kΩ**.
3. Relier la borne haute du potentiomètre au **+12 V** de la source, sa borne basse à la **masse**. Le curseur (la troisième borne, sur le côté) constitue la **sortie**.
4. **Placer la résistance de charge** de **1 kΩ** entre le curseur et la masse. Ce n'est pas un composant particulier du menu : c'est une **résistance ordinaire** (**Dessiner → Composants passifs → Ajouter une résistance**), appelée « de charge » parce qu'elle représente le « système » alimenté en sortie.
5. **Afficher la sortie** : clic droit sur la résistance de charge → **Voir dans un nouvel oscilloscope** pour suivre sa tension, ou survoler pour la lire directement.
6. Lancer la simulation et régler le curseur du potentiomètre (le curseur apparaît dans le panneau de droite) pour obtenir exactement **5,0 V** aux bornes de la charge : c'est la **consigne**.

**Étape 2 (10 min) : appliquer une perturbation**

7. **Sans toucher au potentiomètre**, éditer la source et faire passer la tension de **12 V à 9 V** (chute de l'alimentation : c'est la perturbation).
8. Relever la nouvelle tension de sortie.

| | Tension d'alimentation | Tension de sortie | Écart avec la consigne 5,0 V |
|---|---|---|---|
| Avant perturbation | 12 V | 5,0 V | 0 V |
| Après perturbation (boucle ouverte) | 9 V | | |

- ❓ *Q1. La sortie a-t-elle suivi la perturbation ? Quel est l'écart obtenu par rapport à la consigne ? Le système s'est-il corrigé tout seul ?*

**Étape 3 (20 min) : construire le montage en boucle fermée**

On remplace le réglage manuel par un montage qui **mesure sa propre sortie** et la compare en permanence à une consigne : un amplificateur opérationnel monté en suiveur/amplificateur non inverseur réalise exactement cette comparaison.

9. Créer un nouveau circuit (**Fichier → Nouveau circuit vierge**), ou travailler à côté du précédent.
10. **Placer la consigne** : une source de tension continue réglée à **5 V**, reliée à la masse. C'est la valeur que l'on veut obtenir en sortie.
11. **Placer l'amplificateur opérationnel** : **Dessiner → Blocs Fonctionels actifs → Ajouter un Amplificateur Operationnel Réel**. Le tracer au centre de l'écran. Repérer ses cinq broches : les deux **entrées** (+ et −) à gauche, la **sortie** à droite, et les deux broches d'**alimentation** (**V+** et **V−**).
12. **Alimenter l'AOP** : placer une seconde source de tension continue réglée à **12 V**, reliée à la masse, puis relier le **+12 V** à la broche **V+** de l'AOP et la broche **V−** à la **masse**. Contrairement à l'AOP idéal (alimenté en interne, sans broche visible), l'**amplificateur opérationnel réel doit être alimenté explicitement** : sans ce câblage, il ne délivrera aucune tension en sortie.

13. **Câbler la consigne sur l'entrée +** : relier la source 5 V à l'entrée **non inverseuse** de l'AOP.
14. **Câbler le retour sur l'entrée −** : relier directement la **sortie** de l'AOP à son entrée **inverseuse** (montage suiveur). **C'est ce fil qui constitue la boucle de retour** : l'AOP compare en permanence sa sortie à la consigne.
15. **Placer la résistance de charge** de **1 kΩ** (une résistance ordinaire, comme à l'étape 1) entre la sortie de l'AOP et la masse.
16. Lancer la simulation et vérifier que la sortie vaut bien **5,0 V**.

<p align="center">
<img src="figures/Tp/Ampli_D_B.png" alt="Amplificateur opérationnel réel dans Falstad : broches d'alimentation V+ et V−, entrées + et −, sortie"/>
</p>w

- ❓ *Q2. Repérez et nommez sur votre schéma : la consigne, la grandeur mesurée (le retour), l'écart (la différence entre les deux entrées de l'AOP), et l'actionneur (l'étage de sortie de l'AOP). Reproduisez le schéma-bloc correspondant (consigne → comparateur → correcteur → actionneur → sortie, avec la boucle de retour).*

**Étape 4 (10 min) : même perturbation, comparaison**

1.  Appliquer **exactement la même perturbation** qu'en boucle ouverte : éditer la source qui alimente l'AOP (broche **V+**) et faire passer sa tension de **12 V à 9 V**. Ne pas toucher à la source de consigne, qui reste à 5 V.
2.  Relever la nouvelle tension de sortie.

| | Tension d'alimentation | Tension de sortie | Écart avec la consigne 5,0 V |
|---|---|---|---|
| Avant perturbation | 12 V | 5,0 V | 0 V |
| Après perturbation (boucle fermée) | 9 V | | |

19. Pousser le test : faire varier la charge (remplacer la résistance de 1 kΩ par 470 Ω) et observer si la sortie bouge.

- ❓ *Q3. Comparez les deux tableaux (boucle ouverte et boucle fermée). Lequel des deux montages tient sa consigne malgré la perturbation ?*
- ❓ *Q4. Expliquez, avec vos mots, **pourquoi** la boucle fermée corrige automatiquement : que « voit » l'AOP quand la sortie commence à baisser ?*
- ❓ *Q5. Jusqu'où la correction fonctionne-t-elle ? Baissez progressivement l'alimentation de l'AOP (8 V, 7 V, 6 V, 5 V) : à partir de quelle valeur la sortie ne tient-elle plus les 5 V ? Pourquoi un asservissement ne peut-il pas compenser n'importe quelle perturbation ?*
- ❓ *Q6. Citez un exemple de système bouclé rencontré dans la vie courante ou dans un équipement CIEL (régulation de température d'un serveur, alimentation régulée, servomoteur, régulateur de vitesse…).*

**Livrable option B :** les deux schémas construits (boucle ouverte et boucle fermée), les deux tableaux de mesures remplis, le schéma-bloc annoté, les réponses Q1 à Q6, et les captures d'écran des deux circuits.

---

<div style="page-break-after: always;"></div>

&nbsp;

<div style="page-break-after: always;"></div>

<a id="sec-chapitre-5-traitement-du-signal"></a>

## Chapitre 5 : Traitement du signal

<a id="sec-tp-5-1-mesure-de-gain-et-d-attenuation-d-un-quadripole"></a>

### TP 5.1 : Mesure de gain et d'atténuation d'un quadripôle

> **Durée :** 2 h (une ou deux séances) · **Mode :** matériel, ou Falstad · **Cours :** Chapitre 1 §1.3 et Chapitre 5 §5.3 · **Prérequis :** TP 1.6, TP 3.1
> **Objectif :** relever le gain d'un filtre RC en fonction de la fréquence et le tracer en dB.

- **Objectifs :** mesurer expérimentalement le gain d'un quadripôle à partir de tensions d'entrée/sortie, calculer ce gain en dB, observer comment il varie avec la fréquence, et faire le lien avec la fréquence de coupure vue à l'TP Ondes (§Partie 1).
- **Matériel par poste :** 1 GBF, 1 oscilloscope 2 voies, le circuit RC déjà utilisé à l'TP Ondes (réemployé ici comme quadripôle sous test), cordons BNC. *(Variante : un atténuateur résistif fixe simple, R1/R2 en pont diviseur, pour un gain constant indépendant de la fréquence : utile si l'on veut isoler la notion de dB de celle de filtrage.)*
- **Sécurité :** aucun risque particulier, amplitude GBF limitée à quelques volts.

**Déroulé détaillé**

1. **(10 min) Prévision théorique.** Avant toute mesure, avec les valeurs de R et C de votre circuit RC :
   - ❓ *Q1. Rappelez la fréquence de coupure théorique $f_c = \dfrac{1}{2\pi RC}$ calculée à l'TP Ondes.*
   - ❓ *Q2. À très basse fréquence (f << f_c), quel gain en tension attendez-vous entre l'entrée et la sortie du circuit ? Exprimez-le en dB.*
2. **(20 min) Mesure du gain en basse fréquence.** Régler le GBF sur une fréquence nettement inférieure à f_c (par exemple f_c/10). Mesurer à l'oscilloscope l'amplitude d'entrée V_e (voie 1) et de sortie V_s (voie 2).

     | Grandeur | Valeur |
     |---|---|
     | Fréquence réglée | |
     | V_e (crête ou crête-à-crête, à préciser) | |
     | V_s | |
     | Gain linéaire $A_v = V_s/V_e$ | |
     | Gain en dB $= 20 \times \log_{10}(A_v)$ | |

   - ❓ *Q3. Ce résultat est-il cohérent avec la prévision de la Q2 ?*
3. **(40 min) Balayage en fréquence.** Répéter la mesure de V_e et V_s pour une série de fréquences croissantes couvrant largement f_c (par exemple : f_c/10, f_c/3, f_c/2, f_c, 2×f_c, 5×f_c, 10×f_c).

     | Fréquence | V_e | V_s | $A_v = V_s/V_e$ | Gain (dB) |
     |---|---|---|---|---|
     | f_c/10 | | | | |
     | f_c/3 | | | | |
     | f_c/2 | | | | |
     | f_c | | | | |
     | 2×f_c | | | | |
     | 5×f_c | | | | |
     | 10×f_c | | | | |

   - Tracer le graphe du gain en dB en fonction de la fréquence (papier semi-log si possible, ou tableur).
   - ❓ *Q4. À quelle fréquence mesurée le gain vaut-il environ −3 dB ? Comparez cette fréquence à f_c calculée en Q1.*
   - ❓ *Q5. Que devient le gain (en dB) quand la fréquence est multipliée par 10, au-delà de f_c ? Estimez la pente de la courbe en dB par décade.*
4. **(20 min, bonus si le temps le permet) Mise en cascade.** Placer en série deux quadripôles RC identiques (le vôtre, plus celui d'un poste voisin, ou remonter un second RC en cascade).
   - ❓ *Q6. Prévoyez le gain total en dB à la fréquence f_c, en utilisant la propriété d'addition des gains en cascade (cours §5.1). Vérifiez par la mesure.*
5. **(10 min) Bilan.**
   - ❓ *Q7. Un tel circuit RC est appelé filtre passe-bas. Pourquoi ce nom est-il cohérent avec la courbe de gain que vous avez tracée ?*
   - ❓ *Q8. Citer une situation professionnelle CIEL où l'on a besoin de connaître le gain/l'atténuation d'une liaison en dB (Wi-Fi, câblage réseau, fibre optique...).*
- **Livrable :** tableaux de mesures remplis, graphe du gain en dB en fonction de la fréquence, réponses Q1 à Q8.
- **⚙ Si matériel insuffisant :** ce TP se transpose bien sur Falstad Circuit Simulator (§ Partie 1, alternative C) : le circuit RC, le GBF et l'oscilloscope y sont déjà virtuels, il suffit de relever V_e et V_s pour chaque fréquence testée et de calculer le gain en dB de la même façon.

---

---

<div style="page-break-after: always;"></div>

&nbsp;

<div style="page-break-after: always;"></div>

<a id="sec-chapitre-6-optique"></a>

## Chapitre 6 : Optique

*(À compléter au fil de l'année : mesure d'atténuation sur une liaison à fibre optique, relevé de l'ouverture numérique. Voir aussi TP 1.7 et TP 1.8 pour la LED et la photodiode.)*

---

<div style="page-break-after: always;"></div>

&nbsp;

<div style="page-break-after: always;"></div>

<a id="sec-chapitre-7-preparation-a-l-epreuve"></a>

## Chapitre 7 : Préparation à l'épreuve

*(À compléter au fil de l'année : exploitation de relevés type annale, analyse de documents techniques, exercices de mesure en temps limité.)*

---

<div style="page-break-after: always;"></div>

&nbsp;

<div style="page-break-after: always;"></div>

<a id="sec-projet-memoire-64-bits"></a>

## TP : Mémoire de 64 bits

<a id="sec-mem-projet-de-tp-construire-une-memoire-de-64-bits"></a>

# Projet de TP : Construire une mémoire de 64 bits

## Physique appliquée à l'informatique : Bac +1 / Bac +2

### Journal des modifications (version 2)

Cette version corrige deux défauts de conception de la version initiale et deux erreurs de
quantité dans les tableaux de matériel. Les sections concernées portent une note encadrée
expliquant le changement ; ces notes peuvent être supprimées une fois le dossier stabilisé.

| § | Nature | Raison |
|---|---|---|
| 1.3, 3.6 | Résistance de limitation obligatoire sur la bobine | Une bobine bobinée à la main est un quasi-court-circuit sous 5 V : fusible d'ampèremètre détruit, échauffement |
| 2.1 | Carte Arduino : Uno **ou** Mega 2560 | Le Mega convient et offre plus de broches |
| 2.1, 2.3 | Supports tulipe supprimés, extracteurs ajoutés | Inutiles sur breadboard, où ils ajoutent un point de panne |
| 2.2 | Références relais élargies | Le SRD-05VDC-SL-C n'est pas distribué partout |
| 2.3, 2.4, 2.5 | 74HC244/245 → **74HC541**, quantité 3 → **9** | Erreur de quantité rendant le TP3 irréalisable ; brochage plus lisible |
| 2.4, 5.8 | 74HC138 : 2 → **3** (deux en service) | Architecture à deux décodeurs |
| 4.9 | Buffer de lecture intégré au bloc du groupe | Cohérence avec l'interface exigée au §5.9 |
| 5.8 | Validation de l'écriture par l'entrée E3 | Sans cela, un front WRITE écrivait dans les 8 registres |
| 5.9 | Interface : SELECT dédoublé en SELECT_W / SELECT_R | Conséquence de l'architecture à deux décodeurs |
| 5.11, 5.12 | Buffers et chronogramme réécrits | Substitution de composant ; la capture a lieu en fin de pulse |
| 5.19 | Trois pannes et une question ajoutées | Nouveaux modes de défaillance |
| 7.5 | Trois entrées de vocabulaire | Notions introduites par la nouvelle architecture |

### Organisation générale

Ce projet est conçu pour un co-enseignement entre physique appliquée et
informatique.

La progression est volontairement concrète :

1.  **TP 1 : fabriquer et étudier un bit physique** à l'aide d'une
    bobine, d'un relais et d'une boucle de maintien.
2.  **TP 2 : construire un octet électronique** à l'aide de quatre
    circuits 74HC74.
3.  **TP 3 : réunir les octets de la classe** pour construire une
    mémoire collective de 64 bits.

> Le projet permet de passer progressivement du phénomène physique à
> l'architecture informatique : courant, champ magnétique, commutation,
> logique binaire, bascule, registre, adresse, bus et lecture/écriture.

------------------------------------------------------------------------

<a id="sec-mem-sommaire"></a>

# Sommaire

-   [1. Présentation du projet](#1-présentation-du-projet)
-   [2. Matériel général](#2-matériel-général)
-   [3. TP 1 : Un bit physique](#3-tp-1--un-bit-physique)
-   [4. TP 2 : Un octet électronique](#4-tp-2--un-octet-électronique)
-   [5. TP 3 : Une mémoire collective de 64
    bits](#5-tp-3--une-mémoire-collective-de-64-bits)
-   [6. Évaluation](#6-évaluation)
-   [7. Annexes techniques](#7-annexes-techniques)

------------------------------------------------------------------------

<a id="sec-mem-1-presentation-du-projet"></a>

# 1. Présentation du projet

## 1.1 Problématique générale

> Comment une information peut-elle être représentée par une grandeur
> physique, mémorisée dans un circuit, puis organisée avec d'autres
> informations pour former une mémoire informatique ?

## 1.2 Compétences visées

### Physique

-   Mesurer une tension, un courant et une résistance.
-   Utiliser la loi d'Ohm.
-   Comprendre le rôle d'une bobine.
-   Mettre en évidence un champ magnétique.
-   Étudier la commutation d'un contact.
-   Observer les temps de réponse d'un système.
-   Comprendre les notions d'énergie, de puissance et de dissipation.

### Électronique

-   Identifier les niveaux logiques.
-   Utiliser une breadboard.
-   Alimenter correctement un circuit intégré.
-   Comprendre une boucle de rétroaction.
-   Utiliser une bascule D.
-   Générer un signal d'horloge.
-   Utiliser un bus et des sorties trois états.

### Informatique

-   Représenter une information en binaire.
-   Manipuler des bits et des octets.
-   Comprendre un registre.
-   Comprendre l'adressage mémoire.
-   Comprendre les opérations READ et WRITE.
-   Programmer un microcontrôleur pour tester un circuit matériel.
-   Diagnostiquer une panne dans un système composé de plusieurs blocs.

## 1.3 Précautions générales

-   Utiliser une alimentation stabilisée de **5 V** pour les circuits
    logiques.
-   Ne jamais brancher directement une sortie Arduino sur une tension
    supérieure à 5 V.
-   Ne jamais court-circuiter deux sorties logiques.
-   Ne jamais laisser les entrées CMOS flottantes.
-   Ajouter un condensateur de découplage de **100 nF** près de chaque
    circuit intégré.
-   Vérifier le câblage avant la mise sous tension.
-   Pour les bobines, prévoir une diode de roue libre lorsque la bobine
    est commandée par un transistor ou une sortie électronique.
-   Ne jamais alimenter une bobine bobinée à la main directement sous
    5 V : sa résistance de quelques dixièmes d'ohm en ferait un
    court-circuit. Toujours insérer la résistance de limitation prévue
    au §3.6.
-   Ne pas alimenter une bobine directement avec une sortie Arduino sans
    étage de commande.

------------------------------------------------------------------------

<a id="sec-mem-2-materiel-general"></a>

# 2. Matériel général

> **Base de calcul retenue pour tout ce dossier : 16 élèves = 8 binômes.** C'est un point fort de ce projet : 8 binômes construisent chacun un octet au TP2, et les 8 octets s'assemblent naturellement en une mémoire de 64 bits au TP3 (8 × 8 = 64). Les quantités ci-dessous sont calculées pour ce format, avec une marge de sécurité (composants qui grillent, fils qui cassent, oublis) d'environ 15 à 20 %.

## 2.1 Matériel commun aux trois TP

| Matériel | Référence / caractéristique conseillée | Quantité pour 16 élèves | Répartition |
|---|---|---|---|
| Carte Arduino | Uno R3, Uno R4 **ou Mega 2560** (ou compatible) | **8** | 1 par binôme, réutilisé aux 3 TP |
| Breadboard | 830 points, format standard | **9** | 1 par binôme + 1 pour le bus commun du TP3 |
| Fils de câblage Dupont mâle-mâle | Kit assorti, longueurs variées | **9 lots** (≈ 65 fils/lot) | 1 par binôme + 1 lot pour le bus commun |
| Alimentation 5 V stabilisée | Module régulateur 5 V/1 A minimum, ou bloc secteur 5 V | **8** (idéal) ou 4 si mutualisées 2 par 2 | 1 par binôme si possible |
| Multimètre | Mesure V/A/Ω, avec pointes de touche | **8** | 1 par binôme |
| Oscilloscope | 2 voies minimum, bande passante ≥ 20 MHz | **2 à 4** | En rotation entre binômes (TP1 Partie D, TP2 Partie D) |
| Générateur de fonctions (GBF) | 0-1 MHz au moins | **1** (facultatif) | Pour comparer un signal d'horloge propre à un bouton |
| LED 5 mm | Rouge ou vert, standard | **90** | 64 pour les 8 registres (TP2), 16 pour indicateurs TP1, marge |
| Résistances 220 Ω à 1 kΩ (LED) | 1/4 W | **90** | Une par LED |
| Résistances 10 kΩ (rappel/pull-up) | 1/4 W | **40** | Bascules, boutons, entrées non utilisées |
| Condensateurs céramique 100 nF | Découplage, un par circuit intégré | **45** | 32 pour les 74HC74, ~10 pour décodeur/buffers, marge |
| Boutons-poussoirs | Type breadboard 4 pattes | **30** | SET/RESET (TP1), CLOCK/WRITE (TP2) |
| DIP-switch 8 positions | Pas 2,54 mm (breadboard) | **8** | 1 par binôme, sert d'entrée de données au TP2 puis reste en place au TP3 |
| Pince à dénuder / pince coupante | : | **8** | 1 par binôme (utile dès le TP1 pour le fil émaillé) |
| Extracteur de circuits intégrés | Pince en U pour boîtiers DIL | **2** | Mutualisés pour la classe (voir note ci-dessous) |

> **Choix de la carte.** Le Mega 2560 convient parfaitement et offre davantage de broches, ce qui
> simplifie le TP3. Les codes de ce dossier fonctionnent tels quels sur les deux familles. Sur Mega
> comme sur Uno, la broche analogique A0 utilisée en sortie numérique s'écrit bien `A0` dans le code
> (et non `14`). Les binômes peuvent avoir des cartes différentes sans que cela pose problème,
> chaque registre étant piloté indépendamment avant l'assemblage collectif.

> **Pourquoi pas de supports tulipe.** Les supports de circuit intégré sont utiles sur circuit
> imprimé soudé, pas sur breadboard : la breadboard *est* déjà un support à contacts. Les ajouter
> revient à insérer un étage de contacts supplémentaire, donc un point de panne intermittente de
> plus : exactement ce qu'on cherche à éviter dans un montage qui comporte 5 boîtiers par poste et
> 8 postes interconnectés. Le seul risque réel est de tordre des broches en extrayant un boîtier
> d'une breadboard serrée : deux extracteurs partagés par la classe règlent le problème.

## 2.2 Matériel spécifique au TP 1 (par binôme × 8)

| Matériel | Référence / caractéristique conseillée | Quantité pour 8 binômes |
|---|---|---|
| Fil de cuivre émaillé | Diamètre 0,3 à 0,5 mm, bobine de 15-20 m | **8 bobines** |
| Noyau ferromagnétique | Clou ou vis en fer/acier, 4-6 cm, ou noyau ferrite de récupération | **8 à 16** (2 par binôme conseillé, pour recommencer si besoin) |
| Relais électromécanique 5 V | Bobine 5 Vcc, contact 1 RT (SPDT), montage sur CI. Références possibles : **Songle SRD-05VDC-SL-C** (bobine 55 Ω), **Finder 36.11-5** (70 Ω), **Omron G5V1-5** (167 Ω) | **16** (2 par binôme : 1 pour le montage manuel, 1 pour la commande Arduino) + 2 de rechange |
| Diode de roue libre | 1N4001, 1N4004 ou 1N4148 | **20** (2 par binôme + marge) |
| Transistor NPN | 2N2222 ou BC547, boîtier TO-92 | **16** (2 par binôme + marge) |
| Résistance 1 kΩ (base transistor) | 1/4 W | **16** |
| Petites pièces métalliques (test d'attraction) | Trombones ou vis courtes | **40** (5 par binôme) |
| Fil de connexion souple (relais → breadboard) | Section fine, si le relais n'est pas au pas 2,54 mm | **8 jeux** |
| **Résistance de puissance** | **10 Ω / 5 W (bobinée ou céramique)** | **10** (1 par binôme + marge) |

> **Choix du relais.** Ces trois références sont interchangeables pour ce TP. Le critère à respecter
> est la bobine 5 Vcc et un contact inverseur (1 RT / SPDT) donnant accès à COM, NO et NC. Le Finder
> et le Songle, plus volumineux, produisent un « clac » franchement audible : ce qui a une vraie
> valeur pédagogique dans un TP dont l'objet est justement de rendre la commutation sensible. Le
> Omron, plus compact et à bobine plus sensible (30 mA contre 70-90 mA), se pique plus facilement
> sur breadboard mais reste discret.
>
> **Ne pas commander de « module relais Arduino ».** Ces platines intègrent déjà le transistor, la
> diode et parfois un optocoupleur, et ne donnent pas accès aux broches de la bobine. La boucle de
> maintien du §3.8 y est impossible à câbler, et tout l'intérêt du TP disparaît.

> **La résistance de puissance n'est pas facultative.** Voir §3.6 : une bobine bricolée présente
> une résistance de l'ordre de 0,3 à 1 Ω et se comporte quasiment comme un court-circuit sous 5 V.

## 2.3 Matériel spécifique au TP 2 (par binôme × 8)

| Matériel | Référence / caractéristique conseillée | Quantité pour 8 binômes |
|---|---|---|
| Circuit intégré 74HC74 | Double bascule D, boîtier DIP-14 | **36** (4 par binôme + 4 de rechange) |
| LED (voir tableau général) | : | 64 (8 par binôme) |
| Résistance LED (voir tableau général) | : | 64 |
| DIP-switch 8 positions (voir tableau général) | Entrée de données D0-D7 | 8 (1 par binôme) |
| Bouton-poussoir CLOCK/WRITE | : | 8 (1 par binôme) |
| Condensateur 100 nF (voir tableau général) | 1 par 74HC74 | 32 |
| Circuit intégré **74HC541** | Buffer octal 3 états, brochage *flow-through*, DIP-20 | **9** (1 par binôme + 1 de rechange) |
| Arduino (voir tableau général) | Génération de WRITE, lecture des Q | 8 (réutilisé du TP1) |

> **Le buffer de lecture est construit dès le TP2.** Le §5.9 exige que chaque groupe livre « une
> sortie de lecture désactivable ». Ce buffer appartient donc au bloc du groupe et non à la
> breadboard commune : il est monté et testé en même temps que le registre, ce qui allège d'autant
> la séance d'assemblage collectif. Voir §4.9.

## 2.4 Matériel supplémentaire au TP 3 (mutualisé pour la classe entière)

| Matériel | Référence / caractéristique conseillée | Quantité pour la classe (8 groupes) |
|---|---|---|
| Registres 8 bits (TP2) | Réutilisés tels quels | 8 (1 par groupe, déjà construits) |
| Circuit intégré 74HC138 | Décodeur 3 vers 8, boîtier DIP-16 | **3** (décodeur d'écriture + décodeur de lecture + 1 rechange) |
| Buffers 74HC541 | Déjà montés sur le bloc de chaque groupe au TP2 (§4.9) | : (voir §2.3) |
| Résistances de rappel 10 kΩ | Selon montage (voir tableau général) | Puisées dans le stock général |
| Bornier à vis ou barrette de connexion 13 points | Interface standardisée par groupe (VCC, GND, DATA0-7, SELECT_W, SELECT_R, RESET) | **8 jeux** |
| Plaque ou breadboard commune | Support du décodeur, des buffers et du bus partagé | **1** (la 9ᵉ breadboard du tableau général) |
| Fils de bus repérés par couleur | 8 lignes DATA communes + 8 lignes SELECT_W + 8 lignes SELECT_R + RESET commun | **≈ 25 fils**, à prévoir dans un code couleur dédié (cf. §7.1) |
| Arduino "contrôleur" | Un des 8 Arduino du binôme désigné pour piloter adresse + bus | 1 (pris sur le stock général) |

> **Pourquoi 9 buffers et non 3.** L'architecture du §5.11 place un buffer par registre : chacun des
> 8 groupes doit pouvoir isoler sa sortie du bus commun indépendamment des autres. Avec 3 boîtiers,
> seuls trois groupes peuvent se connecter au bus et la mémoire collective ne peut pas fonctionner.
>
> **Pourquoi le 74HC541 plutôt que le 74HC244 ou le 74HC245.** Les trois remplissent la même
> fonction (buffer octal à sorties trois états). Le 74HC245 est un émetteur-récepteur bidirectionnel :
> il ajoute une broche DIR dont ce montage n'a pas l'usage, la liaison registre → bus étant
> unidirectionnelle. Le 74HC244 est unidirectionnel mais alterne entrées et sorties de part et
> d'autre du boîtier, ce qui produit huit fils croisés sur breadboard. Le 74HC541 a un brochage dit
> *flow-through* : les huit entrées d'un côté, les huit sorties de l'autre. Les fils vont tout droit
> du registre vers le bus. Sur un montage 8 bits câblé par des étudiants qui découvrent la notion,
> c'est un gain de temps de dépannage considérable.
>
> **Pourquoi 3 décodeurs et non 2.** L'architecture retenue (§5.8) utilise deux décodeurs en
> service : l'un valide par WRITE, l'autre par READ. Cette solution rend inutile toute porte
> logique de validation supplémentaire.

## 2.5 Synthèse budgétaire des composants actifs à commander

Pour ne rien oublier lors de la commande, voici le total des composants actifs (hors passifs génériques déjà dans le tableau 2.1) :

| Composant | Référence | Quantité totale à commander |
|---|---|---|
| Relais 5 V 1 RT | SRD-05VDC-SL-C, Finder 36.11-5 ou Omron G5V1-5 | 18 (16 + 2 rechange) |
| Diode roue libre | 1N4001/1N4004/1N4148 | 20 |
| Transistor NPN | 2N2222 ou BC547 | 16 |
| Résistance de puissance | 10 Ω / 5 W | 10 |
| Circuit 74HC74 | Double bascule D, DIP-14 | 36 |
| Circuit 74HC138 | Décodeur 3→8, DIP-16 | 3 |
| Circuit **74HC541** | Buffer 3 états *flow-through*, DIP-20 | 9 |
| Carte Arduino | Uno R3/R4, Mega 2560 ou compatible | 8 |

> **Où commander.** Ces boîtiers logiques sont des articles de catalogue permanent chez les
> distributeurs français (Gotronic, TME, Reichelt, RS). Les lots à bas prix vendus par des
> revendeurs tiers sur les places de marché proviennent souvent de déstockage, sans réassort ni
> traçabilité : un 74HC74 remarqué produit un défaut intermittent qu'aucun binôme ne saura
> diagnostiquer, et peut coûter une séance entière. Gotronic accepte par ailleurs le paiement
> différé par mandat administratif sur bon de commande, ce qui convient à une commande passée par
> l'intendance.

## 2.6 Alternative numérique (si le matériel manque ou pour préparer le câblage en amont)

Ce projet mobilise des composants relativement spécifiques et coûteux en quantité (36 circuits 74HC74, 18 relais, décodeur, buffers...). Si l'établissement ne dispose pas encore de tout ce matériel, ou si l'on veut sécuriser la logique avant de câbler en vrai, chaque TP a un équivalent numérique fiable. La bonne pratique consiste souvent à faire valider le montage en simulation d'abord, puis à câbler en réel ensuite : les élèves arrivent à l'établi avec un schéma déjà fonctionnel, ce qui réduit fortement le temps perdu en dépannage.

### Outils utilisés

| Outil | Usage dans ce projet | Accès |
|---|---|---|
| Logisim Evolution | Simulateur de logique numérique : bascules D, registres, décodeurs, bus, sorties 3 états, horloge. C'est l'outil le plus adapté aux TP2 et TP3. | logisim-evolution.github.io (gratuit, à installer, existe aussi en version "Logisim Evolution Web" jouable dans le navigateur) |
| Falstad Circuit Simulator | Simulateur de circuits analogiques/électromécaniques : relais, bobines, transistors, diodes. Le plus adapté au TP1. | falstad.com/circuit |
| PhET : "Aimants et électroaimants" | Simulation qualitative du champ magnétique produit par une bobine, avec variation du courant et du nombre de spires. | phet.colorado.edu |
| Tinkercad Circuits | Simulateur de breadboard avec Arduino intégré et exécution réelle du code C++. Utile pour valider les programmes Arduino des TP2/TP3 avant le câblage réel. | tinkercad.com/circuits (compte gratuit) |

### Alternative numérique : TP1 (bit physique)

Le TP1 a une forte dimension "manipulation physique" (bobiner du fil, sentir l'attraction magnétique, entendre le clic du relais) qui ne se remplace pas entièrement par une simulation. Deux niveaux de repli sont proposés selon ce qui manque réellement :

- **S'il manque seulement les relais** (le plus probable, car ce sont les composants les moins courants d'un labo) : Falstad Circuit Simulator possède un composant "relais" dans sa bibliothèque. Câbler le circuit SET/RESET exactement comme au §3.8, en repérant bien le contact NO simulé. Le simulateur affiche l'état du contact en temps réel (couleur du fil), ce qui rend la boucle de maintien très visuelle, y compris pour les groupes qui ont eu du mal à la comprendre en réel.
- **S'il manque le fil de cuivre et les noyaux** (partie A, l'électroaimant lui-même) : utiliser la simulation PhET "Aimants et électroaimants", qui permet de faire varier le nombre de spires et le courant, et d'observer l'intensité du champ magnétique représenté par des lignes de champ. Cela ne remplace pas le geste de bobiner, mais permet de retrouver les mêmes observations qualitatives (Q1 à Q4 du §3.6) si le matériel n'arrive pas à temps.
- **Partie E (commande Arduino du relais)** : entièrement simulable sur Tinkercad Circuits, qui propose un relais et un transistor dans sa bibliothèque de composants, avec le code Arduino exécuté virtuellement.

### Alternative numérique : TP2 (registre 8 bits)

C'est le TP qui se simule le mieux, car Logisim Evolution propose directement les bascules D, l'horloge et les entrées/sorties logiques en composants prêts à l'emploi.

1. Ouvrir un nouveau circuit dans Logisim Evolution.
2. Dans la bibliothèque "Memory", placer 8 bascules D ("D Flip-Flop"), les nommer D0 à D7.
3. Dans la bibliothèque "Wiring", ajouter une horloge ("Clock") et la relier à l'entrée CLK de chaque bascule (équivalent de la ligne WRITE commune du §4.9).
4. Ajouter 8 entrées ("Input Pin") reliées chacune à l'entrée D d'une bascule : elles jouent le rôle du DIP-switch physique.
5. Ajouter 8 sorties ("Output Pin", ou directement des LED de la bibliothèque "I/O") reliées aux sorties Q : elles jouent le rôle des LED physiques.
6. Simuler : cliquer sur les entrées pour changer les bits, déclencher un front d'horloge (bouton ou clic sur l'horloge en mode pas-à-pas), vérifier que les sorties ne changent qu'au moment du front : exactement le comportement observé au tableau du §4.7.
7. Une fois le comportement validé en simulation, le câblage réel avec les 4 boîtiers 74HC74 reproduit exactement ce schéma logique (chaque 74HC74 = 2 bascules D de la simulation).

Logisim permet d'afficher la valeur du registre directement en décimal ou en hexadécimal via un composant "Hex Digit Display", ce qui permet de vérifier très vite qu'un octet écrit correspond bien à la valeur attendue, sans avoir à décoder 8 LED à l'œil.

### Alternative numérique : TP3 (mémoire collective de 64 bits)

Le TP3 est le plus ambitieux à câbler en réel (8 groupes + décodeur + bus), et c'est aussi celui où une simulation collective préalable rassure le plus les élèves avant l'assemblage physique.

1. Reprendre dans Logisim Evolution le registre 8 bits validé au TP2 (on peut le transformer en "sous-circuit" réutilisable 8 fois, via le menu "Project > Add Circuit", pour éviter de tout redessiner).
2. Ajouter un composant "Decoder" (bibliothèque "Plexers") réglé sur 3 bits de sélection, qui reproduit directement le 74HC138 du §5.8 : chacune de ses 8 sorties active un sous-circuit registre.
3. Ajouter des composants "Tristate Buffer" (bibliothèque "Wiring") sur la sortie de chaque registre, commandés par la ligne SELECT_R issue du second décodeur : c'est l'équivalent exact des 74HC541 du §5.11, et Logisim affiche explicitement l'état haute impédance (en général en couleur différente sur le fil), ce qui rend le concept de conflit de bus très concret.

   Le composant "Decoder" de la bibliothèque *Plexers* possède une entrée `Enable` qui joue exactement le rôle de l'entrée E3 du 74HC138. Placer **deux** décodeurs partageant les mêmes trois bits de sélection, l'un validé par un bouton WRITE, l'autre par un bouton READ, reproduit fidèlement le montage matériel du §5.8 : y compris le fait qu'un conflit de bus devienne impossible par construction.
4. Relier les 8 sorties trois états sur un même bus DATA commun, et vérifier en simulation qu'un conflit apparaît (couleur d'erreur) si deux sorties sont activées en même temps par erreur : c'est exactement l'erreur décrite en §5.10, mais sans risquer d'endommager un vrai circuit intégré pour la démonstration.
5. Piloter l'adresse avec 3 entrées "Input Pin", et vérifier qu'on peut écrire puis relire chacun des 8 octets indépendamment, avant de reproduire l'architecture validée avec le matériel réel le jour de l'assemblage collectif (§5.9, montage détaillé pas à pas).

Même si le matériel physique est disponible pour toute la classe, préparer et valider l'architecture en Logisim par binôme avant le jour de l'assemblage collectif permet de gagner du temps : les erreurs de logique (mauvais sens du décodeur, oubli d'un buffer) sont corrigées à l'écran plutôt que découvertes au milieu de 8 breadboards interconnectées.

------------------------------------------------------------------------

<a id="sec-mem-3-tp-1-un-bit-physique"></a>

# 3. TP 1 : Un bit physique

## 3.1 Titre

**Fabriquer et étudier une cellule mémoire électromécanique**

## 3.2 Durée

Environ **3 heures**.

## 3.3 Problématique

> Comment un circuit électrique peut-il conserver un état après la
> disparition de l'action initiale ?

## 3.4 Objectifs

À la fin du TP, l'étudiant doit être capable de :

-   Mesurer la résistance d'une bobine.
-   Relier tension, courant et résistance.
-   Expliquer le rôle du champ magnétique.
-   Construire un électroaimant simple.
-   Utiliser un relais électromécanique.
-   Réaliser une fonction SET/RESET.
-   Expliquer une boucle de maintien.
-   Identifier les limites d'une mémoire volatile.

------------------------------------------------------------------------

## 3.5 Rappels théoriques

### Loi d'Ohm

La relation entre tension, courant et résistance est :

\[ U = R I \]

Avec :

-   \(U\) en volts ;
-   \(R\) en ohms ;
-   \(I\) en ampères.

### Puissance électrique

\[ P = U I = R I\^2 = `\frac{U^2}{R}`{=tex} \]

Une bobine alimentée dissipe une partie de l'énergie sous forme de
chaleur.

### Champ magnétique

Une bobine parcourue par un courant produit un champ magnétique. Le
champ peut attirer une armature métallique et provoquer le déplacement
d'un contact.

### Principe de la mémoire

Un état binaire peut être représenté par deux situations :

-   Relais au repos : `0`.
-   Relais activé : `1`.

La mémoire existe lorsque le circuit possède un mécanisme permettant de
conserver cet état sans maintenir le bouton appuyé.

------------------------------------------------------------------------

## 3.6 Partie A : Fabriquer un électroaimant

### Matériel

-   Fil de cuivre émaillé.
-   Noyau ferromagnétique.
-   Alimentation 5 V.
-   **Résistance de puissance 10 Ω / 5 W** (limitation de courant, obligatoire).
-   Multimètre.
-   Quelques trombones.

### Travail demandé

1.  Enrouler le fil de cuivre autour du noyau.
2.  Dénuder les deux extrémités du fil.
3.  Mesurer la résistance de la bobine.
4.  Alimenter la bobine avec une tension limitée.
5.  Observer l'attraction des trombones.
6.  Modifier le nombre de spires ou le courant.
7.  Comparer les résultats.

### Montage détaillé pas à pas

1.  **Préparer le noyau.** Choisir un clou ou une vis en fer d'environ 5 cm. Nettoyer la surface si nécessaire (pas de peinture ni de rouille).
2.  **Bobiner 50 premières spires.** En partant à 5 cm d'une extrémité du fil (pour avoir de quoi dénuder ensuite), enrouler le fil de cuivre bien serré autour du noyau, spire contre spire, toujours dans le même sens. Compter les spires à voix haute ou par groupes de 10. Laisser à nouveau 5 cm de fil libre à l'autre extrémité avant de couper.
3.  **Fixer l'enroulement.** Un tour de ruban adhésif à chaque extrémité de l'enroulement empêche les spires de se défaire pendant la manipulation.
4.  **Dénuder les deux extrémités.** Le fil de cuivre émaillé est isolé par un vernis, invisible à l'œil nu : il faut le gratter avec un cutter, du papier de verre fin, ou le brûler légèrement à la flamme d'un briquet puis frotter, jusqu'à voir le cuivre brillant sur 1 à 2 cm.
5.  **Vérifier le contact.** Au multimètre en mode continuité (ou ohmmètre), toucher les deux extrémités dénudées : une valeur de résistance stable et non infinie confirme que le dénudage est correct des deux côtés.
6.  **Mesurer la résistance à froid.** Relever R₀ avec le multimètre, bobine non alimentée.
7.  **Câbler l'alimentation avec sa résistance de limitation.** Monter en série : borne +5 V de l'alimentation → **résistance de puissance 10 Ω / 5 W** → bobine → multimètre en mode ampèremètre (calibre 10 A) → borne 0 V. La résistance n'est pas facultative : sans elle, la bobine se comporte quasiment comme un court-circuit.
8.  **Mettre sous tension progressivement.** Si l'alimentation dispose d'un réglage de limitation de courant, la régler à 0,5 A avant d'allumer. Sinon, monter la tension par paliers depuis 0 V en surveillant le courant. Couper dès que la résistance de puissance ou la bobine deviennent chaudes au toucher : ces essais se font par séquences de quelques secondes.
9.  **Tester l'attraction.** Approcher un trombone de l'extrémité du noyau : il doit être attiré et rester collé.
10. **Compter le nombre de trombones maximum** que le montage peut soutenir en chaîne.
11. **Recommencer avec un nombre de spires différent** (par exemple 100 spires) et comparer le nombre de trombones tenus, à courant comparable.
12. **Couper l'alimentation entre chaque essai** pour éviter l'échauffement prolongé.

### Tableau de mesures

  --------------------------------------------------------------------------
       Nombre de     Résistance        Tension        Courant      Nombre de
          spires                                                   trombones
  -------------- -------------- -------------- -------------- --------------
                                                              

                                                              

                                                              
  --------------------------------------------------------------------------

### Questions

1.  La résistance augmente-t-elle avec le nombre de spires ?
2.  Que se passe-t-il lorsque le courant augmente ?
3.  Pourquoi le noyau métallique renforce-t-il l'effet magnétique ?
4.  La bobine chauffe-t-elle ? Pourquoi ?
5.  Vérifier expérimentalement la loi d'Ohm.
6.  Calculer la puissance dissipée.
7.  Mesurez la résistance de votre bobine seule. Quel courant circulerait
    sous 5 V **sans** la résistance de limitation ? Comparez au calibre de
    votre ampèremètre : que se passerait-il concrètement ?
8.  Avec la résistance de 10 Ω en série, calculez le courant théorique puis
    comparez à la mesure. Quelle fraction de la tension totale se retrouve
    aux bornes de la bobine ? Qu'est-ce que cela dit sur la répartition des
    tensions dans un diviseur ?

> **Note pour le professeur.** Les questions 7 et 8 transforment une contrainte matérielle en
> contenu de cours : le diviseur de tension et la lecture d'un calibre d'ampèremètre sont au
> programme, et l'élève les rencontre ici sur un cas où l'erreur a une conséquence physique
> visible. La valeur de 10 Ω est un ordre de grandeur : elle est à ajuster après mesure d'un
> bobinage témoin réalisé en préparation de séance.

------------------------------------------------------------------------

## 3.7 Partie B : Utiliser un relais

### Principe

Un relais possède généralement :

-   Une bobine.
-   Un contact commun `COM`.
-   Un contact normalement ouvert `NO`.
-   Un contact normalement fermé `NC`.

Lorsque la bobine est alimentée, le contact change de position.

### Schéma de principe

<img src="figures/Tp/schema_relais_set_reset.svg" width="380" alt="circuitA_relais_set_reset"/>

Ce schéma représente le principe de maintien (détaillé en Partie C). Le câblage exact dépend du relais utilisé.

### Attention

Le contact du relais ne doit pas être confondu avec la bobine :

-   La bobine est la partie électromagnétique.
-   Le contact est un interrupteur commandé mécaniquement.
-   Les deux parties sont électriquement isolées dans un relais
    classique.

------------------------------------------------------------------------

## 3.8 Partie C : Construire une mémoire SET/RESET

### Principe fonctionnel

-   Appuyer sur `SET` active le relais.
-   Le contact auxiliaire maintient la bobine alimentée.
-   Relâcher `SET` ne désactive pas le relais.
-   Appuyer sur `RESET` coupe la boucle de maintien.
-   Le relais revient à l'état de repos.

### Schéma logique

<img src="figures/Tp/schema_relais_set_reset.svg" width="340" alt="circuitA_relais_set_reset"/>

### Manipulation

1.  Mettre le circuit hors tension.
2.  Vérifier le câblage.
3.  Alimenter le circuit.
4.  Appuyer sur `SET`.
5.  Relâcher `SET`.
6.  Vérifier que le relais reste activé.
7.  Appuyer sur `RESET`.
8.  Vérifier que le relais retombe.
9.  Répéter plusieurs fois.

### Montage détaillé pas à pas (câblage sur breadboard)

Avant de commencer, identifier les 5 broches du relais avec le multimètre en mode continuité, hors tension : deux broches correspondent à la bobine (résistance de quelques dizaines à centaines d'ohms), les trois autres au contact (COM, NO, NC : COM relié à NO quand le relais est activé, à NC au repos).

1.  **Placer le relais** à cheval sur la rainure centrale de la breadboard (ou sur une zone dégagée s'il est trop gros, avec des fils volants).
2.  **Câbler la bobine du relais** : une broche vers le rail (+), l'autre vers un point de jonction commun appelé nœud A (pas encore vers le rail (−) directement).
3.  **Câbler le bouton SET** entre le rail (+) et le nœud A : ainsi, appuyer sur SET amène le (+) sur la bobine via le nœud A.
4.  **Câbler le contact NO du relais** entre le rail (+) et le nœud A également (en parallèle du bouton SET) : c'est la boucle de maintien : une fois le relais activé, son propre contact NO reproduit l'action du bouton SET.
5.  **Relier le nœud A à une broche de la bobine**, l'autre broche de la bobine allant au rail (−) *via* le bouton RESET (normalement fermé/non appuyé = circuit passant).
6.  **Vérifier avant mise sous tension** : au repos, SET et RESET relâchés, le multimètre en continuité doit indiquer un circuit ouvert entre (+) et (−) à travers la bobine (le contact NO n'est pas encore fermé, seul un appui sur SET peut amorcer la boucle).
7.  **Mettre sous tension** l'alimentation 5 V.
8.  **Appuyer brièvement sur SET** : le relais doit s'activer (clic audible), le contact NO se ferme et prend le relais du bouton.
9.  **Relâcher SET** : le relais doit rester activé (LED témoin allumée si vous en avez ajouté une sur la sortie Q, ou clic maintenu).
10. **Appuyer sur RESET** : la boucle de maintien est coupée, le relais retombe.
11. **Répéter l'essai 5 fois** pour vérifier la reproductibilité, en notant si le relais "colle" parfois (signe d'un contact usé ou d'un mauvais câblage).

> **⚠ Point de vigilance :** l'erreur la plus fréquente est d'oublier de relier le contact NO en **parallèle** du bouton SET (et non en série). Si le montage ne "tient" pas après relâchement de SET, c'est presque toujours ce point qu'il faut vérifier en premier.

### Questions

1.  Où est stockée l'information ?
2.  Pourquoi le relais reste-t-il activé ?
3.  Quel rôle joue la rétroaction ?
4.  Que se passe-t-il si l'alimentation est coupée ?
5.  Cette mémoire est-elle volatile ?
6.  Peut-on écrire et lire simultanément ?
7.  Quelle différence entre un bouton et une mémoire ?

------------------------------------------------------------------------

## 3.9 Partie D : Mesures dynamiques

### Mesures possibles

-   Résistance de la bobine.
-   Courant d'activation.
-   Tension de la bobine.
-   Temps d'activation.
-   Temps de retombée.
-   Tension sur le contact.
-   Rebond du contact.

### Oscilloscope

Brancher :

-   Voie 1 : tension de commande.
-   Voie 2 : tension sur la sortie du relais.

Observer le décalage entre la commande et le changement de sortie.

### Questions

1.  Pourquoi la sortie ne change-t-elle pas instantanément ?
2.  Qu'est-ce que le temps de propagation ?
3.  Pourquoi un contact mécanique peut-il rebondir ?
4.  Pourquoi un bouton peut-il générer plusieurs transitions ?

------------------------------------------------------------------------

## 3.10 Partie E : Commande par Arduino

### Objectif

Utiliser l'Arduino pour commander le relais sans alimenter directement
sa bobine depuis une sortie.

### Schéma de câblage

<img src="figures/Tp/schema_transistor_relais_arduino.svg" width="380" alt="circuitB_transistor_relais_arduino"/>

### Explication

Le transistor joue le rôle d'interrupteur électronique. La sortie
Arduino commande la base du transistor, tandis que le courant de la
bobine circule dans le transistor.

La diode protège le transistor contre la surtension produite lors de la
coupure du courant dans la bobine.

### Code Arduino

``` cpp
const byte RELAY_PIN = 8;
const byte SET_PIN = 2;
const byte RESET_PIN = 3;

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(SET_PIN, INPUT_PULLUP);
  pinMode(RESET_PIN, INPUT_PULLUP);

  digitalWrite(RELAY_PIN, LOW);
}

void loop() {
  if (digitalRead(SET_PIN) == LOW) {
    digitalWrite(RELAY_PIN, HIGH);
  }

  if (digitalRead(RESET_PIN) == LOW) {
    digitalWrite(RELAY_PIN, LOW);
  }
}
```

### Remarque

Ce programme commande le relais, mais la conservation de l'état doit
être réalisée par le circuit physique de maintien. Si l'Arduino est
réinitialisé ou débranché, il ne faut pas confondre l'état logiciel avec
l'état physique.

------------------------------------------------------------------------

## 3.11 Bilan du TP 1

L'étudiant doit être capable de compléter la phrase suivante :

> Un bit peut être représenté par deux états physiques distincts. Dans
> notre montage, l'état est conservé grâce à une boucle de rétroaction
> utilisant un contact de relais.

### Production attendue

-   Schéma électrique annoté.
-   Tableau de mesures.
-   Calculs de résistance et de puissance.
-   Réponses aux questions.
-   Conclusion d'une dizaine de lignes.

------------------------------------------------------------------------

<a id="sec-mem-4-tp-2-un-octet-electronique"></a>

# 4. TP 2 : Un octet électronique

## 4.1 Titre

**Construire un registre 8 bits avec des bascules D 74HC74**

## 4.2 Durée

Environ **3 à 4 heures**.

## 4.3 Problématique

> Comment mémoriser huit bits simultanément et les relire sous la forme
> d'un octet ?

## 4.4 Objectifs

-   Comprendre le fonctionnement d'une bascule D.
-   Identifier les broches D, CLK, Q, PRE et CLR.
-   Comprendre le rôle du front d'horloge.
-   Construire un registre 8 bits.
-   Utiliser des boutons ou un DIP-switch pour fournir les données.
-   Utiliser l'Arduino pour générer WRITE.
-   Lire les sorties avec des LED ou l'Arduino.
-   Comprendre la différence entre entrée et sortie mémorisée.

------------------------------------------------------------------------

## 4.5 Présentation du 74HC74

Le 74HC74 contient deux bascules D indépendantes.

Chaque bascule possède notamment :

-   `D` : entrée de donnée.
-   `CLK` : entrée d'horloge.
-   `Q` : sortie mémorisée.
-   `!Q` : sortie complémentaire.
-   `PRE` : preset asynchrone.
-   `CLR` : clear asynchrone.

Les entrées `PRE` et `CLR` sont généralement actives à l'état bas. Il
faut donc les maintenir à l'état haut lorsqu'elles ne sont pas
utilisées.

### Principe

``` text
D --------------------+
                      |
                      v
                 +---------+
CLK ------------>|  D FF   |--------> Q
                 +---------+
```

La bascule capture la valeur de D sur un front montant de CLK.

------------------------------------------------------------------------

## 4.6 Brochage utile du 74HC74

Le brochage exact doit toujours être vérifié dans la datasheet du
fabricant utilisé.

Pour un 74HC74 classique en boîtier DIP-14 :

    Broche Fonction
  -------- ----------
         1 1CLR
         2 1D
         3 1CLK
         4 1PRE
         5 1Q
         6 1!Q
         7 GND
         8 2!Q
         9 2Q
        10 2PRE
        11 2CLK
        12 2D
        13 2CLR
        14 VCC

------------------------------------------------------------------------

## 4.7 Partie A : Tester une bascule D

### Matériel

-   1 × 74HC74.
-   1 LED.
-   1 résistance de LED.
-   1 bouton DATA.
-   1 bouton CLOCK.
-   Résistances de rappel.
-   Alimentation 5 V.

### Schéma de principe

<img src="figures/Tp/schema_bascule_D_test.svg" width="380" alt="circuitC_bascule_D_test"/>

### Manipulation

1.  Mettre DATA à 0.
2.  Générer un front montant.
3.  Observer Q.
4.  Mettre DATA à 1.
5.  Observer que Q ne change pas immédiatement.
6.  Générer un front montant.
7.  Observer Q passer à 1.
8.  Remettre DATA à 0.
9.  Vérifier que Q reste à 1 jusqu'au prochain front.

### Montage détaillé pas à pas (câblage sur breadboard)

1.  **Placer le 74HC74** à cheval sur la rainure centrale de la breadboard, repère (encoche ou point) vers la gauche pour orienter correctement le comptage des broches.
2.  **Alimenter le circuit en premier**, avant tout autre câblage : broche 14 (VCC) vers le rail (+5 V), broche 7 (GND) vers le rail (0 V).
3.  **Placer le condensateur de découplage 100 nF** directement entre les broches 14 et 7, au plus près du boîtier (les deux pattes du condensateur peuvent aller dans les mêmes colonnes que VCC et GND).
4.  **Câbler PRE et CLR au repos actif haut** : relier la broche 4 (1PRE) et la broche 1 (1CLR) directement au rail +5 V (elles sont actives à l'état bas, donc il faut les maintenir hautes pour ne pas perturber la bascule).
5.  **Câbler l'entrée D (broche 2)** : un DIP-switch ou un bouton avec résistance de rappel de 10 kΩ vers +5 V, permettant de forcer D à 0 ou 1.
6.  **Câbler l'entrée CLK (broche 3)** : un bouton-poussoir entre CLK et +5 V, avec une résistance de rappel de 10 kΩ entre CLK et GND (état bas au repos, front montant à l'appui).
7.  **Câbler la sortie Q (broche 5)** : une résistance de 1 kΩ en série vers l'anode de la LED, la cathode de la LED vers GND.
8.  **Vérifier tout le câblage avant mise sous tension** : suivre chaque fil du doigt en le comparant au schéma.
9.  **Mettre sous tension** et observer l'état initial de la LED (aléatoire tant qu'aucun front n'a eu lieu).
10. **Dérouler le tableau d'observation ci-dessous**, en actionnant DATA puis CLK dans l'ordre indiqué.

### Tableau d'observation

    D avant le front CLK                Q après le front
  ------------------ --------------- -------------------
                   0 Front montant                     0
                   1 Front montant                     1
                   0 Pas de front      Valeur précédente
                   1 Pas de front      Valeur précédente

### Questions

1.  À quel instant la donnée est-elle mémorisée ?
2.  Pourquoi Q ne suit-il pas directement D ?
3.  Quel est le rôle de CLK ?
4.  Pourquoi les entrées PRE et CLR ne doivent-elles pas rester
    flottantes ?
5.  Pourquoi utiliser une résistance de rappel ?

------------------------------------------------------------------------

## 4.8 Partie B : Construire un registre 8 bits

### Principe

Un octet est composé de huit bits :

``` text
D7 D6 D5 D4 D3 D2 D1 D0
```

Il faut donc huit bascules D.

Un 74HC74 contient deux bascules. Il faut donc :

``` text
8 bascules / 2 bascules par circuit = 4 circuits
```

### Architecture

``` text
D0 ---> [Bascule 0] ---> Q0
D1 ---> [Bascule 1] ---> Q1
D2 ---> [Bascule 2] ---> Q2
D3 ---> [Bascule 3] ---> Q3
D4 ---> [Bascule 4] ---> Q4
D5 ---> [Bascule 5] ---> Q5
D6 ---> [Bascule 6] ---> Q6
D7 ---> [Bascule 7] ---> Q7

CLK commun à toutes les bascules
RESET commun à toutes les bascules
```

### Schéma de principe

``` text
                    WRITE / CLK
                         |
       +-----------------+-----------------+
       |                 |                 |
       v                 v                 v
   +--------+        +--------+        +--------+
D0 |  FF 0  | Q0  D1 |  FF 1  | Q1  ...|  FF 7  | Q7
-->|        |------->|        |------->|        |--->
   +--------+        +--------+        +--------+
       |                 |                 |
       +-----------------+-----------------+
                         |
                       RESET
```

------------------------------------------------------------------------

## 4.9 Câblage du registre

### Alimentation

Pour chacun des quatre circuits :

-   VCC vers +5 V.
-   GND vers la masse.
-   Un condensateur de 100 nF entre VCC et GND.

### Entrées asynchrones

Pour chaque bascule :

-   PRE vers +5 V.
-   CLR vers +5 V en fonctionnement normal.
-   Un bouton RESET peut tirer CLR vers GND.

### Horloge

Toutes les entrées CLK sont reliées à une ligne commune `WRITE`.

### Données

Chaque entrée D est reliée à une entrée indépendante :

-   DIP-switch.
-   Bouton avec résistance de rappel.
-   Ou sortie Arduino.

### Sorties

Chaque Q commande une LED via une résistance.

### Buffer de lecture (74HC541)

Chaque registre se termine par un buffer octal à sorties trois états, qui l'isole du bus commun.
Il est monté et testé dès le TP2, en même temps que le registre.

Brochage du 74HC541 (boîtier DIP-20) :

| Broche | Fonction | Broche | Fonction |
|---|---|---|---|
| 1 | OE1 (validation, active basse) | 20 | VCC |
| 2 à 9 | A1 à A8 (entrées) | 19 | OE2 (validation, active basse) |
| 10 | GND | 18 à 11 | Y1 à Y8 (sorties) |

Câblage :

1.  **Alimenter le boîtier** : broche 20 vers +5 V, broche 10 vers 0 V, condensateur 100 nF entre
    les deux au plus près.
2.  **Relier les sorties Q0 à Q7** du registre aux entrées A1 à A8 (broches 2 à 9).
3.  **Relier les sorties Y1 à Y8** (broches 18 à 11) au connecteur DATA du groupe. **Attention à
    l'ordre** : A1 (broche 2) ressort en Y1 (broche 18), A2 (broche 3) en Y2 (broche 17), et ainsi
    de suite. Les sorties sont numérotées à rebours des broches.
4.  **Relier les deux broches de validation** (1 et 19) ensemble : elles sont combinées par une
    porte NON-OU interne, et il faut donc les mettre toutes les deux à l'état bas pour que les
    sorties conduisent.

**Pendant le TP2, en autonomie**, relier ce point commun directement à GND : le buffer est alors
toujours actif et les LED reflètent en permanence le contenu du registre. **Au TP3**, ce même point
deviendra l'entrée `SELECT_R` du groupe, pilotée par le décodeur de lecture (§5.8).

### Montage détaillé pas à pas (construction complète du registre)

On utilise 4 circuits 74HC74, numérotés IC1 à IC4, chacun portant 2 bascules (1 et 2). Convention retenue : IC1 → bits D0-D1, IC2 → D2-D3, IC3 → D4-D5, IC4 → D6-D7.

1.  **Placer les 4 boîtiers 74HC74** en ligne sur la breadboard, chacun à cheval sur la rainure centrale, espacés d'au moins une colonne pour pouvoir câbler entre eux.
2.  **Alimenter chaque boîtier** : broche 14 (VCC) de chacun des 4 IC vers le rail +5 V, broche 7 (GND) de chacun vers le rail 0 V. Placer un condensateur 100 nF entre VCC et GND au plus près de chaque boîtier (4 condensateurs au total).
3.  **Relier tous les PRE et tous les CLR (broches 1, 4, 10, 13 de chaque IC) au rail +5 V.** Il y a 16 broches PRE/CLR au total (2 par bascule × 8 bascules) : toutes vont au +5 V, sauf si l'on souhaite ajouter un bouton RESET général (voir variante ci-dessous).
4.  **Variante avec RESET général :** au lieu de relier CLR directement au +5 V, insérer une ligne commune CLR_COMMON reliée à toutes les broches CLR, elle-même tirée au +5 V par une résistance de 10 kΩ, et reliée à GND via un bouton-poussoir RESET. Un appui sur RESET force alors instantanément toutes les sorties Q à 0.
5.  **Créer la ligne WRITE commune.** Sur une ligne libre de la breadboard, relier ensemble les 8 broches CLK (une par bascule, soit broches 3 et 11 de chaque IC). Câbler un bouton-poussoir entre cette ligne WRITE et le +5 V, avec une résistance de rappel 10 kΩ vers GND (ou relier directement à une sortie Arduino, voir §4.10).
6.  **Câbler les 8 entrées de données.** Sur le DIP-switch 8 positions, chaque interrupteur correspond à un bit D0 à D7 : relier la sortie de l'interrupteur 0 à la broche D de la bascule 1 d'IC1, l'interrupteur 1 à la bascule 2 d'IC1, l'interrupteur 2 à la bascule 1 d'IC2, et ainsi de suite jusqu'à l'interrupteur 7 sur la bascule 2 d'IC4. Alimenter le DIP-switch en +5 V/GND selon sa notice (certains modèles ont une résistance de rappel intégrée, sinon en ajouter une de 10 kΩ par entrée).
7.  **Câbler les 8 sorties.** Chaque sortie Q (broches 5 et 9 de chaque IC) attaque une résistance de 1 kΩ puis une LED vers GND, dans le même ordre D0 à D7 que les entrées, pour que la lecture visuelle corresponde directement à l'octet affiché.
8.  **Vérifier l'ensemble du câblage** boîtier par boîtier avant la mise sous tension : alimentation, PRE/CLR, WRITE, D, Q pour chacun des 4 IC.
9.  **Mettre sous tension et tester bit par bit** : positionner le DIP-switch sur une valeur simple (par exemple 00000001), appuyer sur WRITE, vérifier qu'une seule LED s'allume et que c'est la bonne. Répéter avec 2 ou 3 valeurs différentes avant de passer à la suite.
10. **Monter le 74HC541** conformément au paragraphe « Buffer de lecture » ci-dessus, broches 1 et 19 reliées à GND pour cette phase. Vérifier au multimètre que les 8 sorties Y recopient bien les 8 sorties Q. Le bloc du groupe est alors complet et conforme à l'interface exigée au §5.9.

------------------------------------------------------------------------

## 4.10 Schéma de câblage Arduino : écriture d'un octet

Dans cette version, l'Arduino fournit les huit bits et le signal WRITE.

``` text
Arduino                         Registre 8 bits

D2  --------------------------> D0
D3  --------------------------> D1
D4  --------------------------> D2
D5  --------------------------> D3
D6  --------------------------> D4
D7  --------------------------> D5
D8  --------------------------> D6
D9  --------------------------> D7

D10 --------------------------> CLK de toutes les bascules

GND --------------------------> GND commun
5 V  -------------------------> VCC des 74HC74
```

### Important

Les sorties Arduino doivent être configurées en sortie et ne doivent pas
être connectées à des sorties Q du registre pendant une lecture
simultanée.

------------------------------------------------------------------------

## 4.11 Code Arduino : écrire un octet

``` cpp
const byte DATA_PINS[8] = {
  2, 3, 4, 5, 6, 7, 8, 9
};

const byte WRITE_PIN = 10;

void setup() {
  for (byte i = 0; i < 8; i++) {
    pinMode(DATA_PINS[i], OUTPUT);
  }

  pinMode(WRITE_PIN, OUTPUT);
  digitalWrite(WRITE_PIN, LOW);
}

void writeByte(byte value) {
  for (byte i = 0; i < 8; i++) {
    digitalWrite(DATA_PINS[i], (value >> i) & 0x01);
  }

  // Front montant : capture de l'octet
  digitalWrite(WRITE_PIN, LOW);
  delayMicroseconds(10);
  digitalWrite(WRITE_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(WRITE_PIN, LOW);
}

void loop() {
  writeByte(0b10101010);
  delay(1000);

  writeByte(0b11001100);
  delay(1000);

  writeByte(0b11110000);
  delay(1000);

  writeByte(0b00001111);
  delay(1000);
}
```

### Questions

1.  Pourquoi les données doivent-elles être stables avant le front
    d'horloge ?
2.  Pourquoi les sorties Q conservent-elles leur valeur après WRITE ?
3.  Que se passe-t-il si un bit DATA est inversé ?
4.  Quelle est la fréquence maximale théorique d'écriture ?
5.  Quels phénomènes limitent la vitesse réelle ?

------------------------------------------------------------------------

## 4.12 Partie C : Lire les sorties avec l'Arduino

### Câblage

``` text
Q0 --------------------------> Arduino A0
Q1 --------------------------> Arduino A1
Q2 --------------------------> Arduino A2
Q3 --------------------------> Arduino A3
Q4 --------------------------> Arduino A4
Q5 --------------------------> Arduino A5
Q6 --------------------------> Arduino A6 ou entrée disponible
Q7 --------------------------> Arduino A7 ou entrée disponible
```

Les broches analogiques peuvent être utilisées comme entrées numériques
sur les cartes compatibles.

### Code de lecture

``` cpp
const byte Q_PINS[8] = {
  A0, A1, A2, A3, A4, A5, 11, 12
};

byte readByte() {
  byte value = 0;

  for (byte i = 0; i < 8; i++) {
    if (digitalRead(Q_PINS[i]) == HIGH) {
      value |= (1 << i);
    }
  }

  return value;
}

void setup() {
  Serial.begin(115200);

  for (byte i = 0; i < 8; i++) {
    pinMode(Q_PINS[i], INPUT);
  }
}

void loop() {
  byte value = readByte();

  Serial.print("Décimal : ");
  Serial.println(value);

  Serial.print("Binaire : ");

  for (int i = 7; i >= 0; i--) {
    Serial.print((value >> i) & 0x01);
  }

  Serial.println();
  delay(500);
}
```

------------------------------------------------------------------------

## 4.13 Partie D : Étudier les boutons et les rebonds

### Problématique

Un bouton mécanique peut produire plusieurs transitions rapides lors
d'un seul appui.

### Manipulation

1.  Connecter un bouton à l'entrée CLOCK.
2.  Observer le signal à l'oscilloscope.
3.  Appuyer une seule fois.
4.  Relever les rebonds.
5.  Comparer avec une horloge générée par Arduino.

### Questions

1.  Pourquoi les rebonds peuvent-ils provoquer plusieurs écritures ?
2.  Comment peut-on supprimer les rebonds ?
3.  Quelle différence entre un anti-rebond logiciel et matériel ?

### Solution logicielle simple

``` cpp
void writeByteDebounced(byte value) {
  static unsigned long lastWrite = 0;

  if (millis() - lastWrite < 30) {
    return;
  }

  lastWrite = millis();
  writeByte(value);
}
```

------------------------------------------------------------------------

## 4.14 Bilan du TP 2

### Production attendue

-   Schéma de câblage du registre.
-   Registre 8 bits fonctionnel.
-   Programme Arduino d'écriture.
-   Programme Arduino de lecture.
-   Tableau de tests.
-   Réponses aux questions.
-   Conclusion expliquant le rôle d'une bascule D.

### Question de synthèse

> Pourquoi peut-on considérer quatre circuits 74HC74 comme un registre 8
> bits ?

------------------------------------------------------------------------

<a id="sec-mem-5-tp-3-une-memoire-collective-de-64-bits"></a>

# 5. TP 3 : Une mémoire collective de 64 bits

## 5.1 Titre

**Assembler huit registres pour construire une mémoire adressable**

## 5.2 Durée

Environ **4 heures**.

## 5.3 Organisation

-   8 groupes.
-   Chaque groupe est responsable d'un registre 8 bits.
-   Chaque groupe reçoit une adresse mémoire.
-   L'ensemble de la classe construit une mémoire de 8 octets.

## 5.4 Problématique

> Comment réunir plusieurs registres pour former une mémoire dans
> laquelle chaque octet possède une adresse propre ?

## 5.5 Objectifs

-   Comprendre l'adressage mémoire.
-   Utiliser un décodeur 3 vers 8.
-   Comprendre un bus de données.
-   Comprendre les sorties trois états.
-   Éviter les conflits électriques.
-   Tester une mémoire composée de plusieurs blocs.
-   Documenter une interface matérielle.
-   Diagnostiquer des pannes.

------------------------------------------------------------------------

## 5.6 Architecture générale

``` text
                         +----------------------+
                         |       ARDUINO        |
                         |                      |
                         | A2 A1 A0            |
                         | DATA[7..0]           |
                         | WRITE / READ         |
                         +----------+-----------+
                                    |
                  +-----------------+-----------------+
                  |                                   |
                  v                                   v
          +---------------+                  +---------------+
          | Décodeur 3->8 |                  | Bus DATA      |
          | 74HC138       |                  | D7 ... D0     |
          +-------+-------+                  +---------------+
                  |
       +----------+----------+----------+----------+
       |          |          |          |          |
       v          v          v          v          v
   +-------+  +-------+  +-------+  +-------+  +-------+
   |Octet 0|  |Octet 1|  |Octet 2|  |Octet 3|  | ...   |
   | 8 bit |  | 8 bit |  | 8 bit |  | 8 bit |  |       |
   +-------+  +-------+  +-------+  +-------+  +-------+
       |          |          |          |          |
       +----------+----------+----------+----------+
                              |
                              v
                         Bus de lecture
```

------------------------------------------------------------------------

## 5.7 Répartition des adresses

  Groupe   Adresse binaire     Adresse décimale Octet
  -------- ----------------- ------------------ ---------
  1        `000`                              0 Octet 0
  2        `001`                              1 Octet 1
  3        `010`                              2 Octet 2
  4        `011`                              3 Octet 3
  5        `100`                              4 Octet 4
  6        `101`                              5 Octet 5
  7        `110`                              6 Octet 6
  8        `111`                              7 Octet 7

------------------------------------------------------------------------

## 5.8 Pourquoi utiliser un décodeur ?

Un décodeur 3 vers 8 transforme trois bits d'adresse en huit lignes de
sélection.

Pour chaque combinaison d'adresse, une seule sortie est activée.

``` text
A2 A1 A0 = 000 -> Y0 actif
A2 A1 A0 = 001 -> Y1 actif
A2 A1 A0 = 010 -> Y2 actif
A2 A1 A0 = 011 -> Y3 actif
A2 A1 A0 = 100 -> Y4 actif
A2 A1 A0 = 101 -> Y5 actif
A2 A1 A0 = 110 -> Y6 actif
A2 A1 A0 = 111 -> Y7 actif
```

### Attention au 74HC138

Les sorties du 74HC138 sont **actives à l'état bas**. Cette convention
n'est pas une gêne : elle s'accorde directement avec les entrées de
validation du 74HC541, elles aussi actives à l'état bas. Aucune
inversion logique n'est nécessaire dans tout le montage.

### Deux décodeurs, et non un seul

Une ligne WRITE unique attaquant les entrées CLK des huit registres
écrirait **dans les huit registres à la fois** : l'adressage en écriture
ne servirait alors à rien. Il faut donc que le front d'horloge ne
parvienne qu'au registre adressé.

La solution retenue ici n'ajoute **aucune porte logique**. Elle exploite
l'entrée de validation `E3` du 74HC138, prévue exactement pour cet usage.
Le montage utilise deux décodeurs partageant les mêmes trois lignes
d'adresse :

-   **Décodeur d'écriture** : son entrée `E3` reçoit le signal `WRITE`.
    Ses sorties fournissent les lignes `SELECT_W`.
-   **Décodeur de lecture** : son entrée `E3` reçoit le signal `READ`.
    Ses sorties fournissent les lignes `SELECT_R`.

### Comment l'écriture devient sélective

| Instant | WRITE | Sortie Yn du groupe adressé | Sorties des 7 autres |
|---|---|---|---|
| Repos | 0 | 1 (haute) | 1 (hautes) |
| Pendant le pulse | 1 | 0 (basse) : front descendant, sans effet | 1 (inchangées) |
| Fin du pulse | 0 | 1 : **front montant : capture** | 1 (inchangées) |

La ligne `SELECT_W` du groupe adressé attaque directement les entrées CLK
de ses huit bascules. Les sept autres groupes ne voient aucune
transition : leur contenu est intact. La donnée est encore présente sur
le bus au moment du front montant, puisque l'Arduino ne la modifie
qu'après avoir relâché WRITE.

Les bascules D du 74HC74 étant sensibles au **front montant**, c'est donc
la *fin* du pulse WRITE qui mémorise la donnée, et non son début. Ce
point est repris au chronogramme du §5.12.

### Comment la lecture devient sélective

Les sorties du décodeur de lecture sont actives à l'état bas ; les
entrées de validation du 74HC541 sont actives à l'état bas. La sortie Yn
se relie donc **directement** aux broches 1 et 19 du buffer du groupe n,
sans aucune inversion. Quand READ est bas, les huit sorties Yn sont
hautes et les huit buffers sont en haute impédance : le bus est libre.

> Cette symétrie est le principal intérêt de l'architecture : l'élève
> constate que la même logique active-bas se propage du décodeur jusqu'au
> buffer sans adaptation, et qu'un seul groupe à la fois peut
> matériellement parler sur le bus.

### Montage détaillé pas à pas (câblage des décodeurs, sur la breadboard commune)

Brochage utile du 74HC138 (boîtier DIP-16) :

| Broche | Fonction | Broche | Fonction |
|---|---|---|---|
| 1, 2, 3 | A0, A1, A2 (adresse) | 16 | VCC |
| 4, 5 | E1, E2 (validation, actives basses) | 15 | Y0 |
| 6 | E3 (validation, active haute) | 14 à 9 | Y1 à Y6 |
| 8 | GND | 7 | Y7 |

1.  **Placer les deux 74HC138** sur la breadboard commune, à cheval sur la rainure centrale.
2.  **Alimenter chacun** : broche 16 (VCC) vers +5 V, broche 8 (GND) vers 0 V, condensateur 100 nF
    entre les deux au plus près du boîtier.
3.  **Sur les deux boîtiers, relier E1 et E2** (broches 4 et 5) à GND.
4.  **Câbler les entrées d'adresse A0, A1, A2** (broches 1 à 3) des **deux** décodeurs en parallèle
    vers les 3 broches Arduino d'adresse. Les deux décodeurs voient donc toujours la même adresse.
5.  **Sur le décodeur d'écriture**, relier E3 (broche 6) à la broche Arduino `WRITE`.
6.  **Sur le décodeur de lecture**, relier E3 (broche 6) à la broche Arduino `READ`.
7.  **Repérer les 8 sorties Y0 à Y7** (attention : l'ordre des broches n'est pas l'ordre naturel
    autour du boîtier : vérifier sur la datasheet du composant utilisé).
8.  **Câbler chaque sortie Yn du décodeur d'écriture** vers l'entrée `SELECT_W` du groupe n
    correspondant (cf. tableau de répartition des adresses, §5.7).
9.  **Câbler chaque sortie Yn du décodeur de lecture** vers l'entrée `SELECT_R` du groupe n.
10. **Vérifier avec une LED témoin** avant de connecter les 8 groupes : brancher provisoirement une
    LED (avec résistance) entre une sortie Yn et le +5 V : la sortie étant active à l'état bas, la
    LED s'allume quand Yn est sélectionnée. Forcer E3 à l'état haut, faire varier l'adresse depuis
    l'Arduino et vérifier qu'une seule LED s'allume à la fois, dans le bon ordre. **Répéter
    l'opération sur le second décodeur.**

------------------------------------------------------------------------

## 5.9 Partie A : Définir l'interface d'un groupe

Chaque groupe doit respecter exactement la même interface.

### Connecteur de groupe

``` text
+-----------------------------+
| Interface registre 8 bits   |
+-----------------------------+
| VCC                         |
| GND                         |
| DATA0                       |
| DATA1                       |
| DATA2                       |
| DATA3                       |
| DATA4                       |
| DATA5                       |
| DATA6                       |
| DATA7                       |
| SELECT_W                    |
| SELECT_R                    |
| RESET                       |
+-----------------------------+
```

`SELECT_W` : horloge d'écriture du groupe, capture sur **front montant**.
`SELECT_R` : validation de lecture, **active à l'état bas**.

### Règle d'intégration

Chaque groupe doit fournir :

-   Un registre 8 bits (4 × 74HC74).
-   Un buffer de sortie 74HC541 câblé conformément au §4.9.
-   Une entrée SELECT_W attaquant les huit entrées CLK.
-   Une entrée SELECT_R attaquant les deux broches de validation du buffer.
-   Une entrée RESET attaquant les huit entrées CLR.
-   Une documentation du brochage de son connecteur.

> **Ce qui disparaît par rapport à une architecture à ligne WRITE partagée.** Les signaux WRITE et
> READ ne descendent plus jusqu'aux groupes : ils s'arrêtent aux entrées E3 des deux décodeurs, sur
> la breadboard commune. Chaque groupe ne reçoit plus que ses deux lignes de sélection dédiées, ce
> qui réduit le câblage collectif et supprime le mode de panne le plus fréquent : un groupe qui tire
> une ligne commune à la masse et bloque toute la classe.

### Montage détaillé pas à pas (intégration collective, jour de l'assemblage)

Cette étape se déroule idéalement en une seule séance, tous les groupes présents, pour limiter le temps où le bus commun est à moitié câblé.

1.  **Chaque binôme apporte son bloc déjà testé** : registre 8 bits **et** buffer 74HC541 (LED, DIP-switch, WRITE fonctionnels, testés en autonomie au TP2).
2.  **Les deux décodeurs sont déjà installés et validés** sur la breadboard commune, avec l'adresse pilotée par l'Arduino contrôleur (cf. §5.8). Les buffers, eux, sont sur le bloc de chaque groupe depuis le TP2.
3.  **Poser les 8 breadboards des groupes autour de la breadboard commune**, de préférence dans l'ordre des adresses (groupe 0 à groupe 7) pour limiter la longueur des fils et les croisements.
4.  **Raccorder en premier les alimentations** : VCC et GND de chaque groupe vers les rails de la breadboard commune (ou vers l'alimentation générale si elle est unique pour toute la classe).
5.  **Raccorder les 8 lignes DATA communes** (D0 à D7) vers les entrées/sorties correspondantes de chaque registre.
6.  **Raccorder la sortie Yn du décodeur d'écriture** vers l'entrée `SELECT_W` du groupe n correspondant : une ligne différente pour chaque groupe.
7.  **Raccorder la sortie Yn du décodeur de lecture** vers l'entrée `SELECT_R` du groupe n. Vérifier avant mise sous tension qu'aucune ligne SELECT_R ne se retrouve reliée à GND en permanence : c'est le câblage qui provoquerait deux buffers actifs simultanément.
8.  **Vérifier l'exclusion mutuelle avant d'activer la lecture.** Sonder à l'ohmmètre, hors tension, que les 8 lignes SELECT_R sont bien indépendantes les unes des autres. L'exclusion est ensuite garantie par construction du décodeur (§5.11), mais une erreur de câblage peut toujours la contourner.
9.  **Tester groupe par groupe, dans l'ordre des adresses** : depuis l'Arduino contrôleur, sélectionner l'adresse 0, écrire un octet de test, vérifier sur les LED du groupe 0 que la bonne valeur apparaît, puis relire cette valeur pour confirmer la cohérence, avant de passer à l'adresse 1.
10. **Une fois les 8 groupes validés individuellement**, exécuter le programme de test automatique complet (§5.16 ou équivalent) qui parcourt les 8 adresses.

------------------------------------------------------------------------

## 5.10 Partie B : Comprendre les conflits de bus

### Problème

Si deux registres commandent simultanément la même ligne DATA, l'un peut
essayer de produire `1` pendant que l'autre produit `0`.

Cela crée un conflit électrique.

### Exemple interdit

``` text
Q du registre 0 --------+
                        |
                        +------ DATA0
                        |
Q du registre 1 --------+
```

### Solution

Utiliser des buffers trois états.

Un buffer trois états possède :

-   Une entrée.
-   Une sortie.
-   Une entrée d'activation.

Lorsque le buffer est désactivé, sa sortie est en haute impédance `Z`.

``` text
Q registre ---> [ Buffer 3 états ] ---> Bus DATA
                       ^
                       |
                   SELECT_R  (active bas)
```

------------------------------------------------------------------------

## 5.11 Partie C : Ajouter les buffers de lecture

Le buffer de chaque groupe est un **74HC541**, déjà monté et testé au TP2
(§4.9). Il isole les sorties du registre du bus commun.

### Principe

``` text
Registre 0 Q[7..0] ---> 74HC541 (groupe 0) ---+
                              ^               |
                          SELECT_R 0          |
                                              |
Registre 1 Q[7..0] ---> 74HC541 (groupe 1) ---+---- Bus DATA[7..0]
                              ^               |
                          SELECT_R 1          |
                                              |
          ...                             ... |
                                              |
Registre 7 Q[7..0] ---> 74HC541 (groupe 7) ---+
                              ^
                          SELECT_R 7
```

Un seul buffer doit être actif à la fois.

### Signal de lecture

``` text
SELECT_R n = sortie Yn du décodeur de lecture (validé par READ)
```

Cette exclusion est garantie **matériellement** par le décodeur : par
construction, un 74HC138 n'active jamais deux sorties simultanément.

> **Point à souligner en séance.** C'est une différence de nature entre
> une garantie logicielle et une garantie matérielle. Un programme peut se
> tromper d'adresse ; le décodeur, lui, ne *peut pas* activer deux sorties.
> Faire remarquer aux étudiants que la sécurité du bus ne repose pas sur la
> correction du code Arduino est un des acquis importants de ce TP.

------------------------------------------------------------------------

## 5.12 Partie D : Écriture dans un octet sélectionné

### Séquence d'écriture

1.  Placer l'adresse sur A2, A1 et A0.
2.  Placer la donnée sur DATA7 à DATA0.
3.  Laisser le temps aux lignes de se stabiliser.
4.  Activer WRITE (état haut) : la ligne SELECT_W du groupe adressé descend.
5.  Désactiver WRITE (état bas) : SELECT_W remonte, **le front montant capture la donnée**.
6.  Seulement ensuite, modifier l'adresse ou la donnée.

### Schéma temporel simplifié

``` text
Adresse    : ----[ adresse stable                  ]----------
Donnée     : ----[ donnée stable                   ]----------
WRITE      : ________/‾‾‾‾‾‾‾‾‾‾‾‾‾\_______________________
SELECT_W n : ‾‾‾‾‾‾‾‾\_____________/‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
                                   ^
                                capture
```

Les sept autres lignes SELECT_W restent hautes pendant toute la séquence :
aucun autre registre ne voit de front.

### Questions

1.  Pourquoi l'adresse doit-elle être stable pendant toute la durée du
    pulse WRITE ?
2.  À quel instant précis la donnée est-elle capturée : au début ou à la
    fin du pulse ? Justifiez à partir du chronogramme.
3.  Que se passerait-il si le programme changeait la donnée entre l'étape
    4 et l'étape 5 ?
4.  Pourquoi les sept registres non adressés ne voient-ils aucun front
    d'horloge ?
5.  Quelle différence entre sélectionner un registre en écriture et le
    sélectionner en lecture ?

------------------------------------------------------------------------

## 5.13 Partie E : Lire un octet sélectionné

### Séquence de lecture

1.  Placer l'adresse.
2.  Activer le buffer du registre sélectionné.
3.  Lire les huit lignes DATA.
4.  Désactiver le buffer.

``` text
Adresse ---> Décodeur ---> Sélection d'un registre
                              |
                              v
                       Buffer activé
                              |
                              v
                         Bus DATA
```

------------------------------------------------------------------------

## 5.14 Schéma Arduino global

``` text
Arduino                         Mémoire 64 bits

D2  --------------------------> DATA0
D3  --------------------------> DATA1
D4  --------------------------> DATA2
D5  --------------------------> DATA3
D6  --------------------------> DATA4
D7  --------------------------> DATA5
D8  --------------------------> DATA6
D9  --------------------------> DATA7

D10 --------------------------> WRITE
D11 --------------------------> READ

D12 --------------------------> A0
D13 --------------------------> A1
A0 ---------------------------> A2

GND --------------------------> GND commun
5 V  -------------------------> VCC
```

### Remarque

Les broches exactes peuvent être modifiées selon la carte Arduino et les
broches utilisées. Le principe reste identique : huit lignes de données,
trois lignes d'adresse et des lignes de commande.

------------------------------------------------------------------------

## 5.15 Code Arduino : fonctions d'adressage

``` cpp
const byte DATA_PINS[8] = {
  2, 3, 4, 5, 6, 7, 8, 9
};

const byte WRITE_PIN = 10;
const byte READ_PIN = 11;

const byte ADDRESS_PINS[3] = {
  12, 13, A0
};

void setAddress(byte address) {
  for (byte i = 0; i < 3; i++) {
    digitalWrite(ADDRESS_PINS[i], (address >> i) & 0x01);
  }
}

void setDataBus(byte value) {
  for (byte i = 0; i < 8; i++) {
    digitalWrite(DATA_PINS[i], (value >> i) & 0x01);
  }
}

void writeMemory(byte address, byte value) {
  setAddress(address);
  setDataBus(value);

  digitalWrite(WRITE_PIN, LOW);
  delayMicroseconds(10);
  digitalWrite(WRITE_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(WRITE_PIN, LOW);
}
```

------------------------------------------------------------------------

## 5.16 Code Arduino : lecture du bus

``` cpp
void setDataBusAsInput() {
  for (byte i = 0; i < 8; i++) {
    pinMode(DATA_PINS[i], INPUT);
  }
}

void setDataBusAsOutput() {
  for (byte i = 0; i < 8; i++) {
    pinMode(DATA_PINS[i], OUTPUT);
  }
}

byte readDataBus() {
  byte value = 0;

  for (byte i = 0; i < 8; i++) {
    if (digitalRead(DATA_PINS[i]) == HIGH) {
      value |= (1 << i);
    }
  }

  return value;
}

byte readMemory(byte address) {
  setAddress(address);

  setDataBusAsInput();

  digitalWrite(READ_PIN, HIGH);
  delayMicroseconds(10);

  byte value = readDataBus();

  digitalWrite(READ_PIN, LOW);

  return value;
}
```

### Important

Le code ci-dessus suppose que le circuit de sélection et les buffers
sont conçus pour que `READ_PIN` active uniquement le registre
sélectionné.

Si chaque groupe possède sa propre ligne de sélection, l'Arduino ou le
décodeur doit produire une sélection unique.

------------------------------------------------------------------------

## 5.17 Programme de test complet

``` cpp
void setup() {
  Serial.begin(115200);

  for (byte i = 0; i < 8; i++) {
    pinMode(DATA_PINS[i], OUTPUT);
  }

  pinMode(WRITE_PIN, OUTPUT);
  pinMode(READ_PIN, OUTPUT);

  for (byte i = 0; i < 3; i++) {
    pinMode(ADDRESS_PINS[i], OUTPUT);
  }

  digitalWrite(WRITE_PIN, LOW);
  digitalWrite(READ_PIN, LOW);
}

void loop() {
  writeMemory(0, 0b10101010);
  writeMemory(1, 0b11001100);
  writeMemory(2, 0b11110000);
  writeMemory(3, 0b00001111);
  writeMemory(4, 0b00110011);
  writeMemory(5, 0b01010101);
  writeMemory(6, 0b10011001);
  writeMemory(7, 0b01100110);

  delay(500);

  for (byte address = 0; address < 8; address++) {
    byte value = readMemory(address);

    Serial.print("Adresse ");
    Serial.print(address);
    Serial.print(" : ");

    for (int bit = 7; bit >= 0; bit--) {
      Serial.print((value >> bit) & 0x01);
    }

    Serial.print(" = ");
    Serial.println(value);
  }

  Serial.println("--------------------");
  delay(2000);
}
```

------------------------------------------------------------------------

## 5.18 Partie F : Défi collectif

### Cahier des charges

La classe doit construire une mémoire de 64 bits capable de :

-   Stocker huit octets.
-   Écrire une valeur à une adresse donnée.
-   Lire une valeur à une adresse donnée.
-   Conserver les valeurs tant que l'alimentation est présente.
-   Ne jamais activer simultanément deux sorties de lecture.
-   Signaler une erreur si une valeur lue est différente de la valeur
    écrite.

### Jeu de test

  Adresse   Valeur attendue
  --------- -----------------
  0         `10101010`
  1         `11001100`
  2         `11110000`
  3         `00001111`
  4         `00110011`
  5         `01010101`
  6         `10011001`
  7         `01100110`

### Test automatique

``` cpp
const byte expectedValues[8] = {
  0b10101010,
  0b11001100,
  0b11110000,
  0b00001111,
  0b00110011,
  0b01010101,
  0b10011001,
  0b01100110
};

void testMemory() {
  for (byte address = 0; address < 8; address++) {
    writeMemory(address, expectedValues[address]);
  }

  bool success = true;

  for (byte address = 0; address < 8; address++) {
    byte value = readMemory(address);

    if (value != expectedValues[address]) {
      success = false;

      Serial.print("Erreur à l'adresse ");
      Serial.println(address);
    }
  }

  if (success) {
    Serial.println("TEST OK : mémoire 64 bits fonctionnelle");
  } else {
    Serial.println("TEST ECHEC");
  }
}
```

------------------------------------------------------------------------

## 5.19 Partie G : Diagnostic de pannes

Chaque groupe reçoit une panne volontaire.

### Exemples

-   Une ligne DATA est débranchée.
-   Un bit d'adresse est inversé.
-   Le signal WRITE n'arrive pas au registre.
-   Une entrée CLR reste à l'état bas.
-   Un buffer reste activé.
-   Une LED est montée à l'envers.
-   Une masse est absente.
-   Un condensateur de découplage manque.
-   Deux sorties sont actives en même temps.
-   L'entrée E3 d'un décodeur est laissée en l'air (symptôme : plus
    aucune écriture ne fonctionne, ou écritures erratiques).
-   Une seule des deux broches de validation d'un 74HC541 est reliée à
    SELECT_R, l'autre est en l'air (symptôme : le groupe ne parle jamais
    sur le bus, alors que ses LED affichent la bonne valeur).
-   Les lignes d'adresse ne sont câblées que sur un seul des deux
    décodeurs (symptôme : on écrit à une adresse et on relit à une autre).

### Méthode de diagnostic

1.  Reproduire le problème.
2.  Identifier si le problème concerne l'entrée, la mémorisation ou la
    sortie.
3.  Mesurer les tensions.
4.  Vérifier l'adresse.
5.  Vérifier le signal WRITE.
6.  Vérifier le signal READ.
7.  Vérifier la sélection du registre.
8.  Documenter la panne et la correction.

### Questions

1.  Pourquoi une mémoire peut-elle fonctionner seule mais pas dans le
    système collectif ?
2.  Pourquoi une erreur d'adresse peut-elle faire croire qu'un registre
    est défectueux ?
3.  Pourquoi un conflit de bus peut-il endommager un circuit ?
4.  Pourquoi faut-il tester chaque bloc avant l'intégration ?
5.  Pourquoi une interface commune est-elle nécessaire ?
6.  Un groupe affiche la bonne valeur sur ses LED mais ne renvoie rien
    sur le bus. Où chercher en premier, et pourquoi les LED ne
    suffisent-elles pas à valider un groupe ?

------------------------------------------------------------------------

## 5.20 Partie H : Extension : mémoire de 256 bits

Si le temps le permet, proposer le défi suivant :

> Comment modifier l'architecture pour passer de 8 octets à 32 octets ?

Il faut alors :

-   5 lignes d'adresse au lieu de 3.
-   Un décodeur 5 vers 32 ou plusieurs décodeurs en cascade.
-   32 registres de 8 bits.
-   Un bus de données de 8 bits.

### Question

> Combien de circuits 74HC74 faut-il pour construire 256 bits ?

Réponse :

``` text
256 / 8 = 32 registres de 8 bits
32 × 4 = 128 circuits 74HC74
```

------------------------------------------------------------------------

## 5.21 Bilan du TP 3

### Production attendue

-   Schéma global de la mémoire.
-   Schéma de l'interface d'un groupe.
-   Tableau d'adressage.
-   Programme d'écriture et de lecture.
-   Résultats du test automatique.
-   Rapport de panne.
-   Conclusion collective.

### Question de synthèse

> Expliquez comment huit registres de 8 bits peuvent former une mémoire
> de 64 bits adressable.

------------------------------------------------------------------------

<a id="sec-mem-6-evaluation"></a>

# 6. Évaluation

## 6.1 Proposition de barème

  Compétence                                   TP 1     TP 2     TP 3
  ---------------------------------------- -------- -------- --------
  Mesures et exploitation des résultats           5        3        2
  Compréhension physique et électronique          5        5        4
  Réalisation du câblage                          4        4        4
  Programmation et tests                          1        3        4
  Travail en équipe et documentation              3        3        6
  **Total**                                  **18**   **18**   **20**

## 6.2 Critères de réussite

### TP 1

-   La bobine fonctionne.
-   Le relais commute.
-   La fonction SET/RESET est démontrée.
-   Les mesures sont cohérentes.
-   L'étudiant explique la rétroaction.

### TP 2

-   Le registre mémorise huit bits.
-   Les données sont correctement écrites.
-   Les sorties sont correctement lues.
-   Le câblage est documenté.
-   Le programme Arduino est fonctionnel.

### TP 3

-   Les huit registres sont intégrés.
-   Les adresses sélectionnent le bon octet.
-   Les données sont conservées.
-   Les conflits de bus sont évités.
-   Le test automatique est réussi.
-   Le groupe participe au diagnostic collectif.

------------------------------------------------------------------------

<a id="sec-mem-7-annexes-techniques"></a>

# 7. Annexes techniques

## 7.1 Règles de câblage breadboard

-   Relier les rails d'alimentation à une source stable.
-   Vérifier si les rails sont coupés au milieu.
-   Placer les circuits intégrés à cheval sur la rainure centrale.
-   Mettre un condensateur de 100 nF près de chaque circuit intégré.
-   Relier toutes les masses.
-   Ne jamais laisser une entrée logique non connectée.
-   Utiliser des fils courts pour les signaux d'horloge.
-   Repérer les fils par couleur :
    -   Rouge : +5 V.
    -   Noir : GND.
    -   Bleu : données.
    -   Jaune : horloge.
    -   Vert : adresse.
    -   Blanc : lecture/écriture.

## 7.2 Résistances de LED

Pour une LED :

``` text
+5 V ----[ Résistance ]----|>|---- GND
```

Une résistance de 220 Ω à 1 kΩ convient généralement pour une LED
indicatrice.

## 7.3 Entrées flottantes

Une entrée CMOS flottante peut prendre un état imprévisible.

Exemple de résistance de rappel :

``` text
+5 V
 |
[10 kΩ]
 |
 +------> Entrée logique
 |
Bouton
 |
GND
```

Dans ce montage :

-   Bouton relâché : entrée à 1.
-   Bouton appuyé : entrée à 0.

## 7.4 Différence entre mémoire volatile et non volatile

Les montages de ce projet sont des mémoires **volatiles** :

-   Elles conservent leur état tant que l'alimentation est présente.
-   Elles perdent leur état lorsque l'alimentation est coupée.

Cela permet de faire le lien avec :

-   Les registres.
-   La SRAM.
-   La DRAM.
-   Les mémoires flash.
-   Les supports de stockage.

## 7.5 Vocabulaire

### Termes introduits par l'architecture à deux décodeurs

| Terme | Définition |
|---|---|
| Entrée de validation (*enable*) | Entrée qui autorise ou inhibe globalement le fonctionnement d'un circuit, indépendamment de ses autres entrées |
| Logique active basse | Convention où un signal est considéré actif lorsqu'il est à l'état bas (0 V) |
| Brochage *flow-through* | Disposition d'un boîtier où toutes les entrées sont d'un côté et toutes les sorties de l'autre, facilitant le tracé des liaisons |

### Vocabulaire général

  -----------------------------------------------------------------------
  Terme                               Définition
  ----------------------------------- -----------------------------------
  Bit                                 Information binaire pouvant valoir
                                      0 ou 1

  Octet                               Groupe de 8 bits

  Bascule D                           Circuit mémorisant une donnée sur
                                      un front d'horloge

  Registre                            Ensemble de bascules utilisées pour
                                      stocker plusieurs bits

  Bus                                 Ensemble de lignes de communication
                                      communes

  Adresse                             Numéro identifiant une case mémoire

  Décodeur                            Circuit qui active une sortie parmi
                                      plusieurs

  Haute impédance                     État dans lequel une sortie est
                                      électriquement déconnectée

  READ                                Opération de lecture

  WRITE                               Opération d'écriture

  Rétroaction                         Retour d'une sortie vers une partie
                                      du circuit d'entrée
  -----------------------------------------------------------------------

## 7.6 Questions de conclusion générale

1.  Comment un courant peut-il représenter un bit ?
2.  Pourquoi une mémoire doit-elle avoir deux états stables ?
3.  Quelle différence entre une bascule D et un simple fil ?
4.  Pourquoi un registre 8 bits est-il un octet ?
5.  Pourquoi faut-il une adresse pour sélectionner un octet ?
6.  Pourquoi faut-il éviter les conflits de bus ?
7.  Quel est le rôle de l'Arduino dans le projet ?
8.  Quelles parties du système sont physiques et quelles parties sont
    logiques ?
9.  Pourquoi la mémoire perd-elle ses données lorsque l'alimentation est
    coupée ?
10. Comment passer de 64 bits à 1 Ko ?

------------------------------------------------------------------------

<a id="sec-mem-conclusion-du-projet"></a>

# Conclusion du projet

Ce projet permet de faire comprendre que la mémoire informatique n'est
pas un objet abstrait.

Elle repose sur une succession de niveaux :

``` text
Courant électrique
        ↓
Champ magnétique ou état électronique
        ↓
Commutation
        ↓
Bit
        ↓
Bascule
        ↓
Registre
        ↓
Octet
        ↓
Adresse mémoire
        ↓
Mémoire de 64 bits
        ↓
Architecture informatique
```

La phrase à retenir pour les étudiants est :

> **Une mémoire de 64 bits n'est pas un composant magique : c'est un
> ensemble de cellules identiques, organisées selon une architecture et
> reliées par une interface commune.**

------------------------------------------------------------------------

## Annexe : lexique des composants utilisés dans ce TP

| Composant | Ce que c'est | Ce qu'il fait dans ce montage |
|---|---|---|
| **Résistance** | Composant passif qui s'oppose au passage du courant (loi d'Ohm : U = R×I). | Limite le courant dans une LED, fixe un état par défaut (résistance de rappel/pull-up), limite le courant de base d'un transistor. |
| **Condensateur** (100 nF) | Composant passif qui stocke de l'énergie électrique sous forme de charge, et la restitue très rapidement en cas de besoin. | Placé au plus près de chaque circuit intégré ("découplage"), il absorbe les micro-chutes de tension lors des commutations et évite les dysfonctionnements aléatoires. |
| **Diode** (1N4001/1N4004/1N4148) | Composant à semi-conducteur qui ne laisse passer le courant que dans un seul sens. | Utilisée en "diode de roue libre" en parallèle d'une bobine (relais) : elle absorbe la surtension produite à la coupure du courant et protège le transistor ou l'Arduino. |
| **LED** (diode électroluminescente) | Diode qui émet de la lumière quand elle est parcourue par un courant dans le bon sens. | Indicateur visuel de l'état logique d'une sortie (allumée = 1, éteinte = 0). |
| **Transistor NPN** (2N2222, BC547) | Composant à semi-conducteur à 3 broches (base, collecteur, émetteur) qui fonctionne comme un interrupteur commandé électriquement. | Permet à une sortie Arduino (faible courant) de commander une bobine de relais (courant plus important), sans jamais faire circuler le courant du relais directement dans l'Arduino. |
| **Relais électromécanique** | Interrupteur mécanique commandé par une bobine : quand la bobine est alimentée, elle attire une armature qui fait basculer un contact. | Réalise concrètement la fonction mémoire du TP1 : le contact NO (normalement ouvert), une fois fermé, peut "s'auto-alimenter" et maintenir l'état après relâchement de la commande (boucle de maintien SET/RESET). |
| **Bobine / électroaimant** | Fil de cuivre enroulé qui produit un champ magnétique lorsqu'il est parcouru par un courant. | Construit "à la main" au TP1 pour comprendre le principe physique qui se cache, en version miniaturisée, dans la bobine du relais. |
| **74HC74** | Circuit intégré numérique contenant 2 bascules D indépendantes. | Chaque bascule mémorise 1 bit sur un front montant d'horloge (CLK) : 4 boîtiers = 8 bascules = 1 registre de 8 bits (1 octet). |
| **74HC138** | Circuit intégré numérique "décodeur 3 vers 8" : à partir de 3 bits d'adresse, il active une seule sortie parmi 8. Son entrée de validation E3 permet d'inhiber toutes les sorties d'un coup. | Sélectionne, parmi les 8 groupes/registres de la classe, celui qui doit être lu ou écrit à un instant donné. Le montage en utilise **deux** : l'un validé par WRITE, l'autre par READ (§5.8). |
| **74HC541** | Circuit intégré "buffer" octal à sorties trois états : chaque sortie peut valoir 0, 1, ou être totalement déconnectée électriquement ("haute impédance"). Son brochage *flow-through* place les 8 entrées d'un côté et les 8 sorties de l'autre. | Permet à plusieurs registres de partager les mêmes fils de bus DATA sans se marcher dessus : seul le registre sélectionné "prend la parole" sur le bus, les autres se mettent en haute impédance. Équivalents possibles : 74HC244, 74HC245 (brochage moins commode). |
| **DIP-switch 8 positions** | Bloc de 8 petits interrupteurs indépendants, au pas standard des breadboards. | Sert à fixer manuellement les 8 bits d'un octet avant de les écrire dans le registre (entrée de données D0 à D7). |
| **Bouton-poussoir** | Interrupteur momentané : fermé uniquement pendant l'appui. | Génère un front (SET, RESET, CLOCK/WRITE) au moment précis où l'utilisateur appuie. |
| **Breadboard** (plaque d'essai) | Support de prototypage sans soudure, avec des rangées de trous électriquement reliés par groupes. | Permet de câbler et modifier rapidement tous les montages du projet sans souder. |
| **Arduino** | Carte à microcontrôleur programmable, avec des broches d'entrée/sortie numériques et analogiques. | Génère les signaux d'adresse, de WRITE et de lecture du bus ; remplace à terme les boutons manuels pour piloter le système de façon automatique et reproductible. |
| **Multimètre** | Appareil de mesure polyvalent (tension, courant, résistance, continuité). | Vérifie le câblage avant mise sous tension, mesure la résistance de la bobine, contrôle les tensions du montage. |
| **Oscilloscope** | Appareil qui affiche l'évolution d'une tension dans le temps. | Observe les temps de commutation du relais, les rebonds d'un bouton, ou la forme exacte d'un signal d'horloge. |
| **Résistance de rappel (pull-up/pull-down)** | Résistance (souvent 10 kΩ) qui fixe un état par défaut (haut ou bas) à une entrée logique quand rien d'autre ne la pilote. | Évite qu'une entrée CMOS (D, CLK, PRE, CLR...) reste "flottante", ce qui provoquerait un comportement imprévisible. |