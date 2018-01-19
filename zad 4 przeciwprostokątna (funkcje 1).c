#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Autor: Szymon Kącki
//Data: 21.11.2017

double a, b, c;
int i;

double przeciwprostokatna (double a, double b)
{return sqrt(pow(a,2) + pow(b,2));}

int main()
{
    printf("Trojkat 1 \n");
    a=3;b=4;c=przeciwprostokatna(a,b);
    printf("Bok 1: %.2f\n", a); printf("Bok 2: %.2f\n", b); printf("Przeciwprostakatna: %.2f\n", c);
    printf("\n");
    printf("Trojkat 2 \n");
    a=5;b=5;c=przeciwprostokatna(a,b);
    printf("Bok a: %.2f\n", a);printf("Bok b: %.2f\n", b);printf("Przeciwprostakatna: %.2f\n", c);
    printf("Trojkat 3 \n");
    printf("\n");
    a=1;b=6;c=przeciwprostokatna(a,b);
    printf("Bok a: %.2f\n", a);printf("Bok b: %.2f\n", b);printf("Przeciwprostakatna: %.2f\n", c);
    printf("\n");

    return 0;
}