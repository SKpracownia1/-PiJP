#include <stdio.h>
#include <stdlib.h>

//Autor: Szymon Kącki
//Data: 2017.11.06

int main()
{
    int i, licznik=0;
    float tab[6];

    for(i=0; i<6; i++)
    {printf("Podaj %d liczbe: ", i+1); scanf("%f", &tab[i]);}

    for(i=0; i<6; i++)
    {if (tab[i]>0) licznik++;}
    printf("\nliczb dodatnich jest: %d", licznik);
    return 0;
}
