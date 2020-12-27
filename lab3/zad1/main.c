#include <stdio.h>
#include <stdbool.h>
#include "lib.h"
int main(void){
    int n;
    scanf("%d", &n);
    char napis[n];
    scanf("%s",napis);
    bool czy = palindrom(napis);
    
    if(czy){
        printf("TAK\n");
    } else printf("NIE\n");
    
}