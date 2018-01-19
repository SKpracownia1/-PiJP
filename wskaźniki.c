#include <stdio.h>
#include <stdlib.h>


int roznica(int *tab)
{int i, min, max;
min=tab[0];
max=tab[0];
for(i=0;i<10;i++)
{if (tab[i]<min) min=tab[i];
if (tab[i]>max) max=tab[i];}
return max-min;
}


int main()
{int tab1[]={2,5,7,3,1,9,7,3,5,4};
  int tab2[]={7,4,5,6,12,22,-4,-5};
  printf("%d\n", roznica(tab1));
  printf("%d\n", roznica(tab2));
}
