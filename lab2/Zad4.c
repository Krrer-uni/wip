#include <stdio.h>
#include <math.h>

int main (void){
    double n = 1;
    for(double i = 0; i < 1000; i++){
        n *= exp(log(i+1)/1000);
    }
    printf("%lf\n",n);
}