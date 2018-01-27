#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Autor: Szymon K¹cki
//Data: 2017-12-15


void konwertuj(int liczba, int system)
{
if (liczba == 0)
return;
int wynik = liczba%system;
liczba /= system;
konwertuj(liczba, system);
if (wynik < 10)
printf("%d", wynik);}

int main()
{
    int n, y, sys;
    char end_flag='N';

    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf("%d", &n);

    while (end_flag!='Y'){
    printf("Wybierz system na jaki chcesz zamienic liczbe %d: \n", n);
    printf("1) Decymalny\n");
    printf("2) Oktalny\n");
    printf("3) Binarny\n");
    scanf("%d", &y);

    switch (y){
    case 1: {sys=10;end_flag='Y';break;}
    case 2: {sys=8;end_flag='Y';break;}
    case 3: {sys=2;end_flag='Y';break;}
    default: {printf("Blad, wybierz wlasciwy system\n");break;
    }}}

    if (sys==10) printf("Wynik: %d", n);
    else konwertuj(n,sys);


    return 0;
}
