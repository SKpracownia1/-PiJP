#include <stdio.h>
#include <stdlib.h>
//Autor: Szymon Kącki
//Data: 2017-12-09

int newton(int n, int k){
    if(n == 0 || n == k || k==0){
      return 1;
    }
    if(n > 0&&k>0&&n>=k){
      return newton(n-1, k-1) + newton(n-1,k);
    }
}


int main()
{
    int n1=0;
    int k1=0;
    do{
    if(k1>n1) printf("k musi być mniejsze badz rowne n\n\n");
    printf("Podaj n oraz k\n\n");
    scanf("%d %d",&n1,&k1);}
    while(k1>n1);
    int x=newton(n1,k1);
    printf("Dwumian Newtona dla n=%d i k=%d wynosi %d\n",n1,k1,x);
    return 0;}
