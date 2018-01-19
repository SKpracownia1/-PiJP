#include <stdio.h>
#include <time.h>

//Autor:Szymon Kącki
//Data: 2017-12-15

int main (int argc, char *argv[])
{

    int i, ile=10;
    double x, y;

    FILE *dane;
    dane=fopen(argv[1],"w");
    srand(time(NULL));
    for(i=0; i<10; i++)
    {
        x=((i+0.0)/ile);
        y=rand()%100;
        fprintf(dane,"%.2f %.2f %.2f\n",x,x*x,y/100);
    }
    fclose(dane);

    return 0;
}
