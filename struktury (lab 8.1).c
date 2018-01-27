#include <stdio.h>
#include <stdlib.h>

//Autor: Szymon Kącki
//Data: 2018-01-13


struct point{int x;int y;};
struct rect{struct point low_left; struct point up_right;};

struct rect makerect(struct point ll, struct point ur){
  struct rect tmp_2;
  tmp_2.up_right = ur; tmp_2.low_left = ll;
  return tmp_2;}

struct point makepoint(int x, int y){int rectinrect(struct rect r1, struct rect r);
  struct point tmp;
    tmp.x = x; tmp.y = y;
    return tmp;}

int ptinrect(struct point p, struct rect r)
{return
        p.x >= r.low_left.x
        && p.x < r.up_right.x
        && p.y >= r.low_left.y
        && p.y < r.up_right.y;}

int rectinrect(struct rect r1, struct rect r2){
  if(r1.low_left.x>=r2.low_left.x && r1.low_left.y>=r2.low_left.y && r1.up_right.x<=r2.up_right.x && r1.up_right.y<=r2.up_right.y) return 0;
  else return 1;}

int disjointrect(struct rect r1, struct rect r2){
  if (r1.low_left.x<r2.low_left.x && r1.low_left.y<r2.low_left.y
            && r1.up_right.x>r2.up_right.x && r1.up_right.y>r2.up_right.y) return 0;
    else return 1;
}

int main()
{
    struct point p, p1, p2, p3,p4;
    struct rect r, r2;
    int x,y,z,c,v,b;

    x=1;y=12;z=3;c=14;v=5;b=6;

    p=makepoint(x,y); p1=makepoint(z,c); p2=makepoint(v,b); p3=makepoint(4,7); p4=makepoint(12,24);
    r=makerect(p1,p2); r2=makerect(p3,p4);

    if(ptinrect(p,r)==0){printf("Punkt nie zawiera sie w prostokacie\n");}
    else printf("Punkt nie zawiera sie w prostokacie\n");

    if(rectinrect(r,r2)==0){printf("Prostokat r1 zawiera sie w prostokacie r2\n");}
    else printf("Prostokat r1 zawiera sie w prostokacie r2\n");
    if(disjointrect(r,r2)==0){printf("Prostokaty sa rozlaczne\n");}
    else printf("Prostokaty nie sa rozlaczne\n");

    return 0;
}
