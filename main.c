// Header Files
# include <stdio.h>
# include <string.h>
# include "personnage.h"


int main (void)
{

printf("Bienvenue dans \n\n\t # Ares-Legend # \n\n");

printf("Veuillez selectionner votre personnage : \n 1 : Fee\n 2 : Mage\n 3 : Guerrier\n 4 : Archer\n");

int resultat;

scanf("%d", &resultat);

int tableau[4];

type_perso(resultat, tableau);
    

    return 0;
}



