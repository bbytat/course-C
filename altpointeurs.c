#include <stdio.h>
#include <stdlib.h>

void triplePointeurs(int *pointeurSurNombre);

int main(int argc, char**argv)
{
    int nombre = 5; //pointeur prend l'adresse de nombre
    int *pointeur = &nombre;

    triplePointeurs(pointeur); //on envoie pointeur (l'adresse de nombre) a la fonction
    printf("%d", *pointeur); //on affiche la valeur de nombre avec *pointeur

    return 0;
}

void triplePointeurs (int *pointeurSurNombre)
{
    *pointeurSurNombre *=3; //multiplie par 3 la valeur de nombre
}