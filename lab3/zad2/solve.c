#include "lib.h"

double solve(double a, double b, double eps){
    double right = f(b);
    double left = f(a); 
    double diff = b - a;
    double c = (b+a)/2.0;

    while(diff > eps)
    {
        //check
        if(f(c)*f(b) >= 0.0) b = c;
        if(f(c)*f(a) >= 0.0) a = c;

        //update
        diff = b - a;
        c = (b+a)/2.0;
    }

    return c;
    
}