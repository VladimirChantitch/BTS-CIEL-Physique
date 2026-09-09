# BTS CIEL 2 — Physique
## Recueil de cours

Document vivant, à compléter au fil de l'année. Chaque partie correspond à un grand thème du programme (voir vue d'ensemble ci-dessous). Le Partie 1 est déjà renseigné (issu de la séance de rentrée) ; les autres seront complétés au fur et à mesure des séances.

## Programme de l'année — vue d'ensemble (BTS CIEL Option A – Informatique et réseaux)

*D'après les fiches officielles transmises par l'établissement.*

En BTS CIEL Option A, la physique est structurée en deux volets qui coexistent toute l'année :

- **Un module dédié de physique** (rattaché à U4/U5/U6), avec un programme identique en intitulé pour CIEL 1 et CIEL 2 (logique de progression en spirale : les mêmes six thèmes sont introduits en 1ʳᵉ année puis approfondis en 2ᵉ année) :
  1. **Étude des signaux** : caractéristiques des signaux analogiques et numériques, spectres, transformées de Fourier.
  2. **Ondes et propagation** : ondes électromagnétiques, lignes de transmission, antennes.
  3. **Composants optoélectroniques** : LEDs, photodiodes, capteurs optiques.
  4. **Circuits linéaires et filtres** : amplificateurs opérationnels, filtres analogiques et numériques.
  5. **Conversion analogique-numérique** : échantillonnage, quantification, convertisseurs A/N et N/A.
  6. **Modulation et transmission** : modulations analogiques et numériques, bande passante, interférences.
- **De la co-intervention** (physique associée aux U4, U5, U6 professionnels), qui ne démarre pas avant la fin du 1ᵉʳ trimestre (le temps que les savoirs de base soient posés), et qui mobilise les mêmes notions au service de projets concrets : chaîne de mesure et capteurs, supports de propagation, chaîne d'action et actionneurs, système en boucle fermée, lois générales de l'électricité, analyse temporelle et fréquentielle des signaux, filtrage, appareils de mesure et incertitudes.

**Évaluation (fin de CIEL 2) :** la physique est évaluée dans le cadre de l'épreuve écrite U4 (6h au total) : U4 professionnel sur 4h30/70 points + Physique sur 1h30/30 points, coefficient global de l'unité 4. Le candidat peut être amené à commenter/analyser des résultats de simulation ou d'expérimentation, et à exploiter des données de notices ou documents techniques, y compris en anglais.

### Les grands parties retenus pour cette progression

| Partie | Thème (rattaché au programme officiel) | Contenu principal | Lien avec le métier CIEL |
|---|---|---|---|
| 1 | Consolidation des fondamentaux | Bases élec, mesures et incertitudes, ondes (socle nécessaire aux 6 thèmes officiels) | Socle indispensable — objet de la séance de rentrée |
| 2 | Semi-conducteurs et composants optoélectroniques | Diode/transistor (rappel), puis LEDs, photodiodes, capteurs optiques (programme officiel) | Cartes électroniques, capteurs, liaisons optiques |
| 3 | Systèmes bouclés et asservissement | Boucle ouverte/fermée, écart, correction (thème de co-intervention) | Régulation, servomoteurs, alimentations régulées, IoT |
| 4 | Ondes, propagation et transmission | Ondes électromagnétiques, lignes de transmission, antennes, modulation, bande passante, interférences (programme officiel) | Réseaux sans fil, câblage, télécoms |
| 5 | Étude des signaux, circuits linéaires et filtres | Signaux analogiques/numériques, spectres, Fourier, AOP, filtres analogiques/numériques, conversion A/N (programme officiel) | Chaîne d'acquisition, traitement numérique, réseaux |
| 6 | Composants optoélectroniques et propagation guidée (approfondissement) | Fibre optique, capteurs optiques, lignes de transmission guidée | Réseaux et télécoms (liaisons fibre) |
| 7 | Préparation à l'épreuve U4 | Méthodologie type BTS, annales, épreuves blanches (1h30/30 points en U4) | Épreuve écrite U4 |

