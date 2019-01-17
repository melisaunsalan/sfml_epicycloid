#ifndef mutliplication_table_h
#define mutliplication_table_h

#include <cmath>

#define PI 3.141592
#define MAX_POINTS 500
#define MULTIPLIER 2    // 2 = Cardioid 3 = Nephroid etc
#define RADIUS 400


int modulo(int a, int m);

/*---------------------------------------------------------------------------------------*/

struct point {
    double x;
    double y;
    
    point();
    point(int k, int n);     // Complex roots of unity
    void set(int k, int n);
    point operator=(point p);
    
};


#endif
