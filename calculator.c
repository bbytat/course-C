#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv)
{
    int resultat=0, nombre1=0, nombre2=0;

    //ask for the 2 numbers:
    printf("enter the number1 : ");
    scanf("%d", &nombre1);
    printf("enter the number2 : ");
    scanf("%d", &nombre2);

    //do the operation:
    resultat = nombre1 + nombre2;

    //show the addition:
    printf("%d + %d = %d\n", nombre1, nombre2, resultat);

    return 0;
}