# Procès-verbal de recette

<div style="font-size: 9.5pt; line-height: 1.35;">

**Lot de cartes Arduino Uno : contrôle de réception avant mise à disposition pour les travaux pratiques**

| Référence | PV-REC-ARD-.......... | Version | ........ |
|---|---|---|---|
| Date | ...... / ...... / ............ | Pages | 4 |
| Émetteur | Service maintenance ; binôme : .......................................... | Destinataire | Responsable du parc matériel de l'établissement |
| Objet | Recette d'un lot de cartes Arduino Uno | Diffusion | Responsable du parc ; professeur ; archives du service |

### 1. Périmètre

| Rubrique | Renseignement |
|---|---|
| Lot concerné | ................................................................................................ |
| Nombre de cartes confiées au binôme | ............ |
| Nombre de cartes testées | ............ |
| Identifiants des cartes testées | ................................................................................................ |
| Cartes exclues de la recette (identifiant, motif) | ................................................................................................ |

### 2. Référentiel

Critères d'acceptation : tableau des critères de verdict du sujet du TP 2.3, rappelé ci-dessous. Documents de référence : sujet du TP 2.3 ; fiche technique de l'ATmega328P (Microchip, DS40002061B) ; programmes `autotest_uno.ino` et `horloge_uno.py`.

| Verdict | Critères d'acceptation |
|---|---|
| **BONNE** | port COM, téléversement et LED L conformes ; toutes les broches OK (D13 « non concluant » accepté) ; CAN OK ; EEPROM sans erreur |
| **BONNE AVEC RÉSERVE** | 1 à 3 broches HS ou reliées par un pont, ou LED L hors service ; tout le reste conforme |
| **HORS SERVICE** | pas d'alimentation, pas de port COM ou téléversement impossible avec un câble et un port connus bons ; ou 4 broches HS ou plus ; ou erreur EEPROM ; ou CAN défaillant confirmé sur un second port |

Codes de résultat : **OK** conforme au résultat attendu ; **KO** non conforme ; **NC** non concluant ; **NR** non réalisé (motif dans les observations).

### 3. Moyens et conditions d'essai

| Moyen ou condition | Valeur | Moyen ou condition | Valeur |
|---|---|---|---|
| Poste (PC) | ........................ | Système d'exploitation | ........................ |
| Version de l'IDE Arduino | ........................ | Carte choisie dans l'IDE | Arduino Uno (AVR) |
| Programme d'autotest | `autotest_uno.ino`, version du ............ | Script d'horloge | `horloge_uno.py`, durée de mesure ........ s |
| Port USB P1 | ........................ | Port USB P2 | ........................ |
| Câble USB (repère) | ........................ | Débit du moniteur série | 115 200 bauds |
| Début des essais | ...... / ...... à ...... h ...... | Fin des essais | ...... / ...... à ...... h ...... |
| Température de la salle | ........ °C (si connue) | Opérateurs | ........................ |

### 4. Cahier de recette

