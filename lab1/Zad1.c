#include <stdio.h>

int main(void)
{
    char word[11] = {'A','B','R','A','K','A','D','A','B','R','A'};
    int n = 10; //licznik
    for(int i = 0; i < 11; i++)
    {
        //spacje
        for(int j = n; j < 10 ; j++)
        {
            printf(" ");
        }
        //litery
        for(int j = 0; j <= n; j++)
        {
            printf("%c ",word[j]);
        }
        //koniec
        n = n - 1;       
        printf("\n");
    }
        
}