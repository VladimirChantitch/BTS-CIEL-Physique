# BTS CIEL 2 — Physique
## Corrigés des QCM (version prof, avec explications)

Ce document rassemble les réponses et explications de tous les QCM du Recueil de TD. Il n'est pas destiné aux étudiants.

---

## Partie 1 — QCM diagnostique (état des lieux)

### A. Électricité de base

**1. R = 100 Ω, I = 50 mA. U = ? → Réponse : 5 V**
U = R×I = 100 × 0,050 = 5 V. Piège classique : oublier de convertir 50 mA en 0,050 A avant de multiplier.

**2. R1 = 10 Ω, R2 = 20 Ω en série. R_éq = ? → Réponse : 30 Ω**
En série, les résistances s'additionnent : R_éq = R1 + R2 = 30 Ω.

**3. R1 = 10 Ω, R2 = 10 Ω en parallèle. R_éq = ? → Réponse : 5 Ω**
Deux résistances égales R en parallèle donnent R_éq = R/2 = 5 Ω. La résistance équivalente en parallèle est toujours plus petite que la plus petite des deux résistances.

**4. La loi des nœuds traduit : → Réponse : la conservation de la charge**
Le courant représente un débit de charges électriques ; ce qui entre dans un nœud doit en ressortir intégralement, aucune charge ne pouvant s'accumuler en un point du circuit.

**5. Puissance sous 12 V, 0,5 A → Réponse : 6 W**
P = U×I = 12 × 0,5 = 6 W.

**6. Diviseur de tension R1 (haut)/R2 (bas), alim E : U(R2) = ? → Réponse : E·R2/(R1+R2)**
La tension se répartit proportionnellement à la résistance de chaque élément ; celle qui nous intéresse (R2) est au numérateur.

### B. Mesures et incertitudes

**7. L'incertitude-type traduit : → Réponse : le doute raisonnable sur la valeur vraie**
Ce n'est ni une erreur connue avec exactitude (on ne connaît jamais l'erreur réelle), ni seulement la précision de l'appareil (il existe aussi une composante statistique).

**8. Multimètre affichant 4,52 V, résolution 0,01 V → Réponse : U = (4,52 ± 0,01) V**
Un résultat de mesure doit toujours être accompagné de son incertitude ; ici, la résolution de lecture donne directement l'ordre de grandeur du doute.

**9. L'incertitude-type de type A se calcule à partir de : → Réponse : l'écart-type de la série et n**
u_A = s/√n : c'est une approche statistique, qui nécessite plusieurs mesures répétées (contrairement au type B, basé sur la notice constructeur).

