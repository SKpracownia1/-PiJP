#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Autor: Szymon K¹cki
//Data: 24.11.2017

void check(int poprawna_odp, int strzal, int kol);
void random_text_incorrect(void);
void random_text_correct(void);


int main()
{int strzal, poprawna_odp, max, kol=0;

    printf("Podaj liczbe: ");
    scanf("%d", &max);
    srand(time(NULL));
    poprawna_odp=rand()%max;
    printf("Mysle o liczbie z zakresu 0 - %d.\n", max);
    while(strzal!=poprawna_odp)
        {kol++;
         printf("Zgadnij o jakiej! To Twoja %d proba: ", kol);
         scanf("%d", &strzal);
         check(poprawna_odp, strzal, kol);}

return 0;}

void check(poprawna_odp, strzal, kol){
if(strzal>poprawna_odp){random_text_incorrect(); printf("To za duzo!\n");}
else if(strzal<poprawna_odp) {random_text_incorrect(); printf("To za malo!\n");}
else if (strzal==poprawna_odp) {random_text_correct(); printf("Wygrywasz za %d razem.\n", kol);}}

void random_text_incorrect(void)
{int number;
number=rand()%5+1;
 switch(number)
{case 1: printf("Niestety, to niepoprowna odpowiedz. "); break;
case 2: printf("Spróbuj jeszcze raz. "); break;
case 3: printf("Blisko, ale nie. "); break;
case 4: printf("Moze nastepnym razem sie uda. "); break;
case 5: printf("Cieplo, cieplo, spróbuj jeszcze raz. "); break;}}

void random_text_correct(void)
{int number;
number=rand()%5+1;
 switch(number)
{case 1: printf("Gratulacje!\n"); break;
case 2: printf("Dobra robota.\n"); break;
case 3: printf("Poprawna odpowiedz!.\n"); break;
case 4:printf("Udalo sie.\n"); break;
case 5:printf("Brawo!.\n"); break;}}
