#include <stdio.h>
#define LARGEUR_FENETRE 800
#define HAUTEUR_FENETRE 600
#define NB_PIXELS (LARGEUR_FENETRE * HAUTEUR_FENETRE)

int main(int argc, const char **argv)

{
    int nombreDePixels = NB_PIXELS;

    printf("%d\n", nombreDePixels);

    return 0;
}