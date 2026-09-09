# BTS CIEL 2 : Physique
## Recueil de TP

Document vivant, à compléter au fil de l'année. Chaque partie correspond à un grand thème du programme. Le Partie 1 est déjà renseigné (issu de la séance de rentrée : 4 ateliers tournants + alternative informatique en cas de manque de matériel).

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

## Partie 1 : Consolidation des fondamentaux

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

<img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAzNDAgMjIwIiB3aWR0aD0iMzQwIiBoZWlnaHQ9IjIyMCI+PGxpbmUgeDE9IjcwIiB5MT0iNTAiIHgyPSIyNzAiIHkyPSI1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iMTQ4LjAiIHk9IjQxLjAiIHdpZHRoPSI0NCIgaGVpZ2h0PSIxOCIgZmlsbD0id2hpdGUiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjE3MCIgeT0iMzUuMCIgZm9udC1zaXplPSIxMyIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5SPC90ZXh0PjxsaW5lIHgxPSIyNzAiIHkxPSI1MCIgeDI9IjI3MCIgeTI9IjE3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjI3MCIgeTE9IjE3MCIgeDI9IjcwIiB5Mj0iMTcwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iNzAiIHkxPSIxNzAiIHgyPSI3MCIgeTI9IjUwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48Y2lyY2xlIGN4PSI3MCIgY3k9IjExMCIgcj0iMjAiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSI3MCIgeT0iMTA3LjAiIGZvbnQtc2l6ZT0iMTQiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+KzwvdGV4dD48dGV4dCB4PSI3MCIgeT0iMTI1LjAiIGZvbnQtc2l6ZT0iMTQiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+LTwvdGV4dD48dGV4dCB4PSIzNiIgeT0iMTEwIiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkFsaW08L3RleHQ+PGxpbmUgeDE9IjE0MCIgeTE9IjUwIiB4Mj0iMTQwIiB5Mj0iMjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSIyMDAiIHkxPSI1MCIgeDI9IjIwMCIgeTI9IjIwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMTQwIiB5MT0iMjAiIHgyPSIxNTUiIHkyPSIyMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjE4NSIgeTE9IjIwIiB4Mj0iMjAwIiB5Mj0iMjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxjaXJjbGUgY3g9IjE3MCIgY3k9IjIwIiByPSIxNiIgZmlsbD0id2hpdGUiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjE3MCIgeT0iMjUiIGZvbnQtc2l6ZT0iMTUiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+VjwvdGV4dD48dGV4dCB4PSIxNzAiIHk9IjIwMCIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5NZXN1cmUgZGUgbGEgdGVuc2lvbiBhdXggYm9ybmVzIGRlIFIgKEF0ZWxpZXIgMSk8L3RleHQ+PC9zdmc+" width="320" alt="schema atelier1_mesure_tension"/>

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
<img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAzNDAgMjIwIiB3aWR0aD0iMzQwIiBoZWlnaHQ9IjIyMCI+PGxpbmUgeDE9IjcwIiB5MT0iNTAiIHgyPSIxNTAiIHkyPSI1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iOTMuMCIgeT0iNDEuMCIgd2lkdGg9IjQ0IiBoZWlnaHQ9IjE4IiBmaWxsPSJ3aGl0ZSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iMTE1IiB5PSIzNS4wIiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPlIxPC90ZXh0PjxsaW5lIHgxPSIxNTAiIHkxPSI1MCIgeDI9IjIzMCIgeTI9IjUwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48cmVjdCB4PSIxNjguMCIgeT0iNDEuMCIgd2lkdGg9IjQ0IiBoZWlnaHQ9IjE4IiBmaWxsPSJ3aGl0ZSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iMTkwIiB5PSIzNS4wIiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPlIyPC90ZXh0PjxsaW5lIHgxPSIyMzAiIHkxPSI1MCIgeDI9IjI3MCIgeTI9IjUwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMjcwIiB5MT0iNTAiIHgyPSIyNzAiIHkyPSIxNzAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSIyNzAiIHkxPSIxNzAiIHgyPSI3MCIgeTI9IjE3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjcwIiB5MT0iMTcwIiB4Mj0iNzAiIHkyPSI1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGNpcmNsZSBjeD0iNzAiIGN5PSIxMTAiIHI9IjIwIiBmaWxsPSJ3aGl0ZSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iNzAiIHk9IjEwNy4wIiBmb250LXNpemU9IjE0IiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPis8L3RleHQ+PHRleHQgeD0iNzAiIHk9IjEyNS4wIiBmb250LXNpemU9IjE0IiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPi08L3RleHQ+PHRleHQgeD0iMzYiIHk9IjExMCIgZm9udC1zaXplPSIxMyIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5FPC90ZXh0PjxjaXJjbGUgY3g9IjE1MCIgY3k9IjUwIiByPSIzIiBmaWxsPSJibGFjayIvPjx0ZXh0IHg9IjE1MCIgeT0iMzgiIGZvbnQtc2l6ZT0iMTEiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+cHQuIG1lc3VyZSBJPC90ZXh0Pjx0ZXh0IHg9IjE3MCIgeT0iMjAwIiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPk1vbnRhZ2Ugc8OpcmllIChBdGVsaWVyIDJhKTwvdGV4dD48L3N2Zz4=" width="320" alt="schema atelier2a_serie"/>

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
<img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAzNDAgMjIwIiB3aWR0aD0iMzQwIiBoZWlnaHQ9IjIyMCI+PGxpbmUgeDE9IjcwIiB5MT0iNTAiIHgyPSIyNzAiIHkyPSI1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjcwIiB5MT0iMTcwIiB4Mj0iMjcwIiB5Mj0iMTcwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iNzAiIHkxPSI1MCIgeDI9IjcwIiB5Mj0iMTcwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48Y2lyY2xlIGN4PSI0MCIgY3k9IjExMCIgcj0iMjAiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSI0MCIgeT0iMTA3LjAiIGZvbnQtc2l6ZT0iMTQiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+KzwvdGV4dD48dGV4dCB4PSI0MCIgeT0iMTI1LjAiIGZvbnQtc2l6ZT0iMTQiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+LTwvdGV4dD48dGV4dCB4PSI2IiB5PSIxMTAiIGZvbnQtc2l6ZT0iMTMiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+RTwvdGV4dD48bGluZSB4MT0iNDAiIHkxPSI1MCIgeDI9IjcwIiB5Mj0iNTAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSI0MCIgeTE9IjE3MCIgeDI9IjcwIiB5Mj0iMTcwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMTUwIiB5MT0iNTAiIHgyPSIxNTAiIHkyPSI5MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iMTQxLjAiIHk9Ijg4LjAiIHdpZHRoPSIxOCIgaGVpZ2h0PSI0NCIgZmlsbD0id2hpdGUiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjE3NS4wIiB5PSIxMTAiIGZvbnQtc2l6ZT0iMTMiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+UjE8L3RleHQ+PGxpbmUgeDE9IjE1MCIgeTE9IjEzMCIgeDI9IjE1MCIgeTI9IjE3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjIzMCIgeTE9IjUwIiB4Mj0iMjMwIiB5Mj0iOTAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxyZWN0IHg9IjIyMS4wIiB5PSI4OC4wIiB3aWR0aD0iMTgiIGhlaWdodD0iNDQiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIyNTUuMCIgeT0iMTEwIiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPlIyPC90ZXh0PjxsaW5lIHgxPSIyMzAiIHkxPSIxMzAiIHgyPSIyMzAiIHkyPSIxNzAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjE1MCIgeT0iMjAwIiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPk1vbnRhZ2UgcGFyYWxsw6hsZSAoQXRlbGllciAyYik8L3RleHQ+PC9zdmc+" width="320" alt="schema atelier2b_parallele"/>

3. **(20 min) Montage parallèle.** Remonter R1 et R2 en parallèle sous la même alimentation E, comme ci-dessus. Mesurer :
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

