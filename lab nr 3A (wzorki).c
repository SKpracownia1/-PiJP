#include <stdio.h>
#include <stdlib.h>

//Autor: Szymon K�cki
//Data: 2017.11.06

int main()
{
    int i,j,k;
    int lg=1,ls=0;// liczba gwiazdek i liczba spacji

    for (i=1; i<5; i++){
        for(j=0; j<lg; j++)// wypisz gwiazdk� lg razy
        {putchar('*');}
        printf("\n");// przejd� do nowej linii
        lg++;}//zwi�ksz liczb� gwiazdek

    lg=4;
    printf("\n");
    for (i=1; i<5; i++){
        for(j=0; j<lg; j++)// wypisz gwiazdk� lg razy
        {putchar('*');}
        printf("\n");// przejd� do nowej linii
        lg--;}//zmniejsz liczb� gwiazdek

    lg=4;
    printf("\n");
    for (i=1; i<5; i++)
   {for(j=0; j<ls; j++)// wypisz spacj� ls razy
        {putchar(' ');}
        ls++;// zwi�ksz liczb� spacji
        {
    for(k=0; k<lg; k++)// wypisz gwiazdk� lg razy
            {putchar('*');}
            printf("\n");//przejd� do nowej linii
            lg--;}}//zmniejsz liczb� gwiazdek}

    lg=1;ls=3;
    printf("\n");
    for (i=1; i<5; i++)
   {for(j=0; j<ls; j++)// wypisz spacj� ls razy
        {putchar(' ');}
        ls--;//zmniejsz liczb� spacji
   {for(k=0; k<lg; k++)// wypisz gwiazdk� lg razy
            {putchar('*');}
            printf("\n");// przejd� do nowej linii
            lg++;}}//zwi�ksz liczb� gwiadek

    return 0;
}
