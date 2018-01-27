#include <stdio.h>
#include <stdlib.h>

//Autor: Szymon Kącki
//Data: 2017.11.06

int main()
{
    float tab[6];
    float min, max;
    int i;

    printf("Podaj 1 liczbe: "); scanf("%f", &tab[0]);
    min=tab[0]; max=tab[0];

    for (i=1; i<6; i++){
        printf("Podaj %d liczbe: ", i+1); scanf("%f", &tab[i]);
        if (tab[i] < min) min=tab[i];
        if (tab[i] > max) max=tab[i];}

    printf("min = %.4f\n", min); printf("max = %.4f\n", max);

    return 0;
}
