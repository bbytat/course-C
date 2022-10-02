/* Déclarer un tableau d'entiers de 100 éléments et l'initialiser avec les nombres 0 à 99 (utiliser une boucle !).

Afficher le tableau en séparant les valeurs par des virgules (limiter à 10 valeurs par lignes).

Résultat attendu :

   0,  1,  2,  3,  4,  5,  6,  7,  8,  9
  10, 11, 12, 13, 14, 15, 16, 17, 18, 19
  20, 21, 22, 23, 24, 25, 26, 27, 28, 29
  30, 31, 32, 33, 34, 35, 36, 37, 38, 39
  40, 41, 42, 43, 44, 45, 46, 47, 48, 49
  50, 51, 52, 53, 54, 55, 56, 57, 58, 59
  60, 61, 62, 63, 64, 65, 66, 67, 68, 69
  70, 71, 72, 73, 74, 75, 76, 77, 78, 79
  80, 81, 82, 83, 84, 85, 86, 87, 88, 89
  90, 91, 92, 93, 94, 95, 96, 97, 98, 99 */
  
#include <stdio.h>

int main(int argc, char**argv)
{
    const int TAB_SIZE = 100;
    const int LINE_SIZE = 10;
    int tab[TAB_SIZE];

    for (int i = 0 ; i < TAB_SIZE ; i++) tab[i] = i; //remplir le tableau avec les nombres de 0 à TAB_SIZE

    for (int i = 0 ; i < TAB_SIZE ; i++) //afficher le tableau en limitant à LINE_SIZE valeurs par ligne
    {
        if ((i+1) % LINE_SIZE == 0) // si arrive en fin de ligne :
        { 
            printf("%2d\n", tab[i]); // ajout d un saut de ligne
        }
        else {
            printf("%2d,", tab[i]); // sinon ajout d une virgule 
        }
    }

    return 0;
}