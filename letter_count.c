#include <stdio.h>
#include <stdlib.h>

//Autor: Szymon Kącki
//Data: 2018-01-11

int main(){
	int tab1[26]={}; int tab2[26]={};
	char l;
	int i;

    FILE *input = fopen("ulysses.txt", "r");
    if (input == NULL)
    {perror("Nie znaleziono pliku do czytania"); return 1;} puts("Plik do czytania otwarty pomyslnie!");

    FILE *output = fopen("dane.dat", "w");
    if (output == NULL)
    {perror("Nie znaleziono pliku do zapisu");return 1;} puts("Plik do zapisu otwarty pomyslnie!");

	while ((l = fgetc(input)) != EOF) {
		if(l >= 'a' && l <= 'z'){tab1[l%'a']++;}
		if(l >= 'A' && l <= 'Z'){tab2[l%'A']++;}}

	l = 'a';
	for(i = 0; i<26; i++){fprintf(output, "%c - %d\n", l, tab1[i]);l++;}
	l = 'A';
	for(i = 0; i<26; i++){fprintf(output, "%c - %d\n", l, tab2[i]);l++;}

	fclose (output); fclose (input);
	return 0;}
