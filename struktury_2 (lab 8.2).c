#include <stdio.h>
#include <stdlib.h>


//Napisać i przetestować funkcję, która zwraca minimalny prostokąt zawierający prostokąty r1 i r2
// minspan: zwróć najmniejszy prostokąt zawierający r1 i r2

//Autor: Szymon Kącki
//Data: 2018-01-13


struct point
{int x;int y;};

struct rect{struct point low_left;struct point up_right;};

struct rect makerect(struct point ll, struct point ur){
    struct rect tmp_2;
    tmp_2.up_right = ur;
    tmp_2.low_left = ll;
    return tmp_2;}

struct point makepoint(int x, int y){
    int rectinrect(struct rect r1, struct rect r);
    struct point tmp;
    tmp.x = x;
    tmp.y = y;
    return tmp;}

struct rect minspan(struct rect r1, struct rect r2){
    struct rect min_span;

    if(r1.low_left.x<=r2.low_left.x) min_span.low_left.x=r1.low_left.x;
    else min_span.low_left.x=r2.low_left.x;

    if(r1.low_left.y<=r2.low_left.y) min_span.low_left.y=r1.low_left.y;
    else min_span.low_left.y=r2.low_left.y;

    if(r1.up_right.x>=r2.up_right.x) min_span.up_right.x=r1.up_right.x;
    else min_span.up_right.x=r2.up_right.x;

    if(r1.up_right.y>=r2.up_right.y) min_span.up_right.y=r1.up_right.y;
    else min_span.up_right.y=r2.up_right.y;

    return min_span;}


int main()
{
    struct point p1, p2, p3,p4;
    struct rect r, r2, min_span;

    p1=makepoint(4,14);p2=makepoint(5,6);p3=makepoint(4,7);p4=makepoint(12,24);
    r=makerect(p1,p2);r2=makerect(p3,p4);

    min_span=minspan(r,r2);

    printf("Wspolrzedne wierzcholkow prostokata:\n");
    printf("Lower left: (%d,%d)\n", min_span.low_left.x, min_span.low_left.y);
    printf("Lower right: (%d,%d)\n", min_span.up_right.x, min_span.low_left.y);
    printf("Upper left: (%d,%d)\n", min_span.low_left.x, min_span.up_right.y);
    printf("Upper right: (%d,%d)\n", min_span.up_right.x, min_span.up_right.y);
    return 0;
}
