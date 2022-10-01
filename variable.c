 #include <stdio.h>
#include <stdlib.h>

int main(int argc, const char**argv)
{
    int variable = 10;

    printf("the value of the variable is %d\n", variable);
    printf("the adress of the variable is %p\n", &variable);

    int*pointeur;
    pointeur = &variable;

    printf("the adress of the pointer is %p\n*",pointeur);
    printf("the value contained in the pointer is %d\n",*pointeur);

    return 0;
}
