#include <stdio.h>

/* #define STORY_TELLING() printf("hi my name is tatiana\n"); \
                        printf("i live in Paris\n"); \
                        printf("i'm 22\n");

int main(int argc, char **argv)
{
    STORY_TELLING()

    return 0;
}*/

#define MAJEUR(age) if (age >= 18) \
                    printf("vous etes majeur\n");

int main(int argc, char **argv)
{
    MAJEUR(22)

    return 0;
}
