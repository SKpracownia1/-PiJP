#include <stdio.h>

int main()
{
    int licz1, licz2;

    printf("Podaj 1 liczbe: "); scanf("%d", &licz1);
    printf("Podaj 2 liczbe: "); scanf("%d", &licz2);
    if(licz1>licz2)
        printf("%d > %d", licz1, licz2);
    else if(licz1<licz2)
        printf("%d < %d", licz1, licz2);
    else if (licz1==licz2)
        printf("Liczby sa rowne");
    return 0;
}
