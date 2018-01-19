#include <stdio.h>

int x,y;
int *wx;
int *wy;

void swap(int wx,int wy)
{
    int temp;
    temp=wx;
    wx=wy;
    wy=temp;
    printf("Liczba x po przestawieniu: %d, adres: %d\n", x, wx);
    printf("Liczba y po przestawieniu: %d, adres: %d\n", y, wy);
}

int main()
{
    printf("podaj x: ");
    scanf("%d",&x);
    printf("podaj y: ");
    scanf("%d",&y);
    wx=&x;
    wy=&y;
    printf("Liczba x przed przestawieniem: %d, adres: %d\n", x, wx);
    printf("Liczba y przed przestawieniem: %d, adres: %d\n", y, wy);
    swap(wx, wy);

    return 0;
}
