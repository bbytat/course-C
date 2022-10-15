/* Demander à l’utilisateur un nombre entier positif. Afficher tous les 
nombres pairs entre 0 et le nombre saisi."*/

#include <stdio.h>

int main(int argc, char **argv)
{
    int nb;

    printf("choisir un nombre entier positif\n");
    scanf("%d", &nb);

    for (int i=0; i <= nb; i = i + 2) // pour tout i de 0 à nb par incréments de 2
    printf("%d", i);

    return 0;
}