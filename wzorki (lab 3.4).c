#include <stdio.h>
#include <stdlib.h>

//Autor: Szymon K¹cki
//Data: 2017.11.06

int main()
{
    int i,j,k;
    int lg=1,ls=0;// liczba gwiazdek i liczba spacji

    for (i=1; i<5; i++){
        for(j=0; j<lg; j++)// wypisz gwiazdkê lg razy
        {putchar('*');}
        printf("\n");// przejdŸ do nowej linii
        lg++;}//zwiêksz liczbê gwiazdek

    lg=4;
    printf("\n");
    for (i=1; i<5; i++){
        for(j=0; j<lg; j++)// wypisz gwiazdkê lg razy
        {putchar('*');}
        printf("\n");// przejdŸ do nowej linii
        lg--;}//zmniejsz liczbê gwiazdek

    lg=4;
    printf("\n");
    for (i=1; i<5; i++)
   {for(j=0; j<ls; j++)// wypisz spacjê ls razy
        {putchar(' ');}
        ls++;// zwiêksz liczbê spacji
        {
    for(k=0; k<lg; k++)// wypisz gwiazdkê lg razy
            {putchar('*');}
            printf("\n");//przejdŸ do nowej linii
            lg--;}}//zmniejsz liczbê gwiazdek}

    lg=1;ls=3;
    printf("\n");
    for (i=1; i<5; i++)
   {for(j=0; j<ls; j++)// wypisz spacjê ls razy
        {putchar(' ');}
        ls--;//zmniejsz liczbê spacji
   {for(k=0; k<lg; k++)// wypisz gwiazdkê lg razy
            {putchar('*');}
            printf("\n");// przejdŸ do nowej linii
            lg++;}}//zwiêksz liczbê gwiadek

    return 0;
}
