#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
int main(void){
    int n,a,b;
    scanf("%d", &n);
    int tab[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }
    a = INT_MIN;
    b = INT_MIN;
    for(int i = 0; i < n; i ++)
    {
        if(tab[i]> a)
        {
            b = a;
            a = tab[i];
        }
        else if(tab[i]>b && tab[i]!=a)
        {
            b = tab[i];
        };
    }
    printf("%d\n", b);
}