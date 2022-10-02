#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char**argv)
{
    char chaine1[] = "texte de test", chaine2[] = "texte de test";

    if (strcmp(chaine1, chaine2) == 0) //si les chaines sont identiques
    {
        printf("les chaines sont identiques\n");
    }
    else 
    {
        printf("les chaines sont differentes\n");
    }
    
    return 0;
}