### Proposition de calendrier indicatif

| Période | Parties abordées |
|---|---|
| Rentrée (séance 1, cf. ce dossier) | Partie 1 — état des lieux et consolidation |
| Septembre – décembre | Suite partie 1 si besoin, puis partie 2 (semi-conducteurs/optoélectronique) et amorce partie 4 (ondes/propagation) — la co-intervention peut démarrer à partir de fin du 1ᵉʳ trimestre |
| Janvier – mars | Partie 3 (systèmes bouclés/asservissement), partie 5 (signaux, circuits linéaires et filtres), partie 6 (optique/fibre) |
| Avril – juin | Révisions transversales, annales type U4, épreuves blanches, projets de co-intervention |

### Progression CIEL 1 → CIEL 2

Les six thèmes officiels sont **identiques en intitulé** entre CIEL 1 et CIEL 2 : il ne s'agit pas de découvrir des sujets entièrement nouveaux en 2ᵉ année, mais d'approfondir progressivement les mêmes six thèmes, avec des applications de plus en plus proches du métier (via la co-intervention) et une exigence croissante, jusqu'à l'épreuve U4 en fin de CIEL 2.

| Thème officiel | Approche en CIEL 1 | Approfondissement en CIEL 2 |
|---|---|---|
| Étude des signaux | Bases : signal, période, fréquence, lecture oscilloscope | Spectres, transformée de Fourier, filtrage, conversion A/N |
| Ondes et propagation | Grandeurs caractéristiques (T, f, λ, v) | Lignes de transmission, antennes, modulation, bande passante |
| Composants optoélectroniques | Notion de diode, tension de seuil | LEDs, photodiodes, capteurs optiques, applications réseaux |
| Circuits linéaires et filtres | Lois de base de l'électricité (Ohm, Kirchhoff) | Amplificateurs opérationnels, filtres analogiques/numériques |
| Conversion analogique-numérique | Peu ou pas vu | Échantillonnage, quantification, convertisseurs A/N et N/A |
| Modulation et transmission | Peu ou pas vu | Modulations analogiques/numériques, interférences |

**En résumé pour les étudiants :** la 1ʳᵉ année pose les fondamentaux des six mêmes thèmes qui reviendront toute l'année de CIEL 2, en profondeur croissante et de plus en plus reliés aux projets professionnels (co-intervention), jusqu'à l'épreuve écrite U4 en fin d'année.

---

## 0. Aide-mémoire : unités et équivalences

À distribuer ou projeter en permanence pendant la séance — beaucoup d'erreurs de calcul viennent d'une conversion d'unité oubliée (mA ↔ A, kΩ ↔ Ω, ms ↔ s…).

### Préfixes multiplicateurs (à connaître par cœur)

| Préfixe | Symbole | Facteur | Exemple d'usage |
|---|---|---|---|
| giga | G | ×10⁹ | GHz (fréquence radio) |
| méga | M | ×10⁶ | MΩ, MHz |
| kilo | k | ×10³ | kΩ, kHz |
| — | (unité) | ×10⁰ | V, A, Ω, s, Hz |
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
| Charge électrique | Q | coulomb | C | — |
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

## Partie 1 — Consolidation des fondamentaux

