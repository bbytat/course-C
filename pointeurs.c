#include <stdio.h>
#include <stdlib.h>


void triplePointeur(int *pointeurSurNombre);

int main(int argc, char**argv)
{
    int nombre = 5; //une variable nombre est cree dans le main, on lui affecte la valeur 5

    triplePointeur(&nombre); //on appelle la fct triplePointer, on lui envoie en parametre l'adresse de notre variable nombre
    printf("%d",nombre); /*on affiche la variable nombre, la fct a directement modifie la valeur de la variable car elle
    connaissait son adresse*/ 
    

    return 0;
}

void triplePointeur(int *pointeurSurNombre) /*la fct triplePointer recoit cette adresse dans pointeurSurNombre (a l'int de la fct
triplePointeur, on a dc un pointeur pointeurSurNombre qui contient l'adresse de la variable nombre*/

{
    *pointeurSurNombre *= 3; /*on modifie directement la variable nombre en memoire avec *pointeurSurNombre pour designer la 
    variable nombre en memoire avec *pointeurSurNombre pour designer la variable nombre*/
}
