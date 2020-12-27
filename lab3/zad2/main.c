#include <math.h>
#include <stdio.h>
#include "lib.h"

int main(void){
    double a,b,eps;
    scanf("%lf%lf%lf", &a, &b, &eps);
    printf("%lf\n", solve(a, b, eps));
}