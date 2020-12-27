#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    int c,n;
    scanf("%d",&c);
    if(c<10) n = c;
    else if (c < 500) n = c/2;
    else n = c/((int)log ((double)c));
    int tab[n];

    tab[0] = 2;
    int fd = 1;
    //printf("2\n");

    for(int i = 3; fd < n; i++)
    {
        bool czy = true;
        for(int j = 0;j < fd; j++)
        {
            if(i%tab[j] == 0) {
                czy = false;
                break;
            }
        }
        if(czy) 
        {
            tab[fd] = i;
            fd ++;
        }

    }
    for(int i = 0; c > 1; i++)
    {
        while(c%tab[i] == 0)
        {
            c/=tab[i];
            printf("%d %d\n",tab[i], c);
        }
    }



}