<table style="width: 100%;">
<thead>
<tr><th>N°</th><th>Cas de test</th><th>Objectif</th><th>Résultat attendu</th></tr>
</thead>
<tbody>
<tr><td style="white-space: nowrap;">CT-01</td><td>Identification et état visuel</td><td>identifier la carte de façon unique, repérer les défauts visibles</td><td>identifiant noté et étiquette posée ; puce USB et oscillateur notés ; aucun composant arraché ou brûlé, aucune broche tordue</td></tr>
<tr><td style="white-space: nowrap;">CT-02</td><td>Alimentation et port COM</td><td>vérifier l'alimentation et l'interface USB</td><td>LED ON allumée ; nouveau port COM ; VID:PID relevé</td></tr>
<tr><td style="white-space: nowrap;">CT-03</td><td>Téléversement</td><td>vérifier la programmation de l'ATmega328P</td><td>téléversement sans erreur ; programme exécuté (nouveau rythme de la LED L ou rapport affiché)</td></tr>
<tr><td style="white-space: nowrap;">CT-04</td><td>Broches numériques</td><td>détecter une broche reliée à la masse, détruite ou en pont</td><td>toutes les broches OK ; D13 « NON CONCLUANT » accepté (code NC)</td></tr>
<tr><td style="white-space: nowrap;">CT-05</td><td>CAN et voies internes</td><td>vérifier le convertisseur analogique numérique</td><td>A0 à A5 : N ≥ 1000 avec rappel, N ≤ 20 en sortie à LOW ; masse : N ≤ 5 ; référence : N entre 170 et 310</td></tr>
<tr><td style="white-space: nowrap;">CT-06</td><td>EEPROM</td><td>vérifier la mémoire non volatile</td><td>0 erreur</td></tr>
<tr><td style="white-space: nowrap;">CT-07</td><td>LED L</td><td>vérifier le voyant de la broche D13</td><td>LED L allumée en phase 5 (vive ou faible lueur selon le modèle) et clignotante en mode horloge</td></tr>
<tr><td style="white-space: nowrap;">CT-08</td><td>Tension d'alimentation estimée</td><td>estimer Vcc avec la référence interne</td><td>Vcc estimée entre 4,3 et 5,8 V (plage plausible sans étalonnage) ; résultat de la première carte écrit avec son incertitude élargie</td></tr>
<tr><td style="white-space: nowrap;">CT-09</td><td>Dérive d'horloge</td><td>mesurer l'écart de fréquence de l'oscillateur</td><td>dérive ≤ 5 000 ppm en valeur absolue (résonateur) ou ≤ 100 ppm (quartz) ; résultat écrit avec son incertitude élargie</td></tr>
</tbody>
</table>

### 5. Résultats par carte

<table style="font-size: 9.5pt;">
<thead>
<tr><th>Carte</th><th style="white-space: nowrap; padding: 4px 3px;">CT-01</th><th style="white-space: nowrap; padding: 4px 3px;">CT-02</th><th style="white-space: nowrap; padding: 4px 3px;">CT-03</th><th style="white-space: nowrap; padding: 4px 3px;">CT-04</th><th style="white-space: nowrap; padding: 4px 3px;">CT-05</th><th style="white-space: nowrap; padding: 4px 3px;">CT-06</th><th style="white-space: nowrap; padding: 4px 3px;">CT-07</th><th style="white-space: nowrap; padding: 4px 3px;">CT-08</th><th style="white-space: nowrap; padding: 4px 3px;">CT-09</th><th>Verdict</th><th>Observations, n° de fiche d'anomalie</th></tr>
</thead>
<tbody>
<tr><td>&nbsp;</td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>
<tr><td>&nbsp;</td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>
<tr><td>&nbsp;</td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>
<tr><td>&nbsp;</td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>
<tr><td>&nbsp;</td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>
<tr><td>&nbsp;</td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>
<tr><td>&nbsp;</td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>
</tbody>
</table>

**Mesures par carte**

| Carte | Puce USB | Oscillateur (R ou Q) | N moyen de la référence | Vcc estimée (V) | Dérive (ppm) | U sur la dérive (ppm, k = 2) |
|---|---|---|---|---|---|---|
| &nbsp; | | | | | | |
| &nbsp; | | | | | | |
| &nbsp; | | | | | | |
| &nbsp; | | | | | | |
| &nbsp; | | | | | | |
| &nbsp; | | | | | | |
| &nbsp; | | | | | | |

### 6. Fiches d'anomalie

Une fiche par carte dont au moins un cas de test est KO : dupliquer ce modèle autant que nécessaire.

**Fiche d'anomalie n° ......**

| Rubrique | Renseignement |
|---|---|
| Carte (identifiant) | ............................ |
| Cas de test en échec | CT-...... |
| Constat | ................................................................................................ |
| Cause probable (arbre de diagnostic) | ................................................................................................ |
| Conséquence (broches ou fonctions inutilisables) | ................................................................................................ |
| Action décidée | ☐ réserve (broches à éviter : ..................)  ☐ réparation (par : ..................)  ☐ mise au rebut (filière DEEE) |
| Étiquette posée ; rédigée par, le | ☐ oui ; ........................................ , le ...... / ...... |

