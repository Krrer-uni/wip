#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int tab[n];

    tab[0] = 2;
    int fd = 1;
    printf("2\n");

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
             printf("%d\n", i);
        }

    }
}