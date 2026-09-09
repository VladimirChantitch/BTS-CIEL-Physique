# Physique — BTS CIEL

Tous les supports de cours, TD et annales sont regroupés dans ce dépôt.

**Adresse du dépôt :** https://github.com/VladimirChantitch/BTS-CIEL-Physique

---

## 1. Récupérer les documents

### Option A — Sans rien installer (le plus simple)

1. Ouvrez le lien ci-dessus dans votre navigateur.
2. Cliquez sur le bouton vert **`Code`**, puis sur **`Download ZIP`**.
3. Décompressez l'archive où vous voulez.

Aucun compte GitHub n'est nécessaire, le dépôt est public.

> Inconvénient : pour avoir les mises à jour, il faut retélécharger l'archive complète à chaque fois.

### Option B — Avec Git (recommandé)

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

Deux dossiers vous concernent :

| Dossier | Contenu |
|---|---|
| `BTS1/` | Tous les supports de **première année** : cours, TD et documents de séance, classés par chapitre. |
| `BTS2/` | Tous les supports de **deuxième année**, organisés de la même façon. |

Allez directement dans celui qui correspond à votre année. Les autres fichiers présents à la racine du dépôt ne vous sont pas destinés.

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
