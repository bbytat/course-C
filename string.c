#include <string.h> //lib qui fournit bcp de fonctions dédiees auc calculs sur les chaines
#include <stdlib.h>
#include <stdio.h>

/*int main(int argc, char**argv)

{
    char string[] = "hello"; //fct qui calcule la longueur d'une chaine
    int stringlenght = 0;

    stringlenght = strlen(string);

    printf("the string %s has %d characters", string, stringlenght);

    return 0;
}*/

int stringlenght(const char* string);

int main(int argc, char**argv)
{
    char string[] = "hello";
    int lenght = 0;

    lenght = stringlenght(string);

    printf("the string %s has %d characters", string, lenght);

    return 0;
}

int stringlenght(const char* string) //la fct stringlenght fait une boucle sur le tableau string
{
    int charactersNumber = 0;
    char actualCharacter =0;

    do
    {
        actualCharacter = string[charactersNumber]; //la fct stringlenght stock les caracteres un par un dans actualcharacter
        charactersNumber++; //a chq passage ds la boucle, on ajoute 1 au nb de char qu'on a analysé

    } while (actualCharacter != '\n');

    charactersNumber--; //on retire un caractere de long pr ne pas compter le caractere

    return charactersNumber;    
}