<img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAzNDAgMjIwIiB3aWR0aD0iMzQwIiBoZWlnaHQ9IjIyMCI+PGxpbmUgeDE9IjYwIiB5MT0iNjAiIHgyPSIxNTAiIHkyPSI2MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iODMuMCIgeT0iNTEuMCIgd2lkdGg9IjQ0IiBoZWlnaHQ9IjE4IiBmaWxsPSJ3aGl0ZSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iMTA1IiB5PSI0NS4wIiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPlI8L3RleHQ+PGxpbmUgeDE9IjE1MCIgeTE9IjYwIiB4Mj0iMjQwIiB5Mj0iNjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSIyNDAiIHkxPSI2MCIgeDI9IjI0MCIgeTI9IjE3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjIyNiIgeTE9IjEzNCIgeDI9IjI1NCIgeTI9IjEzNCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIzIi8+PGxpbmUgeDE9IjIyNiIgeTE9IjE0NiIgeDI9IjI1NCIgeTI9IjE0NiIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIzIi8+PHRleHQgeD0iMjY2IiB5PSIxNDAiIGZvbnQtc2l6ZT0iMTMiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+QzwvdGV4dD48bGluZSB4MT0iMjQwIiB5MT0iMTcwIiB4Mj0iNjAiIHkyPSIxNzAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSI2MCIgeTE9IjE3MCIgeDI9IjYwIiB5Mj0iNjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxjaXJjbGUgY3g9IjYwIiBjeT0iMTE1IiByPSIyMCIgZmlsbD0id2hpdGUiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjYwIiB5PSIxMTIuMCIgZm9udC1zaXplPSIxNCIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj4rPC90ZXh0Pjx0ZXh0IHg9IjYwIiB5PSIxMzAuMCIgZm9udC1zaXplPSIxNCIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj4tPC90ZXh0Pjx0ZXh0IHg9IjI2IiB5PSIxMTUiIGZvbnQtc2l6ZT0iMTMiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+R0JGPC90ZXh0PjxjaXJjbGUgY3g9IjYwIiBjeT0iNjAiIHI9IjMiIGZpbGw9ImJsYWNrIi8+PHRleHQgeD0iNDUiIHk9IjQ1IiBmb250LXNpemU9IjExIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkNIMTwvdGV4dD48Y2lyY2xlIGN4PSIyNDAiIGN5PSI2MCIgcj0iMyIgZmlsbD0iYmxhY2siLz48dGV4dCB4PSIyNTUiIHk9IjQ1IiBmb250LXNpemU9IjExIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkNIMjwvdGV4dD48dGV4dCB4PSIxNTAiIHk9IjIwMCIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5DaXJjdWl0IFJDLCBHQkYgKyBvc2NpbGxvc2NvcGUgKEF0ZWxpZXIgMyk8L3RleHQ+PC9zdmc+" width="320" alt="schema atelier3_rc"/>

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

<img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAzNDAgMjIwIiB3aWR0aD0iMzQwIiBoZWlnaHQ9IjIyMCI+PGxpbmUgeDE9IjcwIiB5MT0iNTAiIHgyPSIxNTAiIHkyPSI1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iOTMuMCIgeT0iNDEuMCIgd2lkdGg9IjQ0IiBoZWlnaHQ9IjE4IiBmaWxsPSJ3aGl0ZSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iMTE1IiB5PSIzNS4wIiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPlIgcHJvdGVjdGlvbjwvdGV4dD48bGluZSB4MT0iMTUwIiB5MT0iNTAiIHgyPSIyMzAiIHkyPSI1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHBvbHlnb24gcG9pbnRzPSIxOTUsNDAgMTk1LDYwIDIxOCw1MCIgZmlsbD0iYmxhY2siIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSIyMTgiIHkxPSIzOCIgeDI9IjIxOCIgeTI9IjYyIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjMiLz48dGV4dCB4PSIyMTAiIHk9IjI4IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkQ8L3RleHQ+PGxpbmUgeDE9IjIzMCIgeTE9IjUwIiB4Mj0iMjcwIiB5Mj0iNTAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSIyNzAiIHkxPSI1MCIgeDI9IjI3MCIgeTI9IjE3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjI3MCIgeTE9IjE3MCIgeDI9IjcwIiB5Mj0iMTcwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iNzAiIHkxPSIxNzAiIHgyPSI3MCIgeTI9IjUwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48Y2lyY2xlIGN4PSI3MCIgY3k9IjExMCIgcj0iMjAiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSI3MCIgeT0iMTA3LjAiIGZvbnQtc2l6ZT0iMTQiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+KzwvdGV4dD48dGV4dCB4PSI3MCIgeT0iMTI1LjAiIGZvbnQtc2l6ZT0iMTQiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+LTwvdGV4dD48dGV4dCB4PSIzNiIgeT0iMTEwIiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkFsaW08L3RleHQ+PHRleHQgeD0iMTUwIiB5PSIyMDAiIGZvbnQtc2l6ZT0iMTEiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+RGlvZGUgKyByw6lzaXN0YW5jZSBkZSBwcm90ZWN0aW9uIChBdGVsaWVyIDQsIG9wdGlvbiBBKTwvdGV4dD48L3N2Zz4=" width="320" alt="schema atelier4a_diode"/>

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

<img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAzNDAgMjIwIiB3aWR0aD0iMzQwIiBoZWlnaHQ9IjIyMCI+PGxpbmUgeDE9IjcwIiB5MT0iNTAiIHgyPSIyNzAiIHkyPSI1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iMTM1LjAiIHk9IjQxLjAiIHdpZHRoPSI3MCIgaGVpZ2h0PSIxOCIgZmlsbD0id2hpdGUiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjE3MCIgeT0iMzUuMCIgZm9udC1zaXplPSIxMyIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5Qb3RlbnRpb23DqHRyZTwvdGV4dD48bGluZSB4MT0iMjcwIiB5MT0iNTAiIHgyPSIyNzAiIHkyPSIxNzAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSIyNzAiIHkxPSIxNzAiIHgyPSI3MCIgeTI9IjE3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjcwIiB5MT0iMTcwIiB4Mj0iNzAiIHkyPSI1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGNpcmNsZSBjeD0iNzAiIGN5PSIxMTAiIHI9IjIwIiBmaWxsPSJ3aGl0ZSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iNzAiIHk9IjEwNy4wIiBmb250LXNpemU9IjE0IiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPis8L3RleHQ+PHRleHQgeD0iNzAiIHk9IjEyNS4wIiBmb250LXNpemU9IjE0IiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPi08L3RleHQ+PHRleHQgeD0iMzYiIHk9IjExMCIgZm9udC1zaXplPSIxMyIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5FPC90ZXh0PjxsaW5lIHgxPSIxNzAiIHkxPSI1OSIgeDI9IjE3MCIgeTI9IjkwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48cG9seWdvbiBwb2ludHM9IjE2NSw5MCAxNzUsOTAgMTcwLDgwIiBmaWxsPSJibGFjayIvPjxsaW5lIHgxPSIxNzAiIHkxPSI5MCIgeDI9IjE3MCIgeTI9IjEzMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGNpcmNsZSBjeD0iMTcwIiBjeT0iMTUwIiByPSIxNiIgZmlsbD0id2hpdGUiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjE3MCIgeT0iMTU1IiBmb250LXNpemU9IjE1IiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPlY8L3RleHQ+PHRleHQgeD0iMTUwIiB5PSIyMDAiIGZvbnQtc2l6ZT0iMTAiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+UG90ZW50aW9tw6h0cmUgZW4gZGl2aXNldXIgZGUgdGVuc2lvbiAoQXRlbGllciA0LCBvcHRpb24gQik8L3RleHQ+PC9zdmc+" width="320" alt="schema atelier4b_potentiometre"/>

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