**10. x = (5,0 ± 0,3), x_réf = 5,6 : compatible ? → Réponse : non**
|x̄ − x_réf| = |5,0 − 5,6| = 0,6. Comme 0,6 > 0,3 (l'incertitude), l'écart dépasse l'incertitude : la mesure n'est **pas compatible** avec la valeur de référence.

**11. Nombre de chiffres significatifs à garder pour une incertitude : → Réponse : 1-2**
On arrondit toujours l'incertitude à 1, exceptionnellement 2 chiffres significatifs, puis on aligne la valeur moyenne sur la même décimale.

### C. Ondes

**12. Fréquence d'un signal T = 2 ms → Réponse : 500 Hz**
f = 1/T = 1/0,002 = 500 Hz.

**13. Relation entre v, λ, f → Réponse : v = λ·f**
C'est la relation fondamentale de propagation : la distance parcourue en une période (λ) divisée par la durée de cette période (T=1/f) donne la vitesse, soit v = λ×f.

**14. Oscillo : période = 4 div, balayage 0,5 ms/div. f = ? → Réponse : 500 Hz**
T = 4 × 0,5 ms = 2 ms, donc f = 1/T = 500 Hz.

**15. Célérité du son dans l'air → Réponse : 340 m/s**
Valeur à connaître par cœur ; 3.10⁸ m/s est la célérité de la lumière (piège fréquent entre les deux valeurs).

**16. Deux signaux "en phase" quand : → Réponse : leurs maximums sont simultanés**
C'est la définition même de deux signaux en phase : ils évoluent de façon synchronisée.

### D. Bonus — acquis de 1ʳᵉ année

**17. Tension de seuil d'une diode au silicium → Réponse : 0,6-0,7 V**
Valeur à connaître par cœur pour le silicium (le germanium serait plutôt autour de 0,3 V, mais ce n'est pas au programme ici).

**18. Dans une boucle fermée, l'écart est : → Réponse : consigne − mesure retournée**
C'est le signal qui pilote la correction : plus l'écart est grand, plus la correction doit être importante.

**19. Un système en boucle ouverte, contrairement au bouclé : → Réponse : ne tient pas compte de la sortie réelle**
C'est précisément la différence entre les deux architectures : la boucle ouverte n'a pas de retour d'information sur le résultat obtenu.

**20. Le spectre électromagnétique classe les ondes selon : → Réponse : la fréquence (ou la longueur d'onde)**
Radio, micro-ondes, infrarouge, visible, UV, rayons X, rayons gamma : ce classement se fait uniquement sur la fréquence/longueur d'onde, pas sur la puissance ni l'origine.

---

## Partie 1 — QCM de validation (après les rappels)

**1. R = 220 Ω, I = 20 mA → Réponse : 4,4 V**
U = 220 × 0,020 = 4,4 V.

**2. R1 = 15 Ω, R2 = 5 Ω en série → Réponse : 20 Ω**
Addition directe : 15 + 5 = 20 Ω.

**3. R1 = 15 Ω, R2 = 5 Ω en parallèle → Réponse : 3,75 Ω**
1/R_éq = 1/15 + 1/5 = 1/15 + 3/15 = 4/15, donc R_éq = 15/4 = 3,75 Ω.

**4. Loi des mailles : la somme des tensions sur une maille fermée est… → Réponse : nulle**
C'est la définition de la loi des mailles (en tenant compte des signes selon le sens de parcours choisi).

**5. P = U²/R, U = 9 V, R = 27 Ω → Réponse : 3 W**
P = 9²/27 = 81/27 = 3 W.

**6. Série de 6 mesures, s = 0,12 → u_A ≈ ? Réponse : 0,049**
u_A = s/√n = 0,12/√6 ≈ 0,049.

**7. Résolution 0,1 unité → u_B ≈ ? Réponse : 0,029**
u_B = résolution/√12 = 0,1/√12 ≈ 0,029.

**8. x̄ = 12,4, U(x) = 0,3 → Réponse : (12,4 ± 0,3)**
Format standard d'un résultat de mesure, avec l'incertitude déjà correctement arrondie à un chiffre significatif et la moyenne alignée sur la même décimale.

**9. x̄ = 8,0 ± 0,4, x_réf = 9,0 → Réponse : non**
|8,0 − 9,0| = 1,0. Comme 1,0 > 0,4 (l'incertitude), l'écart dépasse largement l'incertitude : la mesure n'est **pas compatible** avec la valeur de référence. *(Correction : la version précédente du corrigé indiquait par erreur "oui" — la bonne réponse est "non".)*

**10. Composition quadratique de 3 % et 4 % → Réponse : 5 %**
√(3² + 4²) = √(9+16) = √25 = 5 %. C'est le classique triplet 3-4-5, pratique à retenir.

**11. T = 5 ms ⇒ f = ? Réponse : 200 Hz**
f = 1/0,005 = 200 Hz.

**12. λ = 2 m, f = 170 Hz ⇒ v ≈ ? Réponse : 340 m/s**
v = λ×f = 2 × 170 = 340 m/s (cohérent avec la célérité du son dans l'air, indice pour vérifier la plausibilité du résultat).

**13. Base de temps 1 ms/div, période sur 5 div → Réponse : 200 Hz**
T = 5 × 1 ms = 5 ms, donc f = 1/0,005 = 200 Hz.

**14. Opposition de phase = déphasage de… Réponse : 180°**
Par définition, l'opposition de phase correspond à un décalage d'une demi-période, soit 180°.

**15. Célérité de la lumière dans le vide ≈ Réponse : 3.10⁸ m/s**
Valeur de référence à connaître par cœur.

---

## Partie 5 — QCM puissances, décibels, atténuation et gains

**1. Formule du décibel pour un rapport de puissances → Réponse : A = 10 log₁₀(P₂/P₁)**
Le facteur 10 s'applique aux puissances ; le facteur 20 (vu en Q5) s'applique aux tensions, car P ∝ U².

**2. Rapport de puissance ×2 → Réponse : +3 dB**
10×log₁₀(2) ≈ 3,01 dB, arrondi à +3 dB. Valeur repère à connaître par cœur.

**3. Perte de −3 dB → Réponse : ÷2**
C'est l'inverse de la question précédente : −3 dB correspond à diviser la puissance par 2.

**4. Rapport de puissance ×100 → Réponse : +20 dB**
10×log₁₀(100) = 10×2 = 20 dB.

**5. Formule pour des tensions à impédances égales → Réponse : A = 20 log₁₀(U₂/U₁)**
Comme P ∝ U², le logarithme du carré fait sortir un facteur 2, d'où le 20 au lieu de 10.

**6. Cascade +6 dB et −2 dB → Réponse : +4 dB**
En dB, les gains/pertes s'additionnent directement : 6 + (−2) = +4 dB.

**7. 0 dBm correspond à → Réponse : 1 mW**
Par définition, le dBm est une puissance rapportée à 1 mW ; 0 dBm est donc exactement la référence, soit 1 mW.

**8. +10 dBm correspond à → Réponse : 10 mW**
P = 1 mW × 10^(10/10) = 1 mW × 10 = 10 mW.

**9. −20 dBm correspond à → Réponse : 0,01 mW**
P = 1 mW × 10^(−20/10) = 1 mW × 10⁻² = 0,01 mW.

**10. Le dB est-il une unité absolue de puissance ? → Réponse : Faux**
Le dB est un rapport sans dimension entre deux grandeurs ; seul le dBm (référencé à 1 mW) est une puissance absolue.

**11. −5 dBm à travers +15 dB puis −3 dB → Réponse : +7 dBm**
Les gains en dB s'ajoutent directement à un niveau en dBm : −5 + 15 − 3 = +7 dBm.

**12. Valeur efficace d'un signal sinusoïdal d'amplitude U_max → Réponse : U_max/√2**
C'est la définition de la valeur efficace (RMS) d'un signal sinusoïdal pur, à ne pas confondre avec U_max/2 (qui serait la valeur moyenne d'un signal redressé simple alternance, notion différente).

---

## Note pédagogique

La question 9 du QCM de validation contenait une erreur dans une version précédente du corrigé (réponse "oui" au lieu de "non") — elle est corrigée ci-dessus. Plus généralement, les questions de compatibilité (« x̄ ± U est-il compatible avec x_réf ? ») sont un point sur lequel les étudiants se trompent facilement de sens : un rappel visuel (intervalle de confiance sur un axe gradué, avec x_réf positionné dedans ou en dehors) est recommandé avant de les traiter en classe.