### 7. Synthèse chiffrée

**Cartes par verdict**

| Cartes | BONNE | BONNE AVEC RÉSERVE | HORS SERVICE | Total testé | Proportion HORS SERVICE (%) |
|---|---|---|---|---|---|
| du binôme | | | | | |
| du lot de la classe | | | | | |

**Résultats de mesure**, écrits selon les règles du chapitre 2 : valeur, incertitude élargie arrondie à 1 ou 2 chiffres significatifs, valeur arrondie au même rang, unité, facteur d'élargissement k, puis conformité au critère. Pour une moyenne sur n cartes : $U = 2\,s/\sqrt{n}$ (type A, k = 2).

| Grandeur | Résultat : valeur ± U (k = 2) | Critère ou référence | Conformité |
|---|---|---|---|
| Tension d'alimentation, carte n° ......, port P1 | ( ........ ± ........ ) V | 4,65 à 5,25 V sur la carte (USB : 5 V ± 5 % au connecteur, moins les chutes) | ☐ compatible  ☐ non compatible |
| Écart relatif de Vcc entre P2 et P1, même carte | ( ........ ± ........ ) % | écart nul | ☐ significatif  ☐ non significatif |
| Dérive d'horloge, carte n° ...... | ( ........ ± ........ ) ppm | ≤ 5 000 ppm (résonateur) ; ≤ 100 ppm (quartz) | ☐ conforme  ☐ non conforme |
| Vcc estimée, moyenne du lot (n = ......, s = ........ V) | ( ........ ± ........ ) V | référence interne de 1,0 à 1,2 V selon les puces | ☐ dispersion cohérente  ☐ carte à écarter |
| Dérive moyenne des cartes à quartz (n = ......) | ( ........ ± ........ ) ppm | ≤ 100 ppm | ☐ conforme  ☐ non conforme |
| Dérive moyenne des cartes à résonateur (n = ......) | ( ........ ± ........ ) ppm | ≤ 5 000 ppm | ☐ conforme  ☐ non conforme |

### 8. Décision de recette

☐ **Recette prononcée** : toutes les cartes testées sont BONNES.

☐ **Recette prononcée avec réserves** : les cartes BONNES AVEC RÉSERVE ou HORS SERVICE sont listées ci-dessous.

☐ **Recette refusée** ; motif : ................................................................................................

<table style="width: 100%;">
<thead>
<tr><th>N°</th><th>Carte(s)</th><th>Réserve</th><th>Action et responsable</th><th>Échéance</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>&nbsp;</td><td>&nbsp;</td><td>&nbsp;</td><td>&nbsp;</td></tr>
<tr><td>2</td><td>&nbsp;</td><td>&nbsp;</td><td>&nbsp;</td><td>&nbsp;</td></tr>
<tr><td>3</td><td>&nbsp;</td><td>&nbsp;</td><td>&nbsp;</td><td>&nbsp;</td></tr>
</tbody>
</table>

Recommandations : ................................................................................................................................

### 9. Visas

<table style="width: 100%;">
<thead>
<tr><th>Rôle</th><th>Nom</th><th>Fonction</th><th>Date</th><th>Visa</th></tr>
</thead>
<tbody>
<tr><td>Réalisé par</td><td>&nbsp;</td><td>techniciens de maintenance (binôme)</td><td>&nbsp;</td><td>&nbsp;</td></tr>
<tr><td>Vérifié par</td><td>&nbsp;</td><td>professeur</td><td>&nbsp;</td><td>&nbsp;</td></tr>
<tr><td>Accepté par</td><td>&nbsp;</td><td>responsable du parc matériel</td><td>&nbsp;</td><td>&nbsp;</td></tr>
</tbody>
</table>

</div>
