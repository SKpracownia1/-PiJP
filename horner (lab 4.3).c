#include <stdio.h>

//Szymon Kącki
//2018-01-20

void wydruk(int l){
while(l>0){
printf("%d",l%10);l=l/10;}}

int main(){
int liczba;
printf("podaj liczbe: \n");
scanf("%d", &liczba );
wydruk(liczba);
printf("\n\n");

return 0;}
