#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2*n; j++)
        {
            printf("*");
        }
     printf("\n");    
    }
}