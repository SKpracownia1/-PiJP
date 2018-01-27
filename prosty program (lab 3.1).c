#include <stdio.h>
#include <math.h>

int main()
{

    double pocz, krok, kon, x;
    printf("Podaj wartość początkową:\n");
    scanf("%lf", &pocz);
    printf("Podaj wartość końcową :\n");
    scanf("%lf", &kon);
    printf("Podaj krok:\n");
    scanf("%lf", &krok);

for(x=pocz; x<=kon;x+=krok)
    printf("%6.4lf|%9.4lf\n",x,sqrt(x));
    return 0;
}
