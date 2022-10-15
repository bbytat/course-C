#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    printf("char : %lu octets\n", sizeof(char));
    printf("int : %lu octets\n", sizeof(int));
    printf("long : %lu ctets\n", sizeof(long));
    printf("double : %lu octets\n", sizeof(double));

    return 0;
}