### Alternative : TP informatique / simulation (en cas de manque de matériel)

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
- En modifiant l'écart-type simulé ou le nombre de mesures n dans la formule, on observe immédiatement l'effet de n sur u_A (u_A diminue en 1/√n).
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

## Partie 2 : Semi-conducteurs et composants optoélectroniques

*(À compléter au fil de l'année.)*

---

## Partie 3 : Systèmes bouclés et asservissement

*(À compléter au fil de l'année.)*

---

## Partie 4 : Ondes, propagation et transmission

*(À compléter au fil de l'année.)*

---

## Partie 5 : Étude des signaux, circuits linéaires et filtres

### 5.1 TP : Mesure de gain et d'atténuation d'un quadripôle (2h, sur une ou deux séances)

- **Objectifs :** mesurer expérimentalement le gain d'un quadripôle à partir de tensions d'entrée/sortie, calculer ce gain en dB, observer comment il varie avec la fréquence, et faire le lien avec la fréquence de coupure vue à l'atelier Ondes (§Partie 1).
- **Matériel par poste :** 1 GBF, 1 oscilloscope 2 voies, le circuit RC déjà utilisé à l'atelier Ondes (réemployé ici comme quadripôle sous test), cordons BNC. *(Variante : un atténuateur résistif fixe simple, R1/R2 en pont diviseur, pour un gain constant indépendant de la fréquence : utile si l'on veut isoler la notion de dB de celle de filtrage.)*
- **Sécurité :** aucun risque particulier, amplitude GBF limitée à quelques volts.

**Déroulé détaillé**

1. **(10 min) Prévision théorique.** Avant toute mesure, avec les valeurs de R et C de votre circuit RC :
   - ❓ *Q1. Rappelez la fréquence de coupure théorique f_c = 1/(2πRC) calculée à l'atelier Ondes.*
   - ❓ *Q2. À très basse fréquence (f << f_c), quel gain en tension attendez-vous entre l'entrée et la sortie du circuit ? Exprimez-le en dB.*
2. **(20 min) Mesure du gain en basse fréquence.** Régler le GBF sur une fréquence nettement inférieure à f_c (par exemple f_c/10). Mesurer à l'oscilloscope l'amplitude d'entrée V_e (voie 1) et de sortie V_s (voie 2).

     | Grandeur | Valeur |
     |---|---|
     | Fréquence réglée | |
     | V_e (crête ou crête-à-crête, à préciser) | |
     | V_s | |
     | Gain linéaire A_v = V_s/V_e | |
     | Gain en dB = 20×log₁₀(A_v) | |

   - ❓ *Q3. Ce résultat est-il cohérent avec la prévision de la Q2 ?*
3. **(40 min) Balayage en fréquence.** Répéter la mesure de V_e et V_s pour une série de fréquences croissantes couvrant largement f_c (par exemple : f_c/10, f_c/3, f_c/2, f_c, 2×f_c, 5×f_c, 10×f_c).

     | Fréquence | V_e | V_s | A_v = V_s/V_e | Gain (dB) |
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

## Partie 6 : Composants optoélectroniques et propagation guidée (approfondissement)

*(À compléter au fil de l'année.)*


---

<div style="page-break-after: always;"></div>

## TP : Mémoire de 64 bits

*Cette série de TP ne correspond pas à l'une des 7 parties officielles ci-dessus : c'est un projet transversal en 3 séances (environ 10h), qui peut être positionné à un moment pertinent de l'année (par exemple en lien avec la Partie 5, une fois les bases de l'électronique numérique/logique introduites). Il est calibré pour 16 élèves, soit 8 binômes : un point fort du projet étant que 8 octets construits par les 8 binômes s'assemblent naturellement en une mémoire de 64 bits (8×8) au TP3.*

# Projet de TP --- Construire une mémoire de 64 bits

## Physique appliquée à l'informatique --- Bac +1 / Bac +2

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

# Sommaire

-   [1. Présentation du projet](#1-présentation-du-projet)
-   [2. Matériel général](#2-matériel-général)
-   [3. TP 1 --- Un bit physique](#3-tp-1--un-bit-physique)
-   [4. TP 2 --- Un octet électronique](#4-tp-2--un-octet-électronique)
-   [5. TP 3 --- Une mémoire collective de 64
    bits](#5-tp-3--une-mémoire-collective-de-64-bits)
-   [6. Évaluation](#6-évaluation)
-   [7. Annexes techniques](#7-annexes-techniques)

------------------------------------------------------------------------

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
-   Ne pas alimenter une bobine directement avec une sortie Arduino sans
    étage de commande.

------------------------------------------------------------------------

# 2. Matériel général

> **Base de calcul retenue pour tout ce dossier : 16 élèves = 8 binômes.** C'est un point fort de ce projet : 8 binômes construisent chacun un octet au TP2, et les 8 octets s'assemblent naturellement en une mémoire de 64 bits au TP3 (8 × 8 = 64). Les quantités ci-dessous sont calculées pour ce format, avec une marge de sécurité (composants qui grillent, fils qui cassent, oublis) d'environ 15 à 20 %.

## 2.1 Matériel commun aux trois TP

| Matériel | Référence / caractéristique conseillée | Quantité pour 16 élèves | Répartition |
|---|---|---|---|
| Arduino Uno (ou Uno R4) | Uno R3 ou compatible ATmega328P | **8** | 1 par binôme, réutilisé aux 3 TP |
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

## 2.2 Matériel spécifique au TP 1 (par binôme × 8)

| Matériel | Référence / caractéristique conseillée | Quantité pour 8 binômes |
|---|---|---|
| Fil de cuivre émaillé | Diamètre 0,3 à 0,5 mm, bobine de 15-20 m | **8 bobines** |
| Noyau ferromagnétique | Clou ou vis en fer/acier, 4-6 cm, ou noyau ferrite de récupération | **8 à 16** (2 par binôme conseillé, pour recommencer si besoin) |
| Relais électromécanique 5 V | Type SRD-05VDC-SL-C ou équivalent, bobine 5 V, contact 1 RT (SPDT) | **16** (2 par binôme : 1 pour le montage manuel, 1 pour la commande Arduino) + 2 de rechange |
| Diode de roue libre | 1N4001, 1N4004 ou 1N4148 | **20** (2 par binôme + marge) |
| Transistor NPN | 2N2222 ou BC547, boîtier TO-92 | **16** (2 par binôme + marge) |
| Résistance 1 kΩ (base transistor) | 1/4 W | **16** |
| Petites pièces métalliques (test d'attraction) | Trombones ou vis courtes | **40** (5 par binôme) |
| Fil de connexion souple (relais → breadboard) | Section fine, si le relais n'est pas au pas 2,54 mm | **8 jeux** |

## 2.3 Matériel spécifique au TP 2 (par binôme × 8)

| Matériel | Référence / caractéristique conseillée | Quantité pour 8 binômes |
|---|---|---|
| Circuit intégré 74HC74 | Double bascule D, boîtier DIP-14 | **36** (4 par binôme + 4 de rechange) |
| Support de circuit intégré DIP-14 (tulipe) | Recommandé pour éviter d'abîmer les broches en manipulant | **36** |
| LED (voir tableau général) | : | 64 (8 par binôme) |
| Résistance LED (voir tableau général) | : | 64 |
| DIP-switch 8 positions (voir tableau général) | Entrée de données D0-D7 | 8 (1 par binôme) |
| Bouton-poussoir CLOCK/WRITE | : | 8 (1 par binôme) |
| Condensateur 100 nF (voir tableau général) | 1 par 74HC74 | 32 |
| Arduino (voir tableau général) | Génération de WRITE, lecture des Q | 8 (réutilisé du TP1) |

## 2.4 Matériel supplémentaire au TP 3 (mutualisé pour la classe entière)

| Matériel | Référence / caractéristique conseillée | Quantité pour la classe (8 groupes) |
|---|---|---|
| Registres 8 bits (TP2) | Réutilisés tels quels | 8 (1 par groupe, déjà construits) |
| Circuit intégré 74HC138 | Décodeur 3 vers 8, boîtier DIP-16 | **2** (1 en service + 1 de rechange) |
| Circuit intégré 74HC244 ou 74HC245 | Buffer de bus, sorties trois états, boîtier DIP-20 | **3** (1 à 2 en service + rechange) |
| Support DIP-16 et DIP-20 (tulipe) | : | 2 et 3 |
| Résistances de rappel 10 kΩ | Selon montage (voir tableau général) | Puisées dans le stock général |
| Bornier à vis ou barrette de connexion 14 points | Interface standardisée par groupe (VCC, GND, DATA0-7, WRITE, READ_ENABLE, RESET, SELECT) | **8 jeux** |
| Plaque ou breadboard commune | Support du décodeur, des buffers et du bus partagé | **1** (la 9ᵉ breadboard du tableau général) |
| Fils de bus repérés par couleur | 8 lignes DATA + 8 lignes SELECT (Y0-Y7) + WRITE + READ_ENABLE + RESET communs | **≈ 20 fils**, à prévoir dans un code couleur dédié (cf. §7.1) |
| Arduino "contrôleur" | Un des 8 Arduino du binôme désigné pour piloter adresse + bus | 1 (pris sur le stock général) |

## 2.5 Synthèse budgétaire des composants actifs à commander

Pour ne rien oublier lors de la commande, voici le total des composants actifs (hors passifs génériques déjà dans le tableau 2.1) :

| Composant | Référence | Quantité totale à commander |
|---|---|---|
| Relais 5 V SPDT | SRD-05VDC-SL-C ou équiv. | 18 (16 + 2 rechange) |
| Diode roue libre | 1N4001/1N4004/1N4148 | 20 |
| Transistor NPN | 2N2222 ou BC547 | 16 |
| Circuit 74HC74 | Double bascule D, DIP-14 | 36 |
| Circuit 74HC138 | Décodeur 3→8, DIP-16 | 2 |
| Circuit 74HC244/245 | Buffer 3 états, DIP-20 | 3 |
| Arduino Uno | Uno R3/R4 ou compatible | 8 |

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
6. Simuler : cliquer sur les entrées pour changer les bits, déclencher un front d'horloge (bouton ou clic sur l'horloge en mode pas-à-pas), vérifier que les sorties ne changent qu'au moment du front — exactement le comportement observé au tableau du §4.7.
7. Une fois le comportement validé en simulation, le câblage réel avec les 4 boîtiers 74HC74 reproduit exactement ce schéma logique (chaque 74HC74 = 2 bascules D de la simulation).

Logisim permet d'afficher la valeur du registre directement en décimal ou en hexadécimal via un composant "Hex Digit Display", ce qui permet de vérifier très vite qu'un octet écrit correspond bien à la valeur attendue, sans avoir à décoder 8 LED à l'œil.

### Alternative numérique : TP3 (mémoire collective de 64 bits)

Le TP3 est le plus ambitieux à câbler en réel (8 groupes + décodeur + bus), et c'est aussi celui où une simulation collective préalable rassure le plus les élèves avant l'assemblage physique.

1. Reprendre dans Logisim Evolution le registre 8 bits validé au TP2 (on peut le transformer en "sous-circuit" réutilisable 8 fois, via le menu "Project > Add Circuit", pour éviter de tout redessiner).
2. Ajouter un composant "Decoder" (bibliothèque "Plexers") réglé sur 3 bits de sélection, qui reproduit directement le 74HC138 du §5.8 : chacune de ses 8 sorties active un sous-circuit registre.
3. Ajouter des composants "Tristate Buffer" (bibliothèque "Wiring") sur la sortie de chaque registre, commandés par la même ligne SELECT que celle qui active son écriture : c'est l'équivalent exact des 74HC244/245 du §5.10, et Logisim affiche explicitement l'état haute impédance (en général en couleur différente sur le fil), ce qui rend le concept de conflit de bus très concret.
4. Relier les 8 sorties trois états sur un même bus DATA commun, et vérifier en simulation qu'un conflit apparaît (couleur d'erreur) si deux sorties sont activées en même temps par erreur — c'est exactement l'erreur décrite en §5.10, mais sans risquer d'endommager un vrai circuit intégré pour la démonstration.
5. Piloter l'adresse avec 3 entrées "Input Pin", et vérifier qu'on peut écrire puis relire chacun des 8 octets indépendamment, avant de reproduire l'architecture validée avec le matériel réel le jour de l'assemblage collectif (§5.9, montage détaillé pas à pas).

Même si le matériel physique est disponible pour toute la classe, préparer et valider l'architecture en Logisim par binôme avant le jour de l'assemblage collectif permet de gagner du temps : les erreurs de logique (mauvais sens du décodeur, oubli d'un buffer) sont corrigées à l'écran plutôt que découvertes au milieu de 8 breadboards interconnectées.

------------------------------------------------------------------------

# 3. TP 1 --- Un bit physique

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

## 3.6 Partie A --- Fabriquer un électroaimant

### Matériel

-   Fil de cuivre émaillé.
-   Noyau ferromagnétique.
-   Alimentation 5 V.
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
7.  **Câbler l'alimentation.** Brancher une extrémité de la bobine sur le +5 V de l'alimentation, l'autre sur le 0 V, **en intercalant le multimètre en mode ampèremètre en série** pour lire le courant (ou limiter le courant à l'alimentation si celle-ci le permet).
8.  **Mettre sous tension progressivement** si l'alimentation le permet, sinon allumer directement à 5 V en surveillant que rien ne chauffe anormalement en quelques secondes.
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

------------------------------------------------------------------------

## 3.7 Partie B --- Utiliser un relais

### Principe

Un relais possède généralement :

-   Une bobine.
-   Un contact commun `COM`.
-   Un contact normalement ouvert `NO`.
-   Un contact normalement fermé `NC`.

Lorsque la bobine est alimentée, le contact change de position.

### Schéma de principe

<img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAzODAgMzQwIiB3aWR0aD0iMzgwIiBoZWlnaHQ9IjM0MCI+PGxpbmUgeDE9IjYwIiB5MT0iNDAiIHgyPSIzMjAiIHkyPSI0MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iMzUiIHk9IjQ0IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPis1IFY8L3RleHQ+PGxpbmUgeDE9IjYwIiB5MT0iMzEwIiB4Mj0iMzIwIiB5Mj0iMzEwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIzNSIgeT0iMzE0IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkdORDwvdGV4dD48bGluZSB4MT0iMTMwIiB5MT0iNDAiIHgyPSIxMzAiIHkyPSI3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iMTAzLjAiIHk9Ijc1LjAiIHdpZHRoPSI1NCIgaGVpZ2h0PSI0MCIgcng9IjgiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIxMzAiIHk9IjEwMCIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5TRVQ8L3RleHQ+PGxpbmUgeDE9IjEzMCIgeTE9IjExNSIgeDI9IjEzMCIgeTI9IjE1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjIzMCIgeTE9IjQwIiB4Mj0iMjMwIiB5Mj0iNzAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxyZWN0IHg9IjE5OC4wIiB5PSI3NS4wIiB3aWR0aD0iNjQiIGhlaWdodD0iNDAiIHJ4PSI4IiBmaWxsPSJ3aGl0ZSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iMjMwIiB5PSIxMDAiIGZvbnQtc2l6ZT0iMTIiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+Tk8gKHJlbGFpcyk8L3RleHQ+PGxpbmUgeDE9IjIzMCIgeTE9IjExNSIgeDI9IjIzMCIgeTI9IjE1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjEzMCIgeTE9IjE1MCIgeDI9IjIzMCIgeTI9IjE1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGNpcmNsZSBjeD0iMTgwIiBjeT0iMTUwIiByPSIzIiBmaWxsPSJibGFjayIvPjx0ZXh0IHg9IjE4MCIgeT0iMTY2IiBmb250LXNpemU9IjExIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPm7Fk3VkIEE8L3RleHQ+PGxpbmUgeDE9IjE4MCIgeTE9IjE1MCIgeDI9IjE4MCIgeTI9IjE3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iMTYwLjAiIHk9IjE3NS4wIiB3aWR0aD0iNDAiIGhlaWdodD0iNzAiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMTY1LjAiIHkxPSIxODUuMCIgeDI9IjE5NS4wIiB5Mj0iMTg1LjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMSIvPjxsaW5lIHgxPSIxNjUuMCIgeTE9IjIwMS42NjY2NjY2NjY2NjY2NiIgeDI9IjE5NS4wIiB5Mj0iMjAxLjY2NjY2NjY2NjY2NjY2IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjEiLz48bGluZSB4MT0iMTY1LjAiIHkxPSIyMTguMzMzMzMzMzMzMzMzMzQiIHgyPSIxOTUuMCIgeTI9IjIxOC4zMzMzMzMzMzMzMzMzNCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIxIi8+PGxpbmUgeDE9IjE2NS4wIiB5MT0iMjM1LjAiIHgyPSIxOTUuMCIgeTI9IjIzNS4wIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjEiLz48dGV4dCB4PSIyMTYuMCIgeT0iMjE1IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJzdGFydCI+Qm9iaW5lIHJlbGFpczwvdGV4dD48bGluZSB4MT0iMTgwIiB5MT0iMjQ1IiB4Mj0iMTgwIiB5Mj0iMjYwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48cmVjdCB4PSIxNDUuMCIgeT0iMjY3LjAiIHdpZHRoPSI3MCIgaGVpZ2h0PSIzNiIgcng9IjgiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIxODAiIHk9IjI5MCIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5SRVNFVCAoTkYpPC90ZXh0PjxsaW5lIHgxPSIxODAiIHkxPSIzMDMiIHgyPSIxODAiIHkyPSIzMTAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSIyNjIiIHkxPSI5NSIgeDI9IjIzMCIgeTI9IjE1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtZGFzaGFycmF5PSI0LDMiLz48bGluZSB4MT0iMjMwIiB5MT0iMTUwIiB4Mj0iMjAwIiB5Mj0iMTcwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiIHN0cm9rZS1kYXNoYXJyYXk9IjQsMyIvPjx0ZXh0IHg9IjMwMCIgeT0iMTIwIiBmb250LXNpemU9IjEwIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPmFjdGlvbm5lPC90ZXh0Pjwvc3ZnPg==" width="380" alt="schema circuitA_relais_set_reset"/>

Ce schéma représente le principe de maintien (détaillé en Partie C). Le câblage exact dépend du relais utilisé.

### Attention

Le contact du relais ne doit pas être confondu avec la bobine :

-   La bobine est la partie électromagnétique.
-   Le contact est un interrupteur commandé mécaniquement.
-   Les deux parties sont électriquement isolées dans un relais
    classique.

------------------------------------------------------------------------

## 3.8 Partie C --- Construire une mémoire SET/RESET

### Principe fonctionnel

-   Appuyer sur `SET` active le relais.
-   Le contact auxiliaire maintient la bobine alimentée.
-   Relâcher `SET` ne désactive pas le relais.
-   Appuyer sur `RESET` coupe la boucle de maintien.
-   Le relais revient à l'état de repos.

### Schéma logique

<img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAzODAgMzQwIiB3aWR0aD0iMzgwIiBoZWlnaHQ9IjM0MCI+PGxpbmUgeDE9IjYwIiB5MT0iNDAiIHgyPSIzMjAiIHkyPSI0MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iMzUiIHk9IjQ0IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPis1IFY8L3RleHQ+PGxpbmUgeDE9IjYwIiB5MT0iMzEwIiB4Mj0iMzIwIiB5Mj0iMzEwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIzNSIgeT0iMzE0IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkdORDwvdGV4dD48bGluZSB4MT0iMTMwIiB5MT0iNDAiIHgyPSIxMzAiIHkyPSI3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iMTAzLjAiIHk9Ijc1LjAiIHdpZHRoPSI1NCIgaGVpZ2h0PSI0MCIgcng9IjgiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIxMzAiIHk9IjEwMCIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5TRVQ8L3RleHQ+PGxpbmUgeDE9IjEzMCIgeTE9IjExNSIgeDI9IjEzMCIgeTI9IjE1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjIzMCIgeTE9IjQwIiB4Mj0iMjMwIiB5Mj0iNzAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxyZWN0IHg9IjE5OC4wIiB5PSI3NS4wIiB3aWR0aD0iNjQiIGhlaWdodD0iNDAiIHJ4PSI4IiBmaWxsPSJ3aGl0ZSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iMjMwIiB5PSIxMDAiIGZvbnQtc2l6ZT0iMTIiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+Tk8gKHJlbGFpcyk8L3RleHQ+PGxpbmUgeDE9IjIzMCIgeTE9IjExNSIgeDI9IjIzMCIgeTI9IjE1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjEzMCIgeTE9IjE1MCIgeDI9IjIzMCIgeTI9IjE1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGNpcmNsZSBjeD0iMTgwIiBjeT0iMTUwIiByPSIzIiBmaWxsPSJibGFjayIvPjx0ZXh0IHg9IjE4MCIgeT0iMTY2IiBmb250LXNpemU9IjExIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPm7Fk3VkIEE8L3RleHQ+PGxpbmUgeDE9IjE4MCIgeTE9IjE1MCIgeDI9IjE4MCIgeTI9IjE3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iMTYwLjAiIHk9IjE3NS4wIiB3aWR0aD0iNDAiIGhlaWdodD0iNzAiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMTY1LjAiIHkxPSIxODUuMCIgeDI9IjE5NS4wIiB5Mj0iMTg1LjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMSIvPjxsaW5lIHgxPSIxNjUuMCIgeTE9IjIwMS42NjY2NjY2NjY2NjY2NiIgeDI9IjE5NS4wIiB5Mj0iMjAxLjY2NjY2NjY2NjY2NjY2IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjEiLz48bGluZSB4MT0iMTY1LjAiIHkxPSIyMTguMzMzMzMzMzMzMzMzMzQiIHgyPSIxOTUuMCIgeTI9IjIxOC4zMzMzMzMzMzMzMzMzNCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIxIi8+PGxpbmUgeDE9IjE2NS4wIiB5MT0iMjM1LjAiIHgyPSIxOTUuMCIgeTI9IjIzNS4wIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjEiLz48dGV4dCB4PSIyMTYuMCIgeT0iMjE1IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJzdGFydCI+Qm9iaW5lIHJlbGFpczwvdGV4dD48bGluZSB4MT0iMTgwIiB5MT0iMjQ1IiB4Mj0iMTgwIiB5Mj0iMjYwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48cmVjdCB4PSIxNDUuMCIgeT0iMjY3LjAiIHdpZHRoPSI3MCIgaGVpZ2h0PSIzNiIgcng9IjgiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIxODAiIHk9IjI5MCIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5SRVNFVCAoTkYpPC90ZXh0PjxsaW5lIHgxPSIxODAiIHkxPSIzMDMiIHgyPSIxODAiIHkyPSIzMTAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSIyNjIiIHkxPSI5NSIgeDI9IjIzMCIgeTI9IjE1MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtZGFzaGFycmF5PSI0LDMiLz48bGluZSB4MT0iMjMwIiB5MT0iMTUwIiB4Mj0iMjAwIiB5Mj0iMTcwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiIHN0cm9rZS1kYXNoYXJyYXk9IjQsMyIvPjx0ZXh0IHg9IjMwMCIgeT0iMTIwIiBmb250LXNpemU9IjEwIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPmFjdGlvbm5lPC90ZXh0Pjwvc3ZnPg==" width="340" alt="schema circuitA_relais_set_reset"/>

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

## 3.9 Partie D --- Mesures dynamiques

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

## 3.10 Partie E --- Commande par Arduino

### Objectif

Utiliser l'Arduino pour commander le relais sans alimenter directement
sa bobine depuis une sortie.

### Schéma de câblage

<img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCA0MjAgMzAwIiB3aWR0aD0iNDIwIiBoZWlnaHQ9IjMwMCI+PGxpbmUgeDE9IjYwIiB5MT0iNjAiIHgyPSIzMjAiIHkyPSI2MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iMzAiIHk9IjY0IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPis1IFY8L3RleHQ+PGxpbmUgeDE9IjYwIiB5MT0iMjYwIiB4Mj0iMzIwIiB5Mj0iMjYwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIzMCIgeT0iMjY0IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkdORDwvdGV4dD48bGluZSB4MT0iMTYwIiB5MT0iNjAiIHgyPSIxNjAiIHkyPSI5MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iMTQyLjAiIHk9Ijk1LjAiIHdpZHRoPSIzNiIgaGVpZ2h0PSI5MCIgZmlsbD0id2hpdGUiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSIxNDcuMCIgeTE9IjEwNS4wIiB4Mj0iMTczLjAiIHkyPSIxMDUuMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIxIi8+PGxpbmUgeDE9IjE0Ny4wIiB5MT0iMTI4LjMzMzMzMzMzMzMzMzM0IiB4Mj0iMTczLjAiIHkyPSIxMjguMzMzMzMzMzMzMzMzMzQiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMSIvPjxsaW5lIHgxPSIxNDcuMCIgeTE9IjE1MS42NjY2NjY2NjY2NjY2NiIgeDI9IjE3My4wIiB5Mj0iMTUxLjY2NjY2NjY2NjY2NjY2IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjEiLz48bGluZSB4MT0iMTQ3LjAiIHkxPSIxNzUuMCIgeDI9IjE3My4wIiB5Mj0iMTc1LjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMSIvPjx0ZXh0IHg9IjIxMCIgeT0iMTQ1IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJzdGFydCI+Qm9iaW5lIHJlbGFpczwvdGV4dD48bGluZSB4MT0iMTYwIiB5MT0iMTg1IiB4Mj0iMTYwIiB5Mj0iMjAwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMTYwIiB5MT0iNjAiIHgyPSIyNjAiIHkyPSI2MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjI2MCIgeTE9IjYwIiB4Mj0iMjYwIiB5Mj0iMTAwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48cG9seWdvbiBwb2ludHM9IjI1MCwxMzIgMjcwLDEzMiAyNjAsMTEwIiBmaWxsPSJibGFjayIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjI1MCIgeTE9IjEwOCIgeDI9IjI3MCIgeTI9IjEwOCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIzIi8+PHRleHQgeD0iMjk0IiB5PSIxMjAiIGZvbnQtc2l6ZT0iMTIiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+PC90ZXh0Pjx0ZXh0IHg9IjMwMCIgeT0iMTIwIiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJzdGFydCI+RCAocm91ZSBsaWJyZSk8L3RleHQ+PGxpbmUgeDE9IjI2MCIgeTE9IjE0MCIgeDI9IjI2MCIgeTI9IjIwMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjI2MCIgeTE9IjIwMCIgeDI9IjE2MCIgeTI9IjIwMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGNpcmNsZSBjeD0iMTYwIiBjeT0iMjAwIiByPSIzIiBmaWxsPSJibGFjayIvPjxjaXJjbGUgY3g9IjIxMCIgY3k9IjIyNSIgcj0iMTgiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMTc4IiB5MT0iMjI1IiB4Mj0iMjA0IiB5Mj0iMjI1IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMjA0IiB5MT0iMjE1IiB4Mj0iMjA0IiB5Mj0iMjM1IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMjA0IiB5MT0iMjE3IiB4Mj0iMjI0IiB5Mj0iMjAzIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMjI0IiB5MT0iMjAzIiB4Mj0iMjI0IiB5Mj0iMTg1IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMjA0IiB5MT0iMjMzIiB4Mj0iMjI0IiB5Mj0iMjQ3IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMjI0IiB5MT0iMjQ3IiB4Mj0iMjI0IiB5Mj0iMjY1IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48cG9seWdvbiBwb2ludHM9IjIyNCwyNDcgMjE1LDI0MCAyMTksMjUyIiBmaWxsPSJibGFjayIvPjx0ZXh0IHg9IjI0MCIgeT0iMTkzIiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkM8L3RleHQ+PHRleHQgeD0iMTcwIiB5PSIyMzAiIGZvbnQtc2l6ZT0iMTMiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+QjwvdGV4dD48dGV4dCB4PSIyNDAiIHk9IjI2MSIgZm9udC1zaXplPSIxMyIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5FPC90ZXh0Pjx0ZXh0IHg9IjIwNCIgeT0iMTczIiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPjJOMjIyMiAoTlBOKTwvdGV4dD48bGluZSB4MT0iMTYwIiB5MT0iMjAwIiB4Mj0iMjA0IiB5Mj0iMjE3IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMTYwIiB5MT0iMjI1IiB4Mj0iMTcwIiB5Mj0iMjI1IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMjI0IiB5MT0iMjMzIiB4Mj0iMjI0IiB5Mj0iMjYwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMjI0IiB5MT0iMjYwIiB4Mj0iMzIwIiB5Mj0iMjYwIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSI0MCIgeT0iMjI1IiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJzdGFydCI+QXJkdWlubyBEODwvdGV4dD48bGluZSB4MT0iNDAiIHkxPSIyMzIiIHgyPSI5MCIgeTI9IjIzMiIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iOTguMCIgeT0iMjIzLjAiIHdpZHRoPSI0NCIgaGVpZ2h0PSIxOCIgZmlsbD0id2hpdGUiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjEyMCIgeT0iMjE3LjAiIGZvbnQtc2l6ZT0iMTMiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+MSBrzqk8L3RleHQ+PGxpbmUgeDE9IjE0MiIgeTE9IjIzMiIgeDI9IjE3MCIgeTI9IjIyNSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PC9zdmc+" width="380" alt="schema circuitB_transistor_relais_arduino"/>

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

# 4. TP 2 --- Un octet électronique

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

## 4.7 Partie A --- Tester une bascule D

### Matériel

-   1 × 74HC74.
-   1 LED.
-   1 résistance de LED.
-   1 bouton DATA.
-   1 bouton CLOCK.
-   Résistances de rappel.
-   Alimentation 5 V.

### Schéma de principe

<img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCA0ODAgMzAwIiB3aWR0aD0iNDgwIiBoZWlnaHQ9IjMwMCI+PHJlY3QgeD0iMTkwIiB5PSI0MCIgd2lkdGg9IjExMCIgaGVpZ2h0PSIxODAiIGZpbGw9IndoaXRlIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIyNDUuMCIgeT0iMTM1LjAiIGZvbnQtc2l6ZT0iMTUiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSIgZm9udC13ZWlnaHQ9ImJvbGQiPjc0SEM3NDwvdGV4dD48bGluZSB4MT0iMTY0IiB5MT0iNjIuMCIgeDI9IjE5MCIgeTI9IjYyLjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjE2MCIgeT0iNjYuMCIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0iZW5kIj5EPC90ZXh0PjxsaW5lIHgxPSIxNjQiIHkxPSIxMDcuMzMzMzMzMzMzMzMzMzQiIHgyPSIxOTAiIHkyPSIxMDcuMzMzMzMzMzMzMzMzMzQiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjE2MCIgeT0iMTExLjMzMzMzMzMzMzMzMzM0IiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJlbmQiPkNMSzwvdGV4dD48bGluZSB4MT0iMTY0IiB5MT0iMTUyLjY2NjY2NjY2NjY2NjY5IiB4Mj0iMTkwIiB5Mj0iMTUyLjY2NjY2NjY2NjY2NjY5IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIxNjAiIHk9IjE1Ni42NjY2NjY2NjY2NjY2OSIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0iZW5kIj5QUkU8L3RleHQ+PGxpbmUgeDE9IjE2NCIgeTE9IjE5OC4wIiB4Mj0iMTkwIiB5Mj0iMTk4LjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjE2MCIgeT0iMjAyLjAiIGZvbnQtc2l6ZT0iMTIiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9ImVuZCI+Q0xSPC90ZXh0PjxsaW5lIHgxPSIzMDAiIHkxPSIxMzAuMCIgeDI9IjMyNiIgeTI9IjEzMC4wIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIzMzAiIHk9IjEzNC4wIiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJzdGFydCI+UTwvdGV4dD48bGluZSB4MT0iODAiIHkxPSI2Mi4wIiB4Mj0iMTY0IiB5Mj0iNjIuMCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHJlY3QgeD0iMjAuMCIgeT0iNDYuMCIgd2lkdGg9IjYwIiBoZWlnaHQ9IjMyIiByeD0iOCIgZmlsbD0id2hpdGUiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjUwIiB5PSI2Ny4wIiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkRBVEE8L3RleHQ+PGxpbmUgeDE9IjgwIiB5MT0iMTA3LjMzMzMzMzMzMzMzMzM0IiB4Mj0iMTY0IiB5Mj0iMTA3LjMzMzMzMzMzMzMzMzM0IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48cmVjdCB4PSIyMC4wIiB5PSI5MS4zMzMzMzMzMzMzMzMzNCIgd2lkdGg9IjYwIiBoZWlnaHQ9IjMyIiByeD0iOCIgZmlsbD0id2hpdGUiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjx0ZXh0IHg9IjUwIiB5PSIxMTIuMzMzMzMzMzMzMzMzMzQiIGZvbnQtc2l6ZT0iMTIiIGZvbnQtZmFtaWx5PSJBcmlhbCIgdGV4dC1hbmNob3I9Im1pZGRsZSI+Q0xPQ0s8L3RleHQ+PGxpbmUgeDE9IjIwIiB5MT0iMTUyLjY2NjY2NjY2NjY2NjY5IiB4Mj0iMTY0IiB5Mj0iMTUyLjY2NjY2NjY2NjY2NjY5IiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMjAiIHkxPSIxOTguMCIgeDI9IjE2NCIgeTI9IjE5OC4wIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48bGluZSB4MT0iMjAiIHkxPSIxNTIuNjY2NjY2NjY2NjY2NjkiIHgyPSIyMCIgeTI9IjE5OC4wIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48dGV4dCB4PSIxNSIgeT0iMTc1LjMzMzMzMzMzMzMzMzM0IiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJlbmQiPis1IFY8L3RleHQ+PGxpbmUgeDE9IjMyNiIgeTE9IjEzMC4wIiB4Mj0iMzY2IiB5Mj0iMTMwLjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxyZWN0IHg9IjM0Ni4wIiB5PSIxNjEuMCIgd2lkdGg9IjQwIiBoZWlnaHQ9IjE4IiBmaWxsPSJ3aGl0ZSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iNDA2LjAiIHk9IjE3MC4wIiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPjEga86pPC90ZXh0PjxsaW5lIHgxPSIzNjYiIHkxPSIxOTAuMCIgeDI9IjM2NiIgeTI9IjIyMC4wIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjIiLz48cG9seWdvbiBwb2ludHM9IjM1MSwyMzAuMCAzNTEsMjUwLjAgMzc0LDI0MC4wIiBmaWxsPSJ3aGl0ZSIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PGxpbmUgeDE9IjM3NCIgeTE9IjIyOC4wIiB4Mj0iMzc0IiB5Mj0iMjUyLjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMyIvPjxsaW5lIHgxPSIzNjgiIHkxPSIyMjQuMCIgeDI9IjM4MCIgeTI9IjIxMi4wIiBzdHJva2U9ImJsYWNrIiBzdHJva2Utd2lkdGg9IjEuNSIvPjxwb2x5Z29uIHBvaW50cz0iMzgwLDIxMi4wIDM3NCwyMTYuMCAzNzksMjIwLjAiIGZpbGw9ImJsYWNrIi8+PGxpbmUgeDE9IjM3NiIgeTE9IjIzMC4wIiB4Mj0iMzg4IiB5Mj0iMjE4LjAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMS41Ii8+PHBvbHlnb24gcG9pbnRzPSIzODgsMjE4LjAgMzgyLDIyMi4wIDM4NywyMjYuMCIgZmlsbD0iYmxhY2siLz48dGV4dCB4PSIzNjYiIHk9IjI2NC4wIiBmb250LXNpemU9IjEzIiBmb250LWZhbWlseT0iQXJpYWwiIHRleHQtYW5jaG9yPSJtaWRkbGUiPkxFRDwvdGV4dD48bGluZSB4MT0iMzY2IiB5MT0iMjY0LjAiIHgyPSIzNjYiIHkyPSIyNzAiIHN0cm9rZT0iYmxhY2siIHN0cm9rZS13aWR0aD0iMiIvPjxsaW5lIHgxPSI1MCIgeTE9IjI3MCIgeDI9IjM2NiIgeTI9IjI3MCIgc3Ryb2tlPSJibGFjayIgc3Ryb2tlLXdpZHRoPSIyIi8+PHRleHQgeD0iMzAiIHk9IjI3NCIgZm9udC1zaXplPSIxMyIgZm9udC1mYW1pbHk9IkFyaWFsIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIj5HTkQ8L3RleHQ+PC9zdmc+" width="380" alt="schema circuitC_bascule_D_test"/>

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

## 4.8 Partie B --- Construire un registre 8 bits

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

------------------------------------------------------------------------

## 4.10 Schéma de câblage Arduino --- écriture d'un octet

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

## 4.11 Code Arduino --- écrire un octet

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

## 4.12 Partie C --- Lire les sorties avec l'Arduino

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

## 4.13 Partie D --- Étudier les boutons et les rebonds

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

# 5. TP 3 --- Une mémoire collective de 64 bits

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

Les sorties du 74HC138 sont généralement **actives à l'état bas**. Il
faut donc prévoir une inversion logique ou utiliser directement cette
logique active-bas pour commander les entrées de sélection des
registres.

### Montage détaillé pas à pas (câblage du décodeur, sur la breadboard commune)

Brochage utile du 74HC138 (boîtier DIP-16) : broches 1-3 = A0, A1, A2 (adresse) ; broches 4-5 = E1, E2 (validation, actives basses) ; broche 6 = E3 (validation, active haute) ; broches 7 et 9 à 15 = Y7 à Y0 (sorties, actives basses) ; broche 8 = GND ; broche 16 = VCC.

1.  **Placer le 74HC138** sur la breadboard commune, à cheval sur la rainure centrale.
2.  **Alimenter le circuit** : broche 16 (VCC) vers +5 V, broche 8 (GND) vers 0 V, condensateur 100 nF entre les deux au plus près du boîtier.
3.  **Valider le décodeur en permanence** : relier E1 et E2 (broches 4 et 5) à GND, et E3 (broche 6) à +5 V. Sans cela, toutes les sorties restent inactives quelle que soit l'adresse.
4.  **Câbler les entrées d'adresse A0, A1, A2** (broches 1 à 3) vers les 3 broches Arduino choisies pour porter l'adresse (par exemple D11, D12, D13).
5.  **Repérer les 8 sorties Y0 à Y7** (attention à l'ordre des broches, qui n'est pas dans l'ordre naturel autour du boîtier : vérifier sur la datasheet du composant utilisé).
6.  **Câbler chaque sortie Yn vers l'entrée SELECT du groupe n** correspondant, via le fil de bus repéré prévu à cet effet (cf. tableau de répartition des adresses, §5.7).
7.  **Vérifier avec une LED témoin** avant de connecter les 8 groupes : brancher provisoirement une LED (avec résistance) entre une sortie Yn et le +5 V (puisque la sortie est active à l'état bas, la LED s'allume quand Yn est sélectionnée). Faire varier l'adresse depuis l'Arduino et vérifier qu'une seule LED s'allume à la fois, dans le bon ordre.

------------------------------------------------------------------------

## 5.9 Partie A --- Définir l'interface d'un groupe

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
| WRITE                       |
| READ_ENABLE                 |
| RESET                       |
| SELECT                      |
+-----------------------------+
```

### Règle d'intégration

Chaque groupe doit fournir :

-   Un registre 8 bits.
-   Une entrée WRITE.
-   Une entrée RESET.
-   Une entrée SELECT.
-   Une sortie de lecture désactivable.
-   Une documentation du brochage.

### Montage détaillé pas à pas (intégration collective, jour de l'assemblage)

Cette étape se déroule idéalement en une seule séance, tous les groupes présents, pour limiter le temps où le bus commun est à moitié câblé.

1.  **Chaque binôme apporte son registre déjà testé** (LED, DIP-switch, WRITE fonctionnels, testés en autonomie au TP2).
2.  **Le décodeur et les buffers de bus sont déjà installés** sur la breadboard commune, avec l'adresse pilotée par l'Arduino contrôleur (cf. §5.8).
3.  **Poser les 8 breadboards des groupes autour de la breadboard commune**, de préférence dans l'ordre des adresses (groupe 0 à groupe 7) pour limiter la longueur des fils et les croisements.
4.  **Raccorder en premier les alimentations** : VCC et GND de chaque groupe vers les rails de la breadboard commune (ou vers l'alimentation générale si elle est unique pour toute la classe).
5.  **Raccorder la ligne WRITE commune** de la breadboard commune vers l'entrée CLK/WRITE de chaque registre (une seule ligne, partagée par les 8 groupes : seul le registre sélectionné par le décodeur doit réellement en tenir compte, cf. §5.10 sur les portes ET de validation si l'architecture retenue l'exige).
6.  **Raccorder les 8 lignes DATA communes** (D0 à D7) vers les entrées/sorties correspondantes de chaque registre.
7.  **Raccorder la sortie SELECT (Yn) du décodeur** vers l'entrée SELECT du groupe n correspondant : une ligne différente pour chaque groupe, ce sont les seules lignes qui ne sont *pas* partagées.
8.  **Ne pas encore activer les sorties en mode lecture.** Avant de mettre le bus DATA en écriture partagée, vérifier qu'un seul registre à la fois a le droit de piloter le bus (via ses buffers 3 états commandés par SELECT), pour éviter le conflit décrit en §5.10.
9.  **Tester groupe par groupe, dans l'ordre des adresses** : depuis l'Arduino contrôleur, sélectionner l'adresse 0, écrire un octet de test, vérifier sur les LED du groupe 0 que la bonne valeur apparaît, puis relire cette valeur pour confirmer la cohérence, avant de passer à l'adresse 1.
10. **Une fois les 8 groupes validés individuellement**, exécuter le programme de test automatique complet (§5.16 ou équivalent) qui parcourt les 8 adresses.

------------------------------------------------------------------------

## 5.10 Partie B --- Comprendre les conflits de bus

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
                  READ_ENABLE
```

------------------------------------------------------------------------

## 5.11 Partie C --- Ajouter les buffers de lecture

Un 74HC244 ou un 74HC245 peut être utilisé pour isoler les sorties des
registres du bus commun.

### Principe

``` text
Registre 0 Q[7..0] ---> Buffer 0 ---+
                                    |
Registre 1 Q[7..0] ---> Buffer 1 ---+---- Bus DATA[7..0]
                                    |
Registre 2 Q[7..0] ---> Buffer 2 ---+
                                    |
Registre 3 Q[7..0] ---> Buffer 3 ---+
```

Un seul buffer doit être activé à la fois.

### Signal de lecture

``` text
READ_ENABLE = SELECT du registre sélectionné
```

Pour une architecture simple, on peut utiliser les sorties du décodeur
pour activer le buffer du registre sélectionné.

------------------------------------------------------------------------

## 5.12 Partie D --- Écriture dans un octet sélectionné

### Séquence d'écriture

1.  Placer l'adresse sur A2, A1 et A0.
2.  Placer la donnée sur DATA7 à DATA0.
3.  Activer WRITE.
4.  Générer un front d'horloge.
5.  Désactiver WRITE.
6.  Modifier éventuellement l'adresse et la donnée.

### Schéma temporel simplifié

``` text
Adresse  : ----[ adresse stable ]----------------
Donnée    : ----[ donnée stable ]-----------------
WRITE     : __________/‾‾‾\______________________
                     ^
                  capture
```

### Questions

1.  Pourquoi l'adresse doit-elle être stable pendant l'écriture ?
2.  Pourquoi la donnée doit-elle être stable avant le front ?
3.  Que se passe-t-il si deux SELECT sont actifs ?
4.  Quelle différence entre sélectionner un registre et lire un registre
    ?

------------------------------------------------------------------------

## 5.13 Partie E --- Lire un octet sélectionné

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

## 5.15 Code Arduino --- fonctions d'adressage

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

## 5.16 Code Arduino --- lecture du bus

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

## 5.18 Partie F --- Défi collectif

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

## 5.19 Partie G --- Diagnostic de pannes

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

------------------------------------------------------------------------

## 5.20 Partie H --- Extension : mémoire de 256 bits

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
| **74HC138** | Circuit intégré numérique "décodeur 3 vers 8" : à partir de 3 bits d'adresse, il active une seule sortie parmi 8. | Sélectionne, parmi les 8 groupes/registres de la classe, celui qui doit être lu ou écrit à un instant donné (adressage mémoire). |
| **74HC244 / 74HC245** | Circuit intégré "buffer" à sorties trois états : chaque sortie peut valoir 0, 1, ou être totalement déconnectée électriquement ("haute impédance"). | Permet à plusieurs registres de partager les mêmes fils de bus DATA sans se marcher dessus : seul le registre sélectionné "prend la parole" sur le bus, les autres se mettent en haute impédance. |
| **DIP-switch 8 positions** | Bloc de 8 petits interrupteurs indépendants, au pas standard des breadboards. | Sert à fixer manuellement les 8 bits d'un octet avant de les écrire dans le registre (entrée de données D0 à D7). |
| **Bouton-poussoir** | Interrupteur momentané : fermé uniquement pendant l'appui. | Génère un front (SET, RESET, CLOCK/WRITE) au moment précis où l'utilisateur appuie. |
| **Breadboard** (plaque d'essai) | Support de prototypage sans soudure, avec des rangées de trous électriquement reliés par groupes. | Permet de câbler et modifier rapidement tous les montages du projet sans souder. |
| **Arduino** | Carte à microcontrôleur programmable, avec des broches d'entrée/sortie numériques et analogiques. | Génère les signaux d'adresse, de WRITE et de lecture du bus ; remplace à terme les boutons manuels pour piloter le système de façon automatique et reproductible. |
| **Multimètre** | Appareil de mesure polyvalent (tension, courant, résistance, continuité). | Vérifie le câblage avant mise sous tension, mesure la résistance de la bobine, contrôle les tensions du montage. |
| **Oscilloscope** | Appareil qui affiche l'évolution d'une tension dans le temps. | Observe les temps de commutation du relais, les rebonds d'un bouton, ou la forme exacte d'un signal d'horloge. |
| **Résistance de rappel (pull-up/pull-down)** | Résistance (souvent 10 kΩ) qui fixe un état par défaut (haut ou bas) à une entrée logique quand rien d'autre ne la pilote. | Évite qu'une entrée CMOS (D, CLK, PRE, CLR...) reste "flottante", ce qui provoquerait un comportement imprévisible. |
