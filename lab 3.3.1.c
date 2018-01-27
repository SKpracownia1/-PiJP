#include <stdio.h>
#include <stdlib.h>

//Autor: Szymon Kącki
//Data: 2017.11.06

int main()
{
    int i;
    int tab[6];

    for (i=0; i<6; i++){
        printf("Podaj %d liczbe: ", i+1); scanf("%d", &tab[i]);}

    printf("\nliczby w tablicy: ");
    for (i=0; i<6; i++){
        printf("%d ", tab[i]);}

    printf("\nliczby wypisane w odwrotnej kolejnosci: ");
    for (i=5; i>=0; i--){
        printf("%d ", tab[i]);}

    printf("\n");

    return 0;
}
