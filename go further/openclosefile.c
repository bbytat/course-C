#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    FILE* fichier = NULL;

    fichier = fopen("test.txt", "r+");

    if(fichier != NULL)
    {
        fputs("hi devs", fichier);
        fclose(fichier);
    }

    return 0;
}