*(Rappels vus lors de la séance de rentrée — bases de l'électricité, mesures et incertitudes, ondes, avec compléments bonus semi-conducteurs / systèmes bouclés / électromagnétisme.)*

Fiches à projeter/distribuer. Le temps réel passé sur chaque fiche dépend du diagnostic : ne pas hésiter à accélérer sur une fiche largement maîtrisée pour dégager du temps ailleurs.

### 3.1 Bases de l'électricité

**Grandeurs et conventions**

- Tension U (volt, V) : différence de potentiel entre deux points, toujours mesurée entre deux bornes (en parallèle sur le dipôle). Symbole du voltmètre : <img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAxMDAgNjAiIHdpZHRoPSIxMDAiIGhlaWdodD0iNjAiPgo8bGluZSB4MT0iMCIgeTE9IjMwIiB4Mj0iMzAiIHkyPSIzMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+CjxjaXJjbGUgY3g9IjUwIiBjeT0iMzAiIHI9IjIwIiBmaWxsPSJub25lIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz4KPHRleHQgeD0iNDEiIHk9IjM3IiBmb250LXNpemU9IjE4IiBmb250LWZhbWlseT0iQXJpYWwiIGZvbnQtd2VpZ2h0PSJib2xkIj5WPC90ZXh0Pgo8bGluZSB4MT0iNzAiIHkxPSIzMCIgeDI9IjEwMCIgeTI9IjMwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz4KPC9zdmc+" width="70" alt="symbole voltmetre"/>
- Intensité I (ampère, A) : débit de charges électriques, mesurée en série dans le circuit. Symbole de l'ampèremètre : <img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAxMDAgNjAiIHdpZHRoPSIxMDAiIGhlaWdodD0iNjAiPgo8bGluZSB4MT0iMCIgeTE9IjMwIiB4Mj0iMzAiIHkyPSIzMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+CjxjaXJjbGUgY3g9IjUwIiBjeT0iMzAiIHI9IjIwIiBmaWxsPSJub25lIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz4KPHRleHQgeD0iNDMiIHk9IjM3IiBmb250LXNpemU9IjE4IiBmb250LWZhbWlseT0iQXJpYWwiIGZvbnQtd2VpZ2h0PSJib2xkIj5BPC90ZXh0Pgo8bGluZSB4MT0iNzAiIHkxPSIzMCIgeDI9IjEwMCIgeTI9IjMwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz4KPC9zdmc+" width="70" alt="symbole amperemetre"/>
- Résistance R (ohm, Ω) : caractérise l'opposition d'un dipôle au passage du courant. Symbole (norme IEC) : <img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAxMDAgNDAiIHdpZHRoPSIxMDAiIGhlaWdodD0iNDAiPgo8bGluZSB4MT0iMCIgeTE9IjIwIiB4Mj0iMjUiIHkyPSIyMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+CjxyZWN0IHg9IjI1IiB5PSIxMCIgd2lkdGg9IjUwIiBoZWlnaHQ9IjIwIiBmaWxsPSJub25lIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz4KPGxpbmUgeDE9Ijc1IiB5MT0iMjAiIHgyPSIxMDAiIHkyPSIyMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+Cjwvc3ZnPg==" width="70" alt="symbole resistance"/>
- **Convention récepteur** (celle utilisée pour une résistance, une lampe, un moteur en fonctionnement normal) : U et I sont fléchés en sens opposés sur le dipôle. C'est la convention à utiliser presque systématiquement en TP sur des composants passifs.
- **Convention générateur** (pile, alimentation) : U et I sont fléchés dans le même sens. Symbole d'un générateur de tension continue : <img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAxMDAgNjAiIHdpZHRoPSIxMDAiIGhlaWdodD0iNjAiPgo8bGluZSB4MT0iMCIgeTE9IjMwIiB4Mj0iMzAiIHkyPSIzMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+CjxjaXJjbGUgY3g9IjUwIiBjeT0iMzAiIHI9IjIwIiBmaWxsPSJub25lIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz4KPHRleHQgeD0iNDIiIHk9IjIyIiBmb250LXNpemU9IjE0IiBmb250LWZhbWlseT0iQXJpYWwiPis8L3RleHQ+Cjx0ZXh0IHg9IjQyIiB5PSI0MiIgZm9udC1zaXplPSIxNCIgZm9udC1mYW1pbHk9IkFyaWFsIj4tPC90ZXh0Pgo8bGluZSB4MT0iNzAiIHkxPSIzMCIgeDI9IjEwMCIgeTI9IjMwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz4KPC9zdmc+" width="70" alt="symbole generateur"/>

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

- Court-circuit : U = 0 quelle que soit l'intensité (résistance nulle) — attention, danger en pratique si non protégé.
- Circuit ouvert : I = 0 quelle que soit la tension (résistance infinie).

**Erreurs fréquentes des étudiants**

- Confondre mesure en série (ampèremètre) et mesure en parallèle (voltmètre).
- Oublier qu'en série c'est le courant qui est commun, en parallèle c'est la tension.
- Mélanger résistance équivalente série (toujours plus grande que la plus grande des résistances) et parallèle (toujours plus petite que la plus petite).
- Appliquer la loi d'Ohm sur un générateur ou une diode (non ohmiques).

### 3.2 Mesures et incertitudes

**Vocabulaire de base**

- *Mesurande* : la grandeur que l'on cherche à mesurer.
- *Justesse* : capacité d'un appareil à donner une valeur proche de la valeur vraie, en moyenne (absence d'erreur systématique).
- *Fidélité* : capacité à donner des valeurs proches les unes des autres lors de mesures répétées (dispersion faible).
- *Exactitude* = justesse + fidélité.
- *Erreur systématique* : biais reproductible (ex. mauvais étalonnage, offset) — ne se réduit pas en répétant les mesures.
- *Erreur aléatoire* : fluctuation imprévisible d'une mesure à l'autre — se réduit statistiquement en répétant les mesures.

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

