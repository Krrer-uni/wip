#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f%f",&a,&b,&c);
    //liniowe
    if(a==0){
        d=(-c)/b;
        printf("x = %f\n",d);
        return 0;
    }
    //delta
    d = b*b - 4*a*c;
    //delta < 0
    if(d<0)
        printf("Nie ma rozwiazan w liczbach rzeczywistych\n");
    else if(d==0) //delta = 0
    {
        d = (-b)/(2*a);
        printf("x = %f\n", d);
    }
    else //delta > 0
    {
        float ans1 = ((-b)-sqrt(d))/(2*a);
        float ans2 = ((-b)+sqrt(d))/(2*a);
        printf("x = %f lub x = %f\n", ans1, ans2);
    }
    
       
}