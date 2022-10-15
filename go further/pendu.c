#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "pendu.h"

int main(int argc, char** argv)
{
    char lettre =0; //stock la lettre proposee par l'utilisateur
    char motSecret[] = "ROUGE"; 
    int coupsRestants = 10; 
    int nbLettres = tailleMot(motSecret);
    int *lettreTrouvee = NULL; //tableau de booleens ou chq case correspond a une lettre du mot secret
    lettreTrouvee = malloc(nbLettres *sizeof(int));
    initTableau(lettreTrouvee, nbLettres);

    printf("bienvenu dans le pendu\n\n");

    while(coupsRestants > 0 && !gagne(lettreTrouvee, nbLettres))
    {
        printf("\n\nil ne vous reste %d coups a jouer", coupsRestants);
        printf("\nquel est le mot secret?\n");

        //on affiche le mot secret en masquant les lettres non trouvees
        for(int i = 0 ; i < nbLettres ; i++)
        {
            if(lettreTrouvee[i])
                printf("%c", motSecret[i]);
            else
                printf("*");
        }
    
        printf("\nproposez une lettre : ");
        lettre = lireCaractere();

        //si ce n'est pas la bonne lettre 
        if(!rechercheLettre(lettre, motSecret, lettreTrouvee))
        {
            coupsRestants--; //on enleve un coup au joueur
        }

    }

        if(gagne(lettreTrouvee, nbLettres))
        printf("\n\ngagne le mot secret etait bien : %s \n", motSecret);

        return 0;

}

int tailleMot(char motSecret[])
{
    int nbLettre =0;
    for(int i = 0; motSecret[i] != '\0'; i++)
    {
        nbLettre++;
    }
    return nbLettre;
}

char lireCaractere()
{
    char caractere = 0;

    caractere = getchar(); //on lit le premier caractere
    caractere = toupper(caractere); // on met la lettre en MAJ

    //on lit les autres caracteres memorises un a un jusqu'au /n pour les effacer
    while(getchar() != 'n');

    return caractere;
}

void initTableau(int* lettreTrouvee, int taille)
{
    for(int i=0; i < taille; i++)
    {
        lettreTrouvee[i] = 0;
    }
}

int gagne(int *lettreTrouvee, int nbLettres)
{
    int i =0;
    int joueurGagne = 1;

    for(i = 0; i<nbLettres; i++)
    {
        if(lettreTrouvee[i] == 0)
        joueurGagne =0;
    }
    return joueurGagne;
}

int rechercheLettre(char lettre, char motSecret[], int* lettreTrouvee)
{
    int i = 0;
    int bonneLettre = 0;

    //on parcout motSecret pour verifier si la lettre proposee y est
    for (i=0; motSecret[i] != '\0'; i++)
    {
        if (lettre == motSecret[i]) //si la lettre y est
        {
            bonneLettre = 1; //on memorise que c'etait la bonne lettre
            lettreTrouvee[i] = 1; //on met a 1 la case du booleens correspondant a la lettre actuelle
        }
    }

    return bonneLettre;
}