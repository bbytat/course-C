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

int main(int argc, char **argv)
{
    char string[6] = "hello";
    int lenght = 0;

    lenght = stringlenght(string);

    printf("the string %s has %d characters", string, lenght);

    return 0;
}

int stringlenght(const char* string) //la fct stringlenght fait une boucle sur le tableau string
{
    int i = 0;

    while ( string[i] != '\0') 
        i++;

    return (i);

}


