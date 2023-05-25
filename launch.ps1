# Commande 1: Compilation des fichiers source
gcc.exe -c .\personnage.c .\main.c

# Commande 2: Création de l'exécutable
gcc.exe .\personnage.o .\main.o -o letsgo

# Commande 3: Exécution de l'exécutable
./letsgo.exe
