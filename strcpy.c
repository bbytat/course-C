#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char**argv)
{
    char chaine[] = "texte", copie[100] = {0};
        /* on cree une chaine "chaineé" qui contient un peu de texte 
        et une copie (vide) de taille 100*/

    strcpy(copie, chaine); //on copie chaine dans copie
    
    printf("chaine vaut : %s\n", chaine);
    printf("copie vaut : %s\n", copie);

    return 0;
}