# include <stdio.h>
# include <string.h>
#include "personnage.h"

void type_perso(int resultat, int caracteristiques[4]) {

    /* 0 = sante / 1 = attaque / 2 = soin / 3 = armure */

    switch (resultat) {
    case 1:
        printf("Vous avez choisis : Fée\n");
        caracteristiques[0] = 7;
        caracteristiques[1] = 2;
        caracteristiques[2] = 10;
        caracteristiques[3] = 5;
        printf("Vos caracteristiques sont les suivantes : \n- Sante : %d \n- Attaque : %d \n- Soin : %d \n- Armure : %d", caracteristiques[0], caracteristiques[1], caracteristiques[2], caracteristiques[3]);
        break;
    case 2:
        printf("Vous avez choisis : Mage\n");
        caracteristiques[0] = 8;
        caracteristiques[1] = 7;
        caracteristiques[2] = 5;
        caracteristiques[3] = 5;
        /*sante = 8, attaque = 7, soin = 5, armure = 5 ;*/
        printf("Vos caracteristiques sont les suivantes : \n- Sante : %d \n- Attaque : %d \n- Soin : %d \n- Armure : %d", caracteristiques[0], caracteristiques[1], caracteristiques[2], caracteristiques[3]);
        break;
    case 3:
        printf("Vous avez choisis : Guerrier\n");
        caracteristiques[0] = 10;
        caracteristiques[1] = 6;
        caracteristiques[2] = 0;
        caracteristiques[3] = 10;
        /*sante = 10, attaque = 6, soin = 0, armure = 10 ;*/
        printf("Vos caracteristiques sont les suivantes : \n- Sante : %d \n- Attaque : %d \n- Soin : %d \n- Armure : %d", caracteristiques[0], caracteristiques[1], caracteristiques[2], caracteristiques[3]);
        break;
    case 4:
        printf("Vous avez choisis : Archer\n");
        caracteristiques[0] = 5;
        caracteristiques[1] = 8;
        caracteristiques[2] = 2;
        caracteristiques[3] = 2;
        /*sante = 5, attaque = 8, soin = 2, armure = 2 ;*/
        printf("Vos caracteristiques sont les suivantes : \n- Sante : %d \n- Attaque : %d \n- Soin : %d \n- Armure : %d", caracteristiques[0], caracteristiques[1], caracteristiques[2], caracteristiques[3]);
        break;
    default:
        break;
    }

}


