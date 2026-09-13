# 44 sujets d'exposés : Physique x Réseaux / Cybersécurité
### BTS CIEL : 1re et 2e année

**Principe :** chaque sujet part d'un article (scientifique ou de vulgarisation) et oblige l'étudiant à expliquer **un phénomène physique** puis **sa conséquence sur un réseau ou sur la sécurité d'un système**.

**Niveaux indiqués :**
- 🟢 **BTS1** : physique de base (ondes, optique géométrique, électricité, thermique). Exposé de **10 minutes**, **5 diapositives**.
- 🟡 **BTS2** : modulation, électromagnétisme, traitement du signal, semi-conducteurs, quantique introductive. Exposé de **15 minutes**, **7 diapositives**.

> Quand un lien direct n'était pas stable, un lien de recherche Google Scholar est fourni : il renvoie directement vers les versions PDF disponibles.

---

## A. Optique et fibre optique

### 1. 🟢 BTS1 : Pourquoi la lumière reste-t-elle dans la fibre ?
**Source :** M. Alouini, « Des lasers pour les télécommunications optiques par fibres : un luxe ou une nécessité ? », *Reflets de la physique* n°21 (2010), p. 70-75.
🔗 [Lire l'article (libre accès)](https://www.refletsdelaphysique.fr/articles/refdp/abs/2010/04/refdp201021p70/refdp201021p70.html)
**Physique :** réflexion totale interne, indice de réfraction, ouverture numérique, cohérence et brillance du laser.
**Réseau :** pourquoi le monomode pour le WAN, le multimode en LAN ; budget optique, atténuation 0,2 dB/km.

### 2. 🟡 BTS2 : Dispersion et atténuation, ce qui limite vraiment le débit
**Source :** recommandations ITU-T G.652 et G.655.
🔗 [ITU-T G.652](https://www.itu.int/rec/T-REC-G.652) : [ITU-T G.655](https://www.itu.int/rec/T-REC-G.655)
**Physique :** dispersion chromatique, dispersion modale de polarisation, fenêtres 1310/1550 nm, amplificateurs EDFA (erbium).
**Réseau :** pourquoi 100 Gb/s ne « passe » pas partout, régénération, DWDM.

### 3. 🟡 BTS2 : Écouter une fibre optique sans la couper (fiber tapping)
**Source :** littérature sur le « bend coupling » et les clip-on couplers.
🔗 [Recherche Scholar : optical fiber tapping bend coupling security](https://scholar.google.com/scholar?q=optical+fiber+tapping+bend+coupling+eavesdropping+security)
**Physique :** onde évanescente, courbure de la fibre et fuite de mode, sensibilité des photodétecteurs.
**Cyber :** pourquoi le chiffrement de couche 1/2 (MACsec, chiffreurs optiques) existe ; détection d'intrusion par OTDR.

### 4. 🟡 BTS2 : Les câbles sous-marins comme capteurs sismiques
**Source :** G. Marra *et al.*, « Ultrastable laser interferometry for earthquake detection with terrestrial and submarine optical fibers », *Science*, 2018.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Marra+ultrastable+laser+interferometry+earthquake+detection+submarine+optical+fibers)
**Physique :** interférométrie, stabilité de phase d'un laser ultra-stable, rétrodiffusion Rayleigh.
**Réseau :** infrastructure mondiale d'Internet, double usage d'une infrastructure télécom, enjeux géopolitiques.

### 5. 🟢 BTS1 : Le Li-Fi, faire du réseau avec de la lumière
**Source :** travaux de H. Haas (Université d'Édimbourg) et norme IEEE 802.11bb (2023).
🔗 [Recherche Scholar : Harald Haas LiFi](https://scholar.google.com/scholar?q=Harald+Haas+LiFi+visible+light+communication) : [Norme IEEE 802.11bb](https://standards.ieee.org/ieee/802.11bb/10823/)
**Physique :** modulation d'intensité d'une LED, réponse temporelle d'un semi-conducteur, photodiode, rapport signal/bruit optique.
**Réseau / cyber :** confinement du signal par les murs, donc surface d'attaque réduite ; limites (pas de traversée d'obstacle, débit remontant).

### 6. 🟡 BTS2 : REFIMEVE, distribuer l'heure exacte par fibre optique
**Source :** interview de Christian Chardonnet sur l'infrastructure REFIMEVE, *Reflets de la physique*.
🔗 [Reflets de la physique (archives en libre accès)](https://www.refletsdelaphysique.fr/) : [Projet REFIMEVE](https://refimeve.fr/)
**Physique :** horloges atomiques, transfert de fréquence, compensation du bruit de phase de la fibre.
**Réseau / cyber :** NTP, PTP (IEEE 1588), White Rabbit au CERN ; ce qui casse si l'heure est fausse (certificats TLS, logs, 5G, trading).

---

## B. Ondes radio, antennes, propagation

### 7. 🟢 BTS1 : Pourquoi le Wi-Fi 5 GHz porte moins loin que le 2,4 GHz
**Source :** modèle de propagation en espace libre (équation de Friis) et documentation Wi-Fi Alliance.
🔗 [Recherche Scholar : Friis free space path loss](https://scholar.google.com/scholar?q=Friis+transmission+equation+free+space+path+loss+indoor+WiFi) : [Wi-Fi Alliance](https://www.wi-fi.org/)
**Physique :** équation de Friis, affaiblissement en espace libre, absorption par l'eau, diffraction, effet de peau.
**Réseau :** plan de fréquences, choix de canaux, DFS, dimensionnement d'une couverture Wi-Fi.

### 8. 🟡 BTS2 : Les ondes térahertz du 6G sont-elles vraiment impossibles à espionner ?
**Source :** J. Ma *et al.*, « Security and eavesdropping in terahertz wireless links », *Nature*, vol. 563 (2018).
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Ma+security+and+eavesdropping+in+terahertz+wireless+links+Nature+2018)
**Physique :** faisceaux très directifs, diffraction, lobes secondaires, diffusion par un objet placé dans le faisceau.
**Cyber :** mythe de la « sécurité par la directivité » ; l'article montre qu'un attaquant peut capter les lobes diffusés.

### 9. 🟡 BTS2 : Voir à travers un mur avec du Wi-Fi
**Source :** F. Adib et D. Katabi, « See Through Walls with WiFi! », *ACM SIGCOMM* 2013 (projet Wi-Vi, MIT).
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Adib+Katabi+See+Through+Walls+with+WiFi+SIGCOMM+2013)
**Physique :** traversée des matériaux par les micro-ondes, effet Doppler, formation de voies (beamforming), annulation d'interférences.
**Cyber / vie privée :** le Wi-Fi comme capteur ; Wi-Fi sensing dans la norme 802.11bf.

### 10. 🟡 BTS2 : Relay attack, voler une voiture sans clé
**Source :** A. Francillon, B. Danev, S. Čapkun, « Relay Attacks on Passive Keyless Entry and Start Systems in Modern Cars », *NDSS* 2011.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Francillon+Relay+Attacks+Passive+Keyless+Entry+Start+Systems+Modern+Cars+NDSS+2011)
**Physique :** couplage inductif LF 125 kHz, propagation UHF 433 MHz, temps de propagation, amplification.
**Cyber :** pourquoi la « preuve de proximité » par puissance reçue est fausse ; contre-mesure par mesure de distance UWB (distance bounding).

### 11. 🟢 BTS1 : RFID / NFC, comment une carte sans pile s'alimente
**Source :** norme ISO/IEC 14443 et documentation technique sur le sans-contact.
🔗 [Recherche Scholar : RFID inductive coupling 13.56 MHz](https://scholar.google.com/scholar?q=RFID+inductive+coupling+13.56+MHz+ISO+14443+security)
**Physique :** induction magnétique, couplage résonant à 13,56 MHz, loi de Lenz, facteur de qualité d'une antenne cadre.
**Cyber :** lecture à distance, clonage de badges Mifare, skimming bancaire, blindage.

### 12. 🟡 BTS2 : GPS spoofing, détourner un drone avec un faux signal
**Source :** travaux de T. Humphreys (UT Austin), capture d'un drone en 2012 ; rapports sur le brouillage GNSS en mer Baltique.
🔗 [Recherche Scholar : Humphreys GPS spoofing UAV](https://scholar.google.com/scholar?q=Humphreys+GPS+spoofing+civil+UAV+capture)
**Physique :** étalement de spectre (CDMA), corrélation, très faible puissance reçue (environ -160 dBW), trilatération et temps de vol.
**Réseau / cyber :** dépendance de la 5G, des datacenters et des réseaux électriques au temps GNSS ; jamming contre spoofing.

### 13. 🟡 BTS2 : ADS-B, le trafic aérien diffusé en clair
**Source :** M. Strohmeier *et al.*, « On the Security of the Automatic Dependent Surveillance-Broadcast Protocol », *IEEE Communications Surveys & Tutorials*, 2015.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Strohmeier+security+automatic+dependent+surveillance+broadcast+protocol) : [Flightradar24 (illustration)](https://www.flightradar24.com/)
**Physique :** émission 1090 MHz, portée radio-horizon, réception par SDR (clé RTL-SDR à 20 euros).
**Cyber :** absence d'authentification, injection d'avions fantômes, multilatération comme contre-mesure.

### 14. 🟢 BTS1 : La SDR, une radio entièrement en logiciel
**Source :** documentation du projet GNU Radio.
🔗 [GNU Radio](https://www.gnuradio.org/) : [RTL-SDR](https://www.rtl-sdr.com/)
**Physique :** échantillonnage, théorème de Shannon-Nyquist, mélange I/Q, conversion en bande de base.
**Réseau / cyber :** pourquoi la SDR a démocratisé l'audit radio (télécommandes, capteurs sans fil, GSM).

---

## C. Canaux auxiliaires et émanations

### 15. 🟢 BTS1 : Introduction générale, quand la physique trahit le secret
**Source :** H. Le Bouder, « Des attaques informatiques utilisant la physique », *Interstices* (Inria), 2016. Article de vulgarisation en français, idéal pour ouvrir le cycle d'exposés.
🔗 [Interstices, rubrique Sécurité & Vie privée](https://interstices.info/domaine/securite-vie-privee/)
**Physique :** consommation, rayonnement, temps, chaleur, son comme fuites d'information.
**Cyber :** notion de canal auxiliaire (side-channel). Parfait sujet introductif.

### 16. 🟡 BTS2 : TEMPEST, lire un écran à distance
**Source :** W. van Eck, « Electromagnetic Radiation from Video Display Units: An Eavesdropping Risk? », *Computers & Security*, 1985. Prolongement : M. Kuhn (Cambridge) sur les écrans LCD.
🔗 [Recherche Scholar : van Eck phreaking](https://scholar.google.com/scholar?q=van+Eck+electromagnetic+radiation+video+display+units+eavesdropping) : [Travaux de Markus Kuhn](https://www.cl.cam.ac.uk/~mgk25/)
**Physique :** rayonnement EM d'un signal vidéo, harmoniques, antenne réceptrice, reconstruction de l'image par synchronisation.
**Cyber :** normes TEMPEST, cages de Faraday, zonage des locaux classifiés.

### 17. 🟡 BTS2 : DPA, lire une clé de chiffrement dans la consommation électrique
**Source :** P. Kocher, J. Jaffe, B. Jun, « Differential Power Analysis », *CRYPTO* 1999.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Kocher+Jaffe+Jun+Differential+Power+Analysis+CRYPTO+1999)
**Physique :** consommation dynamique CMOS (P proportionnel à C.V².f), corrélation entre le nombre de bits basculés et le courant, mesure par shunt ou sonde de courant.
**Cyber :** attaque sur cartes à puce, contre-mesures (masquage, logique dual-rail), base de la certification Critères Communs et EMVCo.

### 18. 🟡 BTS2 : Screaming Channels, quand la fuite EM part sur l'antenne Bluetooth
**Source :** G. Camurati *et al.*, « Screaming Channels: When Electromagnetic Side Channels Meet Radio Transceivers », *ACM CCS* 2018 (EURECOM).
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Camurati+Screaming+Channels+electromagnetic+side+channels+radio+transceivers)
**Physique :** couplage substrat dans un SoC mixte, mélange non linéaire, la fuite est modulée sur la porteuse radio et portée à plusieurs mètres.
**Cyber :** l'intégration System-on-Chip (IoT) crée une fuite exploitable à distance, pas seulement au contact.

### 19. 🟡 BTS2 : Hertzbleed, la fréquence du processeur comme fuite
**Source :** Y. Wang *et al.*, « Hertzbleed: Turning Power Side-Channel Attacks Into Remote Timing Attacks on x86 », *USENIX Security* 2022.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Hertzbleed+turning+power+side+channel+attacks+into+remote+timing+attacks+x86) : [Recherche USENIX](https://www.usenix.org/conference/usenixsecurity22)
**Physique :** DVFS (dynamic voltage and frequency scaling), lien entre puissance dissipée, température et fréquence.
**Cyber :** transforme une attaque locale en attaque **réseau**, mesurable via des temps de réponse à distance.

### 20. 🟡 BTS2 : LANTENNA, le câble Ethernet transformé en antenne
**Source :** M. Guri, « LANTENNA: Exfiltrating Data from Air-Gapped Networks via Ethernet Cables », arXiv:2110.00104 (2021).
🔗 [arXiv 2110.00104](https://arxiv.org/abs/2110.00104)
**Physique :** rayonnement d'un conducteur parcouru par un courant modulé, longueur d'onde contre longueur de câble, réception SDR.
**Cyber :** exfiltration depuis un réseau physiquement isolé (air gap), contre-mesures (blindage, zonage, brouillage).

### 21. 🟢 BTS1 : Fansmitter et DiskFiltration, exfiltrer des données avec du bruit
**Source :** M. Guri *et al.*, « Fansmitter: Acoustic Data Exfiltration from (speakerless) Air-Gapped Computers », arXiv:1606.05915 ; « DiskFiltration », *ESORICS* 2017.
🔗 [arXiv 1606.05915](https://arxiv.org/abs/1606.05915) : [covertchannels.com](http://www.covertchannels.com)
**Physique :** fréquence de rotation d'un ventilateur convertie en fréquence acoustique, modulation FSK, seuil d'audition.
**Cyber :** un PC sans haut-parleur peut quand même « parler ». Sujet très visuel et démontrable en classe.

### 22. 🟢 BTS1 : BitWhisper, parler par la chaleur
**Source :** M. Guri *et al.*, « BitWhisper: Covert Signaling Channel between Air-Gapped Computers using Thermal Manipulations », *IEEE CSF* 2015.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Guri+BitWhisper+covert+signaling+channel+air-gapped+thermal+manipulations)
**Physique :** dissipation thermique, inertie thermique, capteurs de température intégrés, débit limité par la constante de temps.
**Cyber :** canal caché de très bas débit (quelques bits par heure) mais suffisant pour une clé ou une commande.

### 23. 🟢 BTS1 : LED-it-GO et ETHERLED, les LED qui clignotent en morse
**Source :** M. Guri *et al.*, « LED-it-GO » (2017) ; « ETHERLED: Sending Covert Morse Signals from Air-Gapped Devices via NIC LEDs », arXiv:2208.09975.
🔗 [arXiv 2208.09975](https://arxiv.org/abs/2208.09975)
**Physique :** temps de réponse d'une LED (microsecondes) contre persistance rétinienne (millisecondes), photodiode ou caméra rapide.
**Cyber :** la LED d'activité d'un disque ou d'une carte réseau devient un émetteur optique, filmable depuis une fenêtre.

### 24. 🟡 BTS2 : PIXHELL et COVID-bit, l'écran et l'alimentation comme émetteurs
**Source :** M. Guri, « PIXHELL Attack », arXiv:2409.04930 (2024) ; « COVID-bit », arXiv:2212.03520 (2022).
🔗 [arXiv 2409.04930](https://arxiv.org/abs/2409.04930) : [arXiv 2212.03520](https://arxiv.org/abs/2212.03520) : [État de l'art air gap](https://arxiv.org/abs/2409.04190)
**Physique :** bobinages et condensateurs d'un écran LCD qui vibrent (effets magnétostrictif et piézoélectrique), commutation d'une alimentation à découpage et rayonnement de 0 à 60 kHz.
**Cyber :** synthèse de l'état de l'art des canaux cachés en air gap.

### 25. 🟡 BTS2 : Lamphone et Glowworm, récupérer une conversation avec un capteur de lumière
**Source :** B. Nassi *et al.*, « Lamphone: Real-Time Passive Sound Recovery from Light Bulb Vibrations », Black Hat USA 2020 ; « Glowworm Attack: Optical TEMPEST Sound Recovery via a Device's Power Indicator LED », *ACM CCS* 2021.
🔗 [Recherche Scholar : Lamphone](https://scholar.google.com/scholar?q=Nassi+Lamphone+passive+sound+recovery+light+bulb+vibrations) : [Recherche Scholar : Glowworm](https://scholar.google.com/scholar?q=Glowworm+attack+optical+TEMPEST+power+indicator+LED)
**Physique :** vibration mécanique induite par une onde sonore, variation d'intensité lumineuse de quelques millièmes, photodiode et télescope, traitement du signal.
**Cyber :** espionnage totalement passif, sans logiciel malveillant, à travers une vitre.

### 26. 🟡 BTS2 : Écouter un clavier pour retrouver un mot de passe
**Source :** D. Asonov et R. Agrawal, « Keyboard Acoustic Emanations », *IEEE S&P* 2004 ; travaux récents de classification par apprentissage profond via micro ou visioconférence.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=keyboard+acoustic+emanations+deep+learning+side+channel+attack)
**Physique :** signature acoustique d'une touche (position sur la plaque, modes de vibration), analyse spectrale, FFT.
**Cyber :** fuite via Zoom ou Teams, contre-mesures (bruit, claviers silencieux, saisie aléatoire).

### 27. 🟡 BTS2 : Cryptanalyse acoustique du RSA
**Source :** D. Genkin, A. Shamir, E. Tromer, « RSA Key Extraction via Low-Bandwidth Acoustic Cryptanalysis », *CRYPTO* 2014.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Genkin+Shamir+Tromer+RSA+key+extraction+low+bandwidth+acoustic+cryptanalysis)
**Physique :** couinement des bobines et condensateurs de l'alimentation (coil whine), ultrasons, corrélation avec l'activité du processeur.
**Cyber :** extraction d'une clé 4096 bits avec un smartphone posé à côté de la machine.

---

## D. Attaques physiques sur composants et capteurs

### 28. 🟡 BTS2 : Rowhammer, retourner un bit sans y toucher
**Source :** Y. Kim *et al.*, « Flipping Bits in Memory Without Accessing Them: An Experimental Study of DRAM Disturbance Errors », *ISCA* 2014.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Kim+flipping+bits+in+memory+without+accessing+them+DRAM+disturbance+errors)
**Physique :** couplage capacitif entre cellules DRAM, fuite de charge, miniaturisation et diaphonie.
**Cyber :** escalade de privilèges, évasion de machine virtuelle, attaques depuis JavaScript, contre-mesures ECC et TRR.

### 29. 🟡 BTS2 : Cold boot, la mémoire qui n'oublie pas tout de suite
**Source :** J. A. Halderman *et al.*, « Lest We Remember: Cold Boot Attacks on Encryption Keys », *USENIX Security* 2008.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Halderman+lest+we+remember+cold+boot+attacks+on+encryption+keys)
**Physique :** rémanence des charges en DRAM, dépendance à la température (jusqu'à -50 °C), temps de décroissance.
**Cyber :** récupération de clés BitLocker ou LUKS, pourquoi verrouiller la session ne suffit pas.

### 30. 🟡 BTS2 : Light Commands, donner des ordres à un assistant vocal au laser
**Source :** T. Sugawara *et al.*, « Light Commands: Laser-Based Audio Injection Attacks on Voice-Controllable Systems », *USENIX Security* 2020.
🔗 [arXiv 2006.11946](https://arxiv.org/abs/2006.11946) : [lightcommands.com](https://lightcommands.com/) : [Page USENIX](https://www.usenix.org/conference/usenixsecurity20/presentation/sugawara)
**Physique :** effet photoacoustique dans un microphone MEMS, modulation d'amplitude d'un laser, portée supérieure à 100 m à travers une vitre.
**Cyber :** ouverture de portes connectées, démarrage de véhicules, limites de l'authentification vocale.

### 31. 🟡 BTS2 : DolphinAttack et WALNUT, piloter des capteurs par ultrasons
**Source :** G. Zhang *et al.*, « DolphinAttack: Inaudible Voice Commands », *ACM CCS* 2017 ; T. Trippel *et al.*, « WALNUT: Waging Doubt on the Integrity of MEMS Accelerometers with Acoustic Injection Attacks », *IEEE EuroS&P* 2017.
🔗 [Recherche Scholar : DolphinAttack](https://scholar.google.com/scholar?q=DolphinAttack+inaudible+voice+commands) : [Recherche Scholar : WALNUT](https://scholar.google.com/scholar?q=WALNUT+MEMS+accelerometers+acoustic+injection+attacks)
**Physique :** non-linéarité d'un microphone (démodulation d'une porteuse ultrasonore), résonance mécanique d'une masse sismique MEMS.
**Cyber :** falsification de données de capteurs (drones, podomètres, airbags), sécurité des systèmes cyber-physiques.

### 32. 🟡 BTS2 : Leurrer le LiDAR et la caméra d'un véhicule autonome
**Source :** J. Petit *et al.*, « Remote Attacks on Automated Vehicles Sensors: Experiments on Camera and LiDAR », Black Hat Europe 2015.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Petit+remote+attacks+on+automated+vehicles+sensors+camera+and+LiDAR)
**Physique :** temps de vol, saturation d'un photodétecteur, éblouissement CMOS, échos retardés.
**Cyber :** création d'obstacles fantômes ou effacement d'un obstacle réel, redondance capteurs comme défense.

### 33. 🟡 BTS2 : Injection de fautes, laser, glitch de tension, impulsion EM
**Source :** D. Boneh, R. DeMillo, R. Lipton, « On the Importance of Checking Cryptographic Protocols for Faults », *EUROCRYPT* 1997 ; K. Murdock *et al.*, « Plundervolt: Software-based Fault Injection Attacks against Intel SGX », *IEEE S&P* 2020.
🔗 [Recherche Scholar : Bellcore](https://scholar.google.com/scholar?q=Boneh+DeMillo+Lipton+importance+of+checking+cryptographic+protocols+for+faults) : [Recherche Scholar : Plundervolt](https://scholar.google.com/scholar?q=Plundervolt+software+based+fault+injection+attacks+Intel+SGX)
**Physique :** génération de porteurs par photo-ionisation (laser), marges de timing d'un circuit synchrone, sous-alimentation.
**Cyber :** casser RSA ou AES avec une seule faute, sécurisation des éléments sécurisés et des TPM.

### 34. 🟢 BTS1 : Les rayons cosmiques peuvent-ils détourner votre trafic DNS ?
**Source :** A. Dinaburg, « Bitsquatting: DNS Hijacking without Exploitation », Black Hat USA 2011 ; littérature sur les SEU (Single Event Upsets).
🔗 [Recherche Scholar : bitsquatting](https://scholar.google.com/scholar?q=Dinaburg+bitsquatting+DNS+hijacking+without+exploitation) : [Recherche Scholar : SEU](https://scholar.google.com/scholar?q=single+event+upset+cosmic+rays+DRAM+soft+error+rate)
**Physique :** neutrons atmosphériques, ionisation dans le silicium, basculement de bit en mémoire, taux de SEU en fonction de l'altitude.
**Réseau / cyber :** un bit retourné dans un nom de domaine en RAM conduit à une connexion vers un domaine contrôlé par un attaquant.

---

## E. Quantique et cryptographie

### 35. 🟡 BTS2 : La distribution quantique de clés (QKD)
**Source :** dossier « Progrès et défis pour la cryptographie quantique », *Photoniques* n°91 (2018), p. 33.
🔗 [PDF Photoniques n°91 (libre accès)](https://www.photoniques.com/fr/articles/photon/pdf/2018/03/photon201891p33.pdf) : [PDF Photoniques n°71](https://www.photoniques.com/articles/photon/pdf/2014/03/photon201471p34.pdf)
**Physique :** principe d'incertitude de Heisenberg, théorème de non-clonage, polarisation du photon, protocole BB84, pertes en fibre (0,2 dB/km).
**Réseau :** réseaux quantiques, répéteurs, nœuds de confiance, satellite Micius (Chine et Autriche).

### 36. 🟡 BTS2 : Attaquer un système QKD « inviolable »
**Source :** travaux du groupe de V. Makarov sur les attaques par aveuglement des photodétecteurs.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Makarov+detector+blinding+attack+quantum+key+distribution+hacking)
**Physique :** aveuglement d'une photodiode à avalanche par un laser continu, isolateur optique, attaque par sondage de la fibre.
**Cyber :** la sécurité « prouvée par la physique » ne protège pas des défauts matériels. Excellente leçon d'esprit critique.

### 37. 🟡 BTS2 : Cryptographie post-quantique, pourquoi maintenant ?
**Source :** « Vers une cryptographie post-quantique », interview d'Adeline Roux-Langlois, *CNRS Le Journal* (2021) ; standards NIST 2024.
🔗 [Article CNRS Le Journal](https://lejournal.cnrs.fr/articles/vers-une-cryptographie-post-quantique) : [NIST Post-Quantum Cryptography](https://csrc.nist.gov/projects/post-quantum-cryptography) : [Avis ANSSI](https://cyber.gouv.fr/publications/avis-de-lanssi-sur-la-migration-vers-la-cryptographie-post-quantique)
**Physique et information :** principe de l'algorithme de Shor, superposition, nombre de qubits logiques nécessaires, décohérence.
**Réseau / cyber :** stratégie « harvest now, decrypt later », migration TLS, recommandations d'hybridation.

### 38. 🟢 BTS1 : Générer du vrai hasard avec la physique
**Source :** documentation sur les générateurs quantiques (QRNG) et matériels (TRNG, anneaux oscillants).
🔗 [Recherche Scholar : quantum random number generator](https://scholar.google.com/scholar?q=quantum+random+number+generator+review) : [NIST SP 800-22](https://csrc.nist.gov/pubs/sp/800/22/r1/upd1/final)
**Physique :** bruit thermique (Johnson-Nyquist), bruit de grenaille, comportement d'un photon sur une lame semi-réfléchissante.
**Cyber :** les désastres du hasard prévisible (Debian OpenSSL 2008, clés RSA dupliquées), tests statistiques NIST.

### 39. 🟡 BTS2 : Les fonctions physiques non clonables (PUF)
**Source :** R. Pappu *et al.*, « Physical One-Way Functions », *Science*, 2002 ; littérature sur les SRAM-PUF.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Pappu+physical+one-way+functions+Science+2002+PUF)
**Physique :** dispersion de fabrication à l'échelle nanométrique, état d'initialisation d'une cellule SRAM, stabilité en température.
**Cyber :** identité matérielle sans clé stockée, anti-contrefaçon de composants, racine de confiance dans l'IoT.

---

## F. Infrastructures, énergie, systèmes cyber-physiques

### 40. 🟡 BTS2 : Stuxnet, un logiciel qui détruit des machines
**Source :** R. Langner, « Stuxnet: Dissecting a Cyberwarfare Weapon », *IEEE Security & Privacy*, 2011. Complément en français : « S'adapter à la cyberguerre », *Interstices*.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Langner+Stuxnet+dissecting+a+cyberwarfare+weapon) : [Interstices, S'adapter à la cyberguerre](https://interstices.info/sadapter-a-la-cyberguerre/)
**Physique :** vitesses critiques et résonance mécanique d'une centrifugeuse, variateurs de fréquence.
**Cyber :** SCADA, automates Siemens S7, falsification des retours capteurs. L'archétype du système cyber-physique attaqué.

### 41. 🟡 BTS2 : IEMI, détruire de l'électronique avec un champ électromagnétique
**Source :** série de normes IEC 61000 sur la compatibilité électromagnétique et les perturbations intentionnelles (IEMI / HPEM).
🔗 [Recherche Scholar : IEMI](https://scholar.google.com/scholar?q=intentional+electromagnetic+interference+IEMI+HPEM+attack+electronics) : [IEC 61000](https://www.iec.ch/homepage)
**Physique :** couplage d'une impulsion EM dans les câbles, énergie induite, claquage des jonctions, effet de cage de Faraday.
**Réseau :** déni de service matériel sur un datacenter ou un réseau embarqué, normes CEM comme première défense.

### 42. 🟢 BTS1 : Combien consomme un octet transmis ?
**Source :** rapports du Shift Project et étude conjointe ADEME / Arcep sur l'empreinte environnementale du numérique.
🔗 [The Shift Project](https://theshiftproject.org/) : [Étude ADEME-Arcep](https://www.arcep.fr/la-regulation/grands-dossiers-thematiques-transverses/lempreinte-environnementale-du-numerique.html)
**Physique :** dissipation Joule, limite de Landauer, rendement des alimentations, PUE d'un datacenter, refroidissement.
**Réseau :** où part réellement l'énergie (terminaux, réseau, datacenter). Sujet transverse très apprécié à l'oral.

### 43. 🟡 BTS2 : L'effet de peau, la diaphonie et les limites du câble Ethernet
**Source :** norme ISO/IEC 11801, catégories 6A, 7 et 8, documentation constructeur sur le 10GBASE-T.
🔗 [Recherche Scholar : 10GBASE-T alien crosstalk](https://scholar.google.com/scholar?q=10GBASE-T+alien+crosstalk+NEXT+twisted+pair+cabling) : [ISO/IEC 11801](https://www.iso.org/standard/66182.html)
**Physique :** effet de peau, impédance caractéristique 100 ohms, diaphonie NEXT et FEXT, torsade et paires blindées, adaptation d'impédance.
**Réseau :** pourquoi 100 m, pourquoi le blindage, pourquoi le 10 Gb/s passe mal sur du Cat5e.

### 44. 🟡 BTS2 : Thermographie, lire un code sur un clavier après la frappe
**Source :** K. Mowery *et al.*, « Heat of the Moment: Characterizing the Efficacy of Thermal Camera-Based Attacks », *USENIX WOOT* 2011.
🔗 [Recherche Scholar](https://scholar.google.com/scholar?q=Mowery+heat+of+the+moment+thermal+camera+based+attacks+keypads)
**Physique :** rayonnement infrarouge, loi de Stefan-Boltzmann, émissivité des matériaux, décroissance thermique.
**Cyber :** distributeurs de billets, claviers de contrôle d'accès, caméras thermiques désormais à 200 euros sur smartphone.

---

## Cadre imposé pour l'exposé

| Contrainte | BTS 1 | BTS 2 |
|---|---|---|
| Durée de l'exposé | 10 minutes | 15 minutes |
| Nombre de diapositives | 5 minimum | 7 minimum |
| Questions du jury | 5 minutes | 10 minutes |

### Format obligatoire de l'exposé

L'exposé se déroule en **deux temps**, à respecter dans cet ordre :

**1. Présentation du papier**
- Qui a écrit l'article, où et quand il a été publié.
- Quelle question les auteurs se posent.
- Quel phénomène physique est exploité (schéma personnel obligatoire, au moins un ordre de grandeur chiffré : distance, fréquence, débit, puissance, dB).
- Ce que les auteurs ont réellement démontré, avec leurs conditions expérimentales.

**2. Critique et impact en situation réelle**
- L'attaque ou la technologie est-elle exploitable hors du laboratoire ? À quelles conditions (accès physique, distance, matériel, coût, durée) ?
- Quel serait l'impact concret dans une entreprise, un hôpital, une usine, un réseau d'opérateur ?
- Quelles contre-mesures existent, et à quel coût ?
- Ce que l'article ne démontre pas, ou ce que l'étudiant n'a pas compris.

**Conseil**
- Pensez a reprendre les figures des articles
- Avant de lire regardez toutes les figures et essayer déjà de comprendre de quoi elles parlent : parfois dans ces articles le text est inutile pour comprendre l'essence du propos.
- Lisez attentivement le text
- N'hésitez pas de demander à claud de vous expliquer ce que vous ne comprenez pas : on est en 2026 et il faut que vous vous familiarisez avec cette outils qui vous suivera toute votre carrière.

### Grille d'évaluation (sur 20)

| Critère | BTS 1 | BTS 2 |
|---|---|---|
| Présentation du papier : contexte, auteurs, question posée | 3 | 2 |
| Explication du phénomène physique (schéma, ordre de grandeur, formule) | 6 | 6 |
| Lien explicite avec le réseau ou la sécurité | 4 | 4 |
| Critique et impact en situation réelle, contre-mesures | 3 | 5 |
| Respect du format (durée, nombre de diapositives, sources citées) | 2 | 2 |
| Qualité de l'oral et du support | 2 | 1 |

### Sources récurrentes utiles et gratuites

- [Interstices (Inria)](https://interstices.info/) : vulgarisation en français, niveau de difficulté indiqué
- [Reflets de la physique (SFP)](https://www.refletsdelaphysique.fr/) : libre accès, PDF
- [Photoniques (SFO)](https://www.photoniques.com/) : libre accès, PDF
- [CNRS Le Journal](https://lejournal.cnrs.fr/)
- [arXiv, section cryptographie et sécurité](https://arxiv.org/list/cs.CR/recent)
- [USENIX Security, actes en accès libre](https://www.usenix.org/conferences)
- [covertchannels.com](http://www.covertchannels.com) : les travaux de M. Guri sur les canaux cachés en air gap
- [ANSSI, publications](https://cyber.gouv.fr/publications)
