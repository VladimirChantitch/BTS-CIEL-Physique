# TP 2.3 : dérive de l'horloge d'une carte Arduino Uno, comparée au PC
# La carte doit contenir autotest_uno.ino (commande h : mode horloge).
# Fermer le moniteur série de l'IDE avant de lancer ce programme.
import csv
import statistics
import time

import serial

PORT = "COM3"        # à adapter : Outils → Port dans l'IDE Arduino
CARTE = "07"         # identifiant de la carte (fiche de recette)
DUREE = 180          # durée de la mesure en secondes (180 s = 3 min)

liaison = serial.Serial(PORT, 115200, timeout=2)

# 1. L'ouverture du port redémarre la carte :
#    on attend la fin de son autotest (ligne PRET)
print("Attente de la fin de l'autotest de la carte (environ 15 s)...")
pret = False
debut = time.perf_counter()
while not pret and time.perf_counter() - debut < 40:
    ligne = liaison.readline().decode(errors="ignore").strip()
    pret = (ligne == "PRET")
if not pret:
    print("Ligne PRET non reçue : le mode horloge est demandé quand même.")
liaison.write(b"h\n")                      # passage en mode horloge

# 2. Acquisition : chaque ligne H;millis est horodatée dès sa réception
t_pc = []         # instants de réception mesurés par l'horloge du PC (s)
t_carte = []      # temps de la carte : millis() / 1000 (s)
t0 = time.perf_counter()
print(f"Mesure pendant {DUREE} s : ne pas débrancher la carte...")
while time.perf_counter() - t0 < DUREE:
    ligne = liaison.readline().decode(errors="ignore").strip()
    instant = time.perf_counter()          # horodatage immédiat
    if ligne.startswith("H;"):
        try:
            valeur = int(ligne[2:]) / 1000
        except ValueError:
            continue                       # ligne abîmée : ignorée
        t_carte.append(valeur)
        t_pc.append(instant - t0)
liaison.write(b"x\n")                      # fin du mode horloge
liaison.close()

# 3. Régression linéaire t_pc = a × t_carte + b (moindres carrés)
n = len(t_pc)
if n < 10:
    raise SystemExit("Trop peu de lignes reçues : vérifier le port "
                     "et le programme de la carte.")
xm = statistics.mean(t_carte)
ym = statistics.mean(t_pc)
sxx = sum((x - xm) ** 2 for x in t_carte)
sxy = sum((x - xm) * (y - ym) for x, y in zip(t_carte, t_pc))
a = sxy / sxx
b = ym - a * xm
residus = [y - (a * x + b) for x, y in zip(t_carte, t_pc)]
# gigue de la liaison USB : écart-type des résidus (s)
s_res = (sum(r ** 2 for r in residus) / (n - 2)) ** 0.5
u_a = s_res / sxx ** 0.5                   # incertitude-type sur la pente

# 4. Dérive de l'horloge de la carte, positive si la carte avance
derive = (1 / a - 1) * 1e6                 # en ppm (parties par million)
u_derive = u_a / a ** 2 * 1e6
duree = t_pc[-1] - t_pc[0]
print(f"{n} lignes sur {duree:.0f} s ; "
      f"gigue (écart-type des résidus) : {s_res * 1000:.1f} ms")
print(f"pente a = {a:.7f} ; u(a) = {u_a:.7f}")
print(f"dérive = {derive:.0f} ppm ; "
      f"incertitude élargie U (k = 2) = {2 * u_derive:.0f} ppm")
print(f"soit {derive * 86400e-6:+.1f} s par jour "
      "(+ : la carte avance ; - : elle retarde)")

# 5. Sauvegarde des points (séparateur ; et virgule décimale, pour le tableur)
nom_fichier = f"horloge_carte_{CARTE}.csv"
with open(nom_fichier, "w", newline="") as fichier:
    ecrivain = csv.writer(fichier, delimiter=";")
    ecrivain.writerow(["t_carte_s", "t_pc_s", "residu_ms"])
    for x, y, r in zip(t_carte, t_pc, residus):
        ecrivain.writerow([f"{x:.3f}".replace(".", ","),
                           f"{y:.4f}".replace(".", ","),
                           f"{r * 1000:.2f}".replace(".", ",")])
print(f"Points enregistrés dans {nom_fichier}")
