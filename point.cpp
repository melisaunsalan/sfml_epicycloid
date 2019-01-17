#include "point.h"



int modulo(int a,int m) {
    return (a%m+m)%m;
}

/*---------------------------------------------------------------------------------------*/


point :: point() {
    x=y=0;
}

point :: point(int k,int n) {
    this->x=cos(2*k*PI/n);
    this->y=sin(2*k*PI/n);
}

void point::set(int k, int n) {
    this->x = RADIUS+RADIUS*cos(2*k*PI/n);
    this->y = RADIUS+RADIUS*sin(2*k*PI/n);
}

point point :: operator=(point p) {
    this->x=p.x;
    this->y=p.y;
    return *this;
}
