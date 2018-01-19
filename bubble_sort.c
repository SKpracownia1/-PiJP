#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Autor: Szymon Kącki
//Data: 2017-12-08

void bubble_sort (int *t)
{
    int i, schowek, flag=1, zamian=0;

    while(flag!=0)
    {
        flag=0;
        for (i=0; i<5; i++)
        {
            if (t[i]>t[i+1])
            {
                flag=flag+1;
                schowek=t[i];
                t[i]=t[i+1];
                t[i+1]=schowek;
                zamian++;
            }
        }
    }

    printf("Tablica po posortowaniu: ");
    for(i=0; i<6; i++) printf("%i, ",t[i]);
    printf("\n");
    printf("Liczba zamian: %i\n", zamian);

}
void wypisz (int*t, int nr)
{
    int i;
    printf("Tablica %i przed posortowaniem: ", nr);
    for(i=0; i<6; i++) printf("%i,",t[i]);
    printf("\n");

}

int main()
{
    int nr=1;
    int t1[6]= {12,51,54,3,79,2}, t2[6]= {1,5,10,11,12,15}, t3[6]= {300,1,5,24,73,100};

    wypisz(t1, nr);
    bubble_sort(t1);
    nr++;
    wypisz(t2, nr);
    bubble_sort(t2);
    nr++;
    wypisz(t3, nr);
    bubble_sort(t3);

    return 0;
}
