#include <stdio.h>

int main()
{
    int a,b,c;
    
    scanf("%d",&a);
    c = a;
    b = 0;
    while(a!=0)
    {
        b *= 10;
        b += a%10;
        a /= 10;

           // printf("%d %d\n",a,b);

    }
    
   // printf("%d %d\n",c,b);
    if(c - b == 0) printf("TAK \n");
    else printf("NIE \n");
}