### 3.3 Ondes

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

### 3.4 Semi-conducteurs

**La jonction PN**

- Un semi-conducteur dopé N présente un excès d'électrons libres ; un semi-conducteur dopé P présente un déficit d'électrons (des "trous"). Au contact des deux, une jonction PN se forme, avec une zone de déplétion qui bloque naturellement le passage du courant dans un sens.
- **Sens passant :** le courant circule facilement au-delà d'une tension de seuil.
- **Sens bloqué :** le courant reste quasi nul (hors courant de fuite négligeable), quelle que soit la tension appliquée (dans la limite de la tenue en tension inverse du composant).

**La diode et sa caractéristique**

- Tension de seuil typique pour le silicium : 0,6 à 0,7 V (le germanium, moins utilisé aujourd'hui, serait plutôt autour de 0,2-0,3 V).
- Caractéristique I(V) fortement non linéaire : croissance quasi exponentielle du courant au-delà du seuil, courant quasi nul en dessous et en sens bloqué.
- **Modèle simplifié "diode idéale + seuil"**, très utile pour les calculs de première approche : en sens passant, on approxime V_diode ≈ 0,6-0,7 V quel que soit le courant ; en sens bloqué, I ≈ 0.

*Exemple résolu :* une diode silicium est montée en série avec une résistance de protection R = 1 kΩ sous une alimentation E = 5 V.
Avec le modèle simplifié : V_diode ≈ 0,7 V, donc U_R = E − V_diode = 5 − 0,7 = 4,3 V, et I = U_R/R = 4,3/1000 = 4,3 mA.

**Applications courantes**

- **Redressement :** transformer un signal alternatif en signal unidirectionnel (une diode simple pour le redressement simple alternance, un pont de 4 diodes pour le redressement double alternance).
- **Protection :** diode "de roue libre" en parallèle d'une bobine (relais, moteur) pour absorber la surtension à la coupure.
- **Indication/signalisation :** la LED, une diode électroluminescente, sera étudiée plus en détail dans la partie composants optoélectroniques.

**Erreurs fréquentes des étudiants**

- Appliquer la loi d'Ohm (U = R×I) directement sur une diode : elle n'est pas un composant linéaire, cette loi ne s'applique pas.
- Oublier la résistance de protection en série, ce qui peut détruire la diode (courant non limité).
- Se tromper de sens de montage : une diode montée à l'envers reste bloquée et ne laisse rien passer.

### 3.5 Systèmes bouclés et asservissement

**Boucle ouverte / boucle fermée**

- **Boucle ouverte :** la commande envoyée à l'actionneur ne dépend pas du résultat réellement obtenu en sortie. Simple à mettre en œuvre, mais sensible aux perturbations (aucune correction automatique).
- **Boucle fermée (système asservi) :** la sortie réelle est mesurée puis renvoyée en comparaison avec la consigne ; l'écart obtenu pilote une correction automatique.

**Schéma-bloc générique d'un système asservi**

Consigne → **comparateur** (calcule l'écart = consigne − mesure) → **correcteur** → **actionneur** → **système/procédé** → sortie, avec un **capteur** qui renvoie la mesure de la sortie vers le comparateur (boucle de retour).

**Vocabulaire clé**

| Terme | Rôle |
|---|---|
| Consigne | Valeur souhaitée pour la sortie |
| Mesure (ou retour) | Valeur réelle de la sortie, fournie par le capteur |
| Écart (ou erreur) | Écart = consigne − mesure ; pilote la correction |
| Correcteur | Calcule la commande à partir de l'écart |
| Actionneur | Agit physiquement sur le système (moteur, résistance chauffante...) |
| Perturbation | Cause extérieure non contrôlée qui modifie la sortie |

*Exemple résolu :* un radiateur électrique piloté par un thermostat. Consigne = 20°C, température mesurée = 18°C.
Écart = consigne − mesure = 20 − 18 = 2°C. Cet écart positif indique qu'il faut chauffer davantage ; le correcteur commande alors l'actionneur (résistance chauffante) en conséquence.

**Une nuance importante : boucle fermée ne veut pas dire "toujours meilleur"**

Une boucle fermée mal réglée (correction trop forte, trop lente...) peut osciller autour de la consigne au lieu de s'y stabiliser directement : c'est la notion de **stabilité**, qui sera approfondie plus tard dans l'année.

**Erreurs fréquentes des étudiants**

- Croire qu'un système en boucle fermée est automatiquement stable et précis : cela dépend aussi du réglage du correcteur.
- Confondre la consigne (ce qu'on veut) et la mesure (ce qu'on observe réellement).
- Oublier que la perturbation est une cause extérieure (une porte ouverte, par exemple), pas un élément du système lui-même.

### 3.6 Électromagnétisme

**Structure d'une onde électromagnétique**

- Une onde électromagnétique progressive est constituée d'un couple de champs : le champ électrique **E** et le champ magnétique **B**, perpendiculaires entre eux et perpendiculaires à la direction de propagation.
- Célérité dans le vide : **c ≈ 3.10⁸ m/s**. La relation de propagation reste la même que pour les ondes en général : **c = λ × f**.
- Dans un milieu matériel (autre que le vide), la célérité est inférieure à c (ex. environ 2.10⁸ m/s dans un câble coaxial).

*Exemple résolu :* une antenne émet à f = 433 MHz (fréquence typique des liaisons courte-portée). Calculer sa longueur d'onde dans le vide.
λ = c/f = 3.10⁸ / 433.10⁶ ≈ 0,693 m ≈ 69 cm.

**Le spectre électromagnétique**

Le classement se fait uniquement selon la fréquence (ou la longueur d'onde), du plus grand λ au plus petit : ondes radio, micro-ondes, infrarouge, visible, ultraviolet, rayons X, rayons gamma. Les réseaux sans fil (Wi-Fi, Bluetooth, 4G/5G) utilisent la partie micro-ondes du spectre (de l'ordre du GHz).

**Antennes, réflexion et réfraction**

- Une **antenne** convertit un signal électrique en onde rayonnée (émission) ou inversement (réception). Plus une antenne est adaptée à la fréquence utilisée, plus le rayonnement (ou la réception) est efficace.
- Une onde qui rencontre un obstacle ou un changement de milieu peut être **réfléchie** (renvoyée) et/ou **réfractée** (déviée en changeant de milieu) — deux phénomènes qui expliquent par exemple les zones d'ombre Wi-Fi dans un bâtiment.

**Application directe au métier CIEL**

Le dimensionnement d'une liaison sans fil (Wi-Fi, radio, LoRa...) combine directement ces notions avec celles vues en Partie 5 (décibels, bilan de liaison) : fréquence d'émission, longueur d'onde, atténuation en espace libre, gain d'antenne.

**Erreurs fréquentes des étudiants**

- Confondre la célérité de la lumière (3.10⁸ m/s) avec celle du son (340 m/s) dans les calculs.
- Oublier qu'un signal se propage moins vite dans un câble ou un milieu matériel que dans le vide.
- Penser qu'une fréquence plus élevée porte toujours "plus loin" : c'est en réalité l'inverse en espace libre, à puissance égale (l'atténuation en espace libre augmente avec la fréquence, cf. formule de Friis).

---

## Partie 2 — Semi-conducteurs et composants optoélectroniques

*(À compléter au fil de l'année — programme officiel : LEDs, photodiodes, capteurs optiques ; prérequis à consolider : jonction PN, transistor bipolaire/MOS, notions d'amplification et de redressement.)*

---

## Partie 3 — Systèmes bouclés et asservissement

*(À compléter au fil de l'année — pistes : fonction de transfert simple, notion de stabilité, correcteur proportionnel, régulation industrielle.)*

---

## Partie 4 — Ondes, propagation et transmission

*(À compléter au fil de l'année — programme officiel : ondes électromagnétiques, lignes de transmission, antennes, modulations analogiques et numériques, bande passante, interférences.)*

---

## Partie 5 — Étude des signaux, circuits linéaires et filtres

### 5.1 Puissances, décibels, atténuation et gains

**Rappel : puissance en régime sinusoïdal**

- Un signal sinusoïdal s'écrit u(t) = U_max·sin(ωt). Sa valeur efficace (RMS) est **U_eff = U_max / √2 ≈ 0,707 × U_max**.
- Puissance moyenne dissipée dans une résistance R : **P = U_eff² / R = R × I_eff² = U_eff × I_eff**.

*Exemple résolu :* un signal sinusoïdal d'amplitude U_max = 5 V attaque une résistance R = 50 Ω.
U_eff = 5/√2 ≈ 3,54 V. P = U_eff²/R = 3,54²/50 ≈ 0,25 W.

**Gain et atténuation en linéaire**

- Gain en puissance : **G = P_s / P_e** (sans unité ; G > 1 = amplification, G < 1 = atténuation).
- Gain en tension (mêmes impédances d'entrée et de sortie) : **A_v = V_s / V_e**.

**Le décibel (dB) : pourquoi et comment**

Le décibel est une échelle logarithmique, utilisée en électronique et en télécoms pour deux raisons : elle permet de manipuler des rapports qui varient sur plusieurs ordres de grandeur (ex. puissance très faible reçue par une antenne), et elle transforme les produits de gains successifs (cascade de quadripôles) en simples additions.

- Définition en puissance : **A(dB) = 10 × log₁₀(P₂/P₁)**
- Définition en tension, à impédances égales : **A(dB) = 20 × log₁₀(U₂/U₁)** (le facteur 20 vient de P ∝ U², donc log(U²) = 2log(U))
- Un gain positif correspond à une amplification ; un gain négatif correspond à une perte, que l'on appelle alors une **atténuation** (parfois notée positivement en valeur absolue : "atténuation de 6 dB" = gain de −6 dB).

**Valeurs remarquables à connaître par cœur**

| Rapport de puissance | En dB |
|---|---|
| ×1 (inchangé) | 0 dB |
| ×2 | +3 dB |
| ÷2 | −3 dB |
| ×10 | +10 dB |
| ÷10 | −10 dB |
| ×100 | +20 dB |
| ÷100 | −20 dB |
| ×1000 | +30 dB |

*Exemple résolu :* P_e = 2,0 mW, P_s = 0,5 mW. A = 10×log₁₀(0,5/2,0) = 10×log₁₀(0,25) ≈ −6,02 dB (cohérent avec ÷4 ≈ deux fois ÷2, soit environ −3 −3 = −6 dB).

**Cascade de quadripôles (chaîne de transmission)**

Propriété clé du dB : en cascade, les gains et pertes **s'additionnent** en dB (alors qu'il faudrait les multiplier en linéaire) :

**G_total(dB) = G₁(dB) + G₂(dB) + … + Gₙ(dB)**

*Exemple résolu :* un amplificateur de +12 dB, suivi d'un câble de −4 dB, suivi d'un connecteur de −0,5 dB.
G_total = 12 − 4 − 0,5 = **+7,5 dB**.

**Le dBm : une unité absolue de puissance**

Le dB seul exprime un **rapport** (sans dimension) entre deux puissances. Le **dBm** exprime au contraire une puissance **absolue**, rapportée à une référence de 1 mW :

**P(dBm) = 10 × log₁₀(P / 1 mW)**

Valeurs repères à connaître : 0 dBm = 1 mW ; +10 dBm = 10 mW ; +20 dBm = 100 mW ; −10 dBm = 0,1 mW ; −30 dBm = 1 µW.

*Usage typique CIEL :* le dBm est la norme pour exprimer un niveau de signal Wi-Fi, un niveau reçu en fibre optique, ou la puissance d'émission d'un module radio.

**Bilan de liaison (budget de liaison)**

Comme les gains et pertes s'additionnent en dB, on peut ajouter directement des dB à une puissance en dBm pour suivre un signal tout au long d'une chaîne de transmission :

**P_s(dBm) = P_e(dBm) + Σ gains(dB) − Σ pertes(dB)**

*Exemple résolu :* un émetteur Wi-Fi sort à +20 dBm. Le signal traverse un câble (−2 dB), une antenne avec un gain de +5 dB, puis un trajet en espace libre qui atténue de 60 dB.
P_reçue = 20 − 2 + 5 − 60 = **−37 dBm** (soit environ 2.10⁻⁴ mW, un niveau de réception Wi-Fi tout à fait réaliste).

**Erreurs fréquentes des étudiants**

- Confondre le facteur 10 (pour les puissances) et le facteur 20 (pour les tensions) dans la formule du dB.
- Traiter le dB comme une unité absolue de puissance, alors que c'est un rapport sans dimension — seul le **dBm** est absolu.
- Additionner directement deux niveaux exprimés en dBm comme s'il s'agissait de puissances linéaires (il faut repasser en mW pour sommer des puissances) — en revanche, on additionne bien un gain en dB à une puissance en dBm.

---

## Partie 6 — Composants optoélectroniques et propagation guidée (approfondissement)

*(À compléter au fil de l'année — approfondissement des composants optoélectroniques et des lignes de transmission guidée : propagation lumineuse, réflexion totale, principe de la fibre optique.)*

---

## Partie 7 — Préparation à l'épreuve

*(À compléter au fil de l'année — méthodologie de résolution type épreuve U4 (Physique : 1h30/30 points), fiches de synthèse par thème, annales, révisions transversales.)*

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
| Mesures et incertitudes (référence officielle) | *Évaluation des données de mesure — Guide pour l'expression de l'incertitude de mesure* (GUM), JCGM 100:2008 | BIPM / JCGM | Téléchargement gratuit sur bipm.org |

### Pour la culture scientifique et donner du sens (à recommander aux étudiants curieux)

| Ouvrage | Auteur | Intérêt |
|---|---|---|
| *Le cours de physique de Feynman* | Richard Feynman | Un classique mondial, pédagogique et vivant, pour (re)donner du sens aux notions de base |
| *Le Goût du vrai* | Étienne Klein | Physicien et vulgarisateur français, sur l'esprit scientifique et la démarche expérimentale |
| Collection *Que sais-je ?* (ex. *L'électronique*, *Les ondes électromagnétiques*) | Divers auteurs | Format court et accessible pour des mises au point rapides sur un thème précis |

### Ressources numériques et normatives (gratuites)

- **BIPM/JCGM** — Guide pour l'expression de l'incertitude de mesure (GUM) et vocabulaire international de métrologie (VIM), téléchargeables gratuitement sur *bipm.org*.
- **Eduscol / sites académiques de sciences physiques** — ressources pédagogiques, banques d'exercices et documents d'accompagnement mutualisés entre professeurs de STS.
