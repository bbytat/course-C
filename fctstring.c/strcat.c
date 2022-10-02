#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int agrc, char **argv)
{
    char chaine1[100] = "hello", chaine2[] = "bbytat19"; //on cree deux chaine

    strcat(chaine1,chaine2); //on concatene chaine2 dans chaine1

    printf("chaine1 vaut %s\n", chaine1);
    printf("chaine2 vaut toujours %s\n", chaine2);

    return 0;
}
