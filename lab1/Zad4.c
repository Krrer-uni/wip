#include <stdio.h>

int main()
{
    //1 + 2(n-1)
    int n;
    scanf("%d", &n);
    for(int i = n; i > 0; i--)
    {
        //spacje
        for(int j = i - 1; j > 0; j--)
        {
            printf(" ");            
        }
        //gwiazdki
        for(int j = 1 ; j <=1+ 2*(n - i); j ++)
        {
            printf("*");
        }
        //koniec
        printf("\n");
    }
}