#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes (int*pointeurHeures, int*pointeurMinutes);

int main(int argc, char**argv)
{
    int heures = 0, minutes = 90; //les valeurs heures et minutes sont crees ds le main

    decoupeMinutes(&heures, &minutes);  //on envoie a la fct decoupeMinutes l'adresse de heures et de minutes
    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int *pointeurHeures, int *pointeurMinutes) /*la fct decoupeMinutes recup ces adresses dans les pointeurs
appeles pointeurHeures et pointeursMinutes*/

{
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60;
    /*la fct decoupeMinutes modifie directement les valeurs des variables heures et minutes en memoire car elle connait 
    les adresses dans des pointeurs*/
    
}