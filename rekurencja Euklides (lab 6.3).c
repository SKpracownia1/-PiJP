#include <stdio.h>

//Autor: Szymon Kącki
//Data: 2017-12-09


int NWD(int a, int b)
{
    if(b == 0) return a;
    else       return NWD(b, a % b) ;
}

int main()
{
    int a, b;

    printf("Podaj 1 liczbe: ");
    scanf("%d", &a);
    printf("Podaj 2 liczbe: ");
    scanf("%d", &b);

    printf("Najwiekszy wspolny dzielnik dla %d i %d to %d.", a, b, NWD(a, b));

    return 0;
}
