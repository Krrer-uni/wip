#include <stdio.h>

int main(void)
{
    float n;
    float in, r;
    scanf("%f %f", &n, &r);
    for(float i = 1.0; i < n; i += 1.0){
        scanf("%f", &in);
         r = (r * i + in)/ (i+1);
    }
    printf("%f\n", r);
}