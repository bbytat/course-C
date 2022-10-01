#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/*  int main(int argc, char**argv)
{
    char chaine[6];

    chaine[0] = 's';
    chaine[1] = 'a';
    chaine[2] = 'l';
    chaine[3] = 'u';
    chaine[4] = 't';
    chaine[5] = '\0';

    printf("‰s", chaine);

    return0;

} OU ALORS  :

int main(int argc, char**argv)
{
    char chaine* = "salut"; //on cree une variable de type char
    printf("%s", chaine);

    return 0;
}*/

int main(int agrc, char**argv)
{
    char name[100];

    printf("what's your name?");
    scanf("%s", name);
    printf("hi %s, nice to meet you", name);

    return 0;
}