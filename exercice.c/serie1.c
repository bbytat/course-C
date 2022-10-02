#include <stdio.h> //permet d'utiliser printf et scanf 


int main(int argc, char **argv)
{
    int nb1 = 0, nb2 = 0, nbresult =0;
    printf("choisir un premier nombre\n");
    scanf("%d", &nb1);

    printf("choisir un second nombre\n");
    scanf("%d", &nb2);

    nbresult = nb1 * nb2;

    printf("le resultat est %d\n", nbresult);

    return 0;


}