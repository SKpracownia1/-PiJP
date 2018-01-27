//Autor: Szymon Kącki
//Data: 2017-12-09

#include <stdio.h>
#include <stdlib.h>

int potega(int a,int b)
{
if (b==0)return 1;
else
return a=a*potega(a,--b);
}

int main()
{
int n, k;
printf("Podaj n: ");
scanf("%d", &n);
printf("Podaj k: ");
scanf("%d", &k);

printf("%d^%d=%d.", n, k, potega(n,k));
return 0;
}
