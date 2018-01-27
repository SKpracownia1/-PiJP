#include <stdio.h>
#include <string.h>

//Autor: Szymon Kącki
//Data: 2018-01-20

void zmien_miejscami(char *a, char *b){
 char bufor;
    bufor = *a;
    *a = *b;
    *b = bufor;}

void permutuj(char *a, int left, int right){
 int i;
    if (left == right)printf("%s\n", a);
    else{
        for (i = left; i <= right; i++){
         zmien_miejscami((a+left), (a+i));
         permutuj(a, left+1, right);
         zmien_miejscami((a+left), (a+i));}}}


int main(){
    char napis[]="text";
    int dl = strlen(napis);
    permutuj(napis, 0, dl-1);
    return 0;}
