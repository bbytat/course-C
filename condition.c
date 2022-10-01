#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int choiceMenu = 0;

    printf("=== M E N U ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");
    printf("your choice ?\n");

    scanf("%d", &choiceMenu);

    switch (choiceMenu)
{
    case 1 :
        printf("you choosed the Royal Cheese\n");
        break;
    case 2 :
        printf("you choosed the Mc Deluxe\n");
        break;
    case 3 :
        printf("you choosed the Mc Bacon\n");
        break;
    case 4 :
        printf("you choosed the Big Mac\n");
        break;
    default :
        printf("you didn't choose anything\n");
        break;
    
}
    return 0;
}
