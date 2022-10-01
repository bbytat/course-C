#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    int volumeEntre = 0;
    const int MAX = 100, MIN = 0;

    printf ("quel est le volume desire ?\n");
    scanf ("%d", &volumeEntre);

    if (volumeEntre < 70)
        {
            printf ("le volume est correct\n");
        }
    else 
        {
        printf ("le volume est trop fort\n");
        }

    return 0;
}