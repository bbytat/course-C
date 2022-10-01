#include <stdio.h>
#include <stdlib.h>

int triple(nombre) //6
{
    return 3*nombre; //7
}

int main(int arg, char**argv) //1
{
    int nombreEntre = 0, nombreTriple =0; //2
    printf("entrez le nombre"); //3
    scanf("%d", &nombreEntre); //4
    nombreTriple = triple (nombreEntre); //5 : on apl la fct triple dc renvoit l4
    printf("le triple de ce nombre est %d\n", nombreTriple); //8
    
    return 0; //9
}