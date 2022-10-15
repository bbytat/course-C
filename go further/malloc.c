#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{   
    // STEP 1 : demander une allocation de memoire avec la fct malloc
    int* memoireAllouee = NULL;
    
    memoireAllouee = malloc(sizeof(int)); //la fct malloc inscrit dans notre pointeur l'adresse qui a ete reserve 

    //STEP 2 : tester le pointeur pr verifier la valeur retournee par malloc
    if (memoireAllouee == NULL)
    {
        exit(0);
    }

    printf("quel age avez-vous?\n");
    scanf("%d", memoireAllouee);
    printf("vous avez %d ans\n", *memoireAllouee);

    //STEP 3 : liberer de la memoire avec free
    free(memoireAllouee);

return 0;
}