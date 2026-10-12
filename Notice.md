# Physique : BTS CIEL

Tous les supports de cours, TD et annales sont regroupés dans ce dépôt.

**Adresse du dépôt :** https://github.com/VladimirChantitch/BTS-CIEL-Physique

---

## 1. Récupérer les documents

### Option A : Sans rien installer (le plus simple)

1. Ouvrez le lien ci-dessus dans votre navigateur.
2. Cliquez sur le bouton vert **`Code`**, puis sur **`Download ZIP`**.
3. Décompressez l'archive où vous voulez.

Aucun compte GitHub n'est nécessaire, le dépôt est public.

> Inconvénient : pour avoir les mises à jour, il faut retélécharger l'archive complète à chaque fois.

### Option B : Avec Git (recommandé)

Installez Git une seule fois :

- **Windows** : https://git-scm.com/download/win
- **macOS** : `brew install git` (ou installez les *Xcode Command Line Tools*)
- **Linux** : `sudo apt install git`

Puis, dans un terminal, placez-vous dans le dossier où vous voulez ranger le cours et tapez :

```bash
git clone https://github.com/VladimirChantitch/BTS-CIEL-Physique.git
cd BTS-CIEL-Physique
```

Un dossier `BTS-CIEL-Physique` est créé avec l'intégralité des documents.

---

## 2. Mettre à jour votre copie

Le dépôt est complété au fil de l'année (nouveaux chapitres, corrigés, annales). Pour récupérer les nouveautés, ouvrez un terminal **dans le dossier du cours** et tapez :

```bash
git pull
```

C'est tout. Seuls les fichiers modifiés ou ajoutés sont téléchargés, prenez donc l'habitude de lancer cette commande avant chaque séance.

---

## 3. Organisation des dossiers

**Les BTS1 et les BTS2 utilisent les mêmes supports.** Tout se trouve dans le dossier `Supports_BTS1_BTS2/` :

| Élément | Contenu |
|---|---|
| `Recueil_Cours_BTS_CIEL_Physique` | Le cours complet, chapitre par chapitre |
| `Recueil_TD_BTS_CIEL_Physique` | Les exercices, les annales et leurs corrigés |
| `Recueil_TP_BTS_CIEL_Physique` | Les énoncés de TP |
| `Slides/` | Les diaporamas projetés en séance |

Chaque partie est marquée **BTS1**, **BTS2** ou **BTS1 · BTS2** selon l'année où elle est traitée. Les BTS2 retrouvent donc les notions de première année, qui sont rappelées puis approfondies.

Les QCM sont projetés en séance sur vos téléphones. Après la correction, chaque QCM et chaque corrigé de devoir est déposé, chiffré, dans le dossier `Coffre/` : ouvrez `Coffre/index.html` et saisissez la clé donnée en cours.

Le dossier `SujetsExposer/` contient les sujets d'exposés. Les autres dossiers ne vous sont pas destinés.

### À propos des fichiers `.md`

Une partie des documents est au format **Markdown** (`.md`). C'est du texte brut, lisible tel quel dans n'importe quel éditeur, mais il s'affiche bien plus confortablement :

- **directement sur GitHub** : cliquez simplement sur le fichier depuis le site, il est mis en forme automatiquement ;
- dans **Visual Studio Code** avec l'aperçu (`Ctrl` + `Maj` + `V`) ;
- dans **Obsidian**, **Typora** ou tout autre éditeur Markdown.

---

## 4. Quelques conseils

- **Ne travaillez pas directement dans le dossier cloné.** Si vous modifiez un fichier du dépôt, le prochain `git pull` risque d'échouer à cause d'un conflit. Copiez le fichier ailleurs avant de l'annoter.
- Rangez vos propres notes dans un dossier séparé, en dehors de `BTS-CIEL-Physique`.
- En cas de blocage (`git pull` qui refuse de s'exécuter, dossier corrompu…), la solution la plus rapide est de supprimer le dossier et de refaire un `git clone`. Vous ne perdrez rien tant que vos notes personnelles sont ailleurs.

---

## 5. Signaler une erreur

Coquille, lien mort, exercice sans corrigé ? Signalez-le en cours, ou ouvrez un *ticket* dans l'onglet **Issues** du dépôt si vous avez un compte GitHub.

---

## 6. Utiliser le coffre des corrigés

Les corrigés des devoirs et les QCM corrigés sont déposés dans le dossier `Coffre/`, **chiffrés**. Ils deviennent lisibles avec une **clé**, donnée en cours après la correction.

**Ouvrir un corrigé**

1. Faites un `git pull` (ou retéléchargez l'archive) pour avoir les derniers corrigés.
2. Ouvrez le fichier `Coffre/index.html` dans votre navigateur (double-clic). Aucune connexion ni installation n'est nécessaire.
3. Repérez le corrigé voulu. La liste déroulante en haut permet de n'afficher que votre niveau (BTS1 ou BTS2).
4. Tapez la clé donnée par le professeur, de la forme `XXXX-XXXX-XXXX-XXXX`, puis cliquez sur **Déverrouiller**. Les majuscules, les tirets et les confusions entre O et 0, ou entre I, L et 1, n'ont pas d'importance.
5. Cliquez sur **Ouvrir** pour l'afficher, ou sur **Télécharger** pour l'enregistrer.

**Garder ses clés**

- Une clé valide est retenue par votre navigateur : la prochaine fois, le corrigé s'ouvre directement.
- Pour retrouver vos clés sur un autre ordinateur ou un autre navigateur, cliquez sur **Sauvegarder vos clés dans un fichier**, puis, sur l'autre poste, sur **Recharger un trousseau sauvegardé**.

**Sécurité :** le déchiffrement se fait entièrement dans votre navigateur. Rien n'est envoyé sur Internet, et la clé n'est jamais transmise.

> **Vous n'êtes pas étudiant de la formation actuellement ?** Les clés ne sont communiquées qu'aux étudiants en cours d'année. Si vous souhaitez accéder au contenu du coffre (ancien étudiant, enseignant, formateur), contactez l'auteur du dépôt, Vladimir Chantitch, via son profil GitHub ou en ouvrant un ticket dans l'onglet **Issues**.
