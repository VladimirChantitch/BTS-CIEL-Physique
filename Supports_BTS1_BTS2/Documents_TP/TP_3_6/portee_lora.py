# TP 3.6 : jusqu'où porte une passerelle LoRa ?
# Code de départ à compléter : remplacer chaque ... par une valeur ou un calcul,
# au fil des étapes du TP. Le fichier se lance dès le départ sans erreur.

import math

# ---------------------------------------------------------------- Données de l'installation
F_MHZ = 868                  # fréquence (MHz)
C0 = 3.0e8                   # célérité de la lumière dans le vide (m/s)
PE = 14                      # puissance d'émission du capteur (dBm)
GE = 2                       # gain de l'antenne du capteur (dBi)
L_BAT = 20                   # pertes du bâtiment, capteur à l'intérieur (dB)
GR = 5                       # gain de l'antenne de la passerelle (dBi)
L_CABLE = ...                # pertes du câble de la passerelle (dB) : 10 m à 13 dB/100 m
MARGE_MIN = 10               # marge exigée par le cahier des charges (dB)
SENS = {7: -123, 8: -126, 9: -129, 10: -132, 11: -134.5, 12: -137}   # sensibilité (dBm) selon le SF


# ---------------------------------------------------------------- Étape 1 : antenne quart d'onde
lam = ...                    # longueur d'onde dans l'air (m)
print("lambda =", lam)
# Afficher ensuite lambda/4 et la longueur à couper (0,95 x lambda/4), en cm.


# ---------------------------------------------------------------- Étape 2 : atténuation en espace libre
def fsl(f_mhz, d_km):
    """Atténuation en espace libre (dB), f en MHz et d en km (formule de Friis)."""
    return ...


# ---------------------------------------------------------------- Étape 3 : bilan de liaison
def bilan(d_km, sf):
    """Renvoie la puissance reçue par la passerelle (dBm) et la marge (dB) pour le facteur sf."""
    pr = ...
    marge = ...
    return pr, marge


# ---------------------------------------------------------------- Étapes 4 et 5 : portée maximale
def portee(sf):
    """Distance maximale (km) qui respecte MARGE_MIN, en espace libre."""
    a_max = ...              # atténuation du trajet admissible (dB)
    return ...


# ---------------------------------------------------------------- Essais : décommenter au fur et à mesure
# print(round(fsl(868, 1), 1))            # doit afficher environ 91.2

# for d in [1, 2, 5, 10]:
#     pr, m7 = bilan(d, 7)
#     pr, m12 = bilan(d, 12)
#     print(d, "km :", round(pr, 1), "dBm   marge SF7 :", round(m7, 1), "dB   marge SF12 :", round(m12, 1), "dB")

# for sf in SENS:
#     print("SF", sf, ":", round(portee(sf), 1), "km")
