/* EXERCICE 2 : Demander à l’utilisateur combien font 2 fois 2 et répéter cette question aussi 
longtemps que la réponse est fausse.

Ajouter le message "Faux, recommencez" à chaque fausse réponse, et "Bravo !" pour la bonne réponse.

puis, compter le nombre d'essais et l'afficher à la fin : "Bravo ! Vous avez trouvé en x essais."*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int essai =0;
    int nbEssais = 0;

    do {
        printf("combien font 2x2 ?\n");
        scanf("%d", &essai);

        if (essai != 4)
    {
        printf("faux, recommencez\n");
    }
        nbEssais++; // nbEssais <- nbEssais + 1
    } 
    while (essai != 4);

    printf("bravo vous avez trouvé en %d essais\n", nbEssais);
    
    return 0;
}