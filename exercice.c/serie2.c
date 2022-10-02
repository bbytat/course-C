/* EXERCICE 2 : Demander à l’utilisateur combien font 2 fois 2 et répéter cette question aussi 
longtemps que la réponse est fausse.

Ajouter le message "Faux, recommencez" à chaque fausse réponse, et "Bravo !" pour la bonne réponse.*/

#include <stdio.h>

int main(int argc, char** argv)
{
    int essai =0;

    do {
        printf("combien font 2x2 ?\n");
        scanf("%d", &essai);

        if (essai != 4)
    {
        printf("faux, recommencez\n");
    }

    } 
    while (essai != 4);

    printf("bravo\n");
    
    return 0;
}