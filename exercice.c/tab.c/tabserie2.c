/* Écrire un programme qui demande 10 nombres entiers à l’utilisateur, les range dans un tableau avant d’en 
rechercher le plus grand et le plus petit.

Afficher le tableau, ainsi que le nombre le plus petit et le plus grand. */

#include <stdio.h>

int main(int argc, char**argv)
{
    const int TAB_SIZE = 10;
    int tNombres[TAB_SIZE];

    //demander les nombres a l'utilisateur

    printf("entrez les nbs entiers du tableau\n");
    for (int i = 0 ; i < TAB_SIZE ; i++)
    {
        printf("nombre %d/10 : ", i+1);
        scanf("%d", &tNombres[i]);
    
    }
    //rechercher le plus petit nombre
    int nbMin = tNombres[0];
    for(int i = 1 ; i < TAB_SIZE ; i++)
    {
        if(tNombres[i] < nbMin) nbMin = tNombres[i];
    }
    //rechercher le plus grand nombre
    int nbMax = tNombres[0];
    for(int i = 1 ; i < TAB_SIZE ; i++)
    {
        if(tNombres[i] > nbMax) nbMax = tNombres[i];
    }

    //afficher le tableau
    printf("\ntNombres : %d", tNombres[0]);
    for(int i = 1 ; i < TAB_SIZE ; i++)
    printf(", %d", tNombres[i]);
    printf("\nLa valeur min est : %d", nbMin);
    printf("\nLa valeur max est : %d", nbMax);

return 0;

}