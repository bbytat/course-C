#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv)

{
int age = 10;
int *pointeurSurAge = &age; // = "je creer mon pointeur"
pointeurSurAge = &age; //= "pointeurSurAge" contient l'adresse de la variable age 

printf("%d", *pointeurSurAge); 
    /*on met * devant pointeurSurAge, donc on accède a la variable age, si on 
    avait mis un &, on aurait obtenu l'adresse ou se trouve le pointeur

    age =   je veux la valeur de la variable age
    &age =  je veux l'adresse ou se trouve la variable age
    pointeurSurAge =    je veux la valeur de pointeurSurAge
    *pointeurSurAge =   je veux la valeur de la variable qui se trouve a l'adresse 
                        contenue dans pointeurSurAge*/

return 0;
}