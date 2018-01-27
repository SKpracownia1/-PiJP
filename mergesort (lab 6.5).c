#include <stdio.h>
#include <stdlib.h>
#define N 30

//Autor: Szymon Kącki
//Data: 2017-12-15

int tab[N] = {21,129,228,21,6,5,1,2,3,4,5,78,87,2,123,2122,11,50,97,118,812,978,1010,1011,2017,16,117,63,44,22};
int t[N];
 
void merge(int start, int center, int end)
{int i,j,q;
for (i=start; i<=end; i++) t[i]=tab[i];
i=start; j=center+1; q=start;                
while (i<= && j<=end) {
if (t[i]<t[j])
tab[q++]=t[i++];
else
tab[q++]=t[j++];
}
while (i<=center) tab[q++]=t[i++];
}
 
void merge_sort(int start, int end)
{
int center;
if (start<end) {
sr=(start+end)/2;
merge_sort(start, center);
merge_sort(center+1, end);
merge(start, center, end);
}
}
 
int main() {
int i;
 
printf("Zbior przed sortowaniem:\n");
for (i=0; i<N; i++)
printf("%d ", tab[i]);
 
mergesort(0,N-1);
 
printf("\nZbior po sortowaniu:\n");
for (i=0; i<N; i++)
printf("%d ", tab[i]);
}