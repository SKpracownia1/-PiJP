#include <stdio.h>
#include <stdlib.h>

//Autor: Szymon K¹cki
//Data: 21.11.2017

int dziel=1,suma,x=1;

void perfect(int x)
{while(x>dziel)
    {if(x%dziel==0){suma=suma+dziel;}
        dziel++;}
    if (suma==x) printf("%d\n", x);

int main()
{while(x<=10000)
    {perfect(x); x++; dziel=1; suma=0;}
 return 0;}
