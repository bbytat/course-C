/* Demander à l’utilisateur de saisir des notes (entre 0 et 20) et lui expliquer 
qu’une valeur hors de cet intervalle arrêtera la saisie.

Compter les notes saisies. Une fois la saisie terminée, afficher le nombre de notes saisies.*/

#include <stdio.h>

int main(int argc, char **argv)
{
    int nbNotes; // on cree un entier : nbNotes
    float note; // reels : note 

    printf("saisir les notes obtenues entre 0 et 20. Pour stopper, saisir une note hors de cet intervalle\n");

    nbNotes = 0;

    do {
        scanf("%f", &note);
        nbNotes++;
    }
    while((note >= 0)&&(note <= 20));

nbNotes --;

if(nbNotes > 0) {
    printf("vous avez saisi %d note(s)\n", nbNotes);
    }
else {
    printf("erreur : vous n'avez pas saisi de notes\n");
}

return 0;

}
    
    