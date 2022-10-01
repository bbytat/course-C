#include <stdio.h>
#include <stdlib.h>

int main(int argrc, char**argv)
{
    int tableau[4], i = 0;  // i= variable qui permet de parcourir un tableau

    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;

    for(i = 0 ; i < 4 ; i++)  // cette boucle parcourt le tableau a l'aide d'une variable i
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
