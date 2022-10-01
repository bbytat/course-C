#include <stdio.h> //contient les fct entree/sortie (ex: printf/scanf)
#include <stdlib.h> //contient les fct pr la conversion de données 
#include <time.h>

int main(int arg, char**argv) //main= demarrage execution prog
{
    int nombreMystere = 0, nombreEntre = 0; //int car nb entier, on initialise ac =
    const int MAX = 100, MIN = 1;

        //generation du nb aleat

    srand (time(NULL));  //rand=generer un nb aleat + renvoie à un entier; time=on inclut cette lib
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;  //boucle du prog : se repete tq le nb n'est pas trouvé

    do //do..while : repeter une portion de code un nb inconnue de fois
    {

    //on dmd le nb
    printf("what's the nb ?");
    scanf("%d", &nombreEntre); //pq d et pas f : car int (format entier)
    //comparer avec le nb mys
    
    if (nombreMystere > nombreEntre)
        printf("it's more\n");
    else if (nombreMystere < nombreEntre)
        printf("it's less\n");
    else 
        printf("congrats\n");

} while (nombreEntre != nombreMystere);

return 0;

}