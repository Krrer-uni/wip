#include <stdio.h>
int main(void){
    int szuk;
    scan    f("%d", &szuk);
    int n;
    scanf("%d", &n);
    int x[n];
    for(int i = 0; i < n ; i++){
        scanf("%d", &x[i]);
    }
    int c[n];
    int p = 0;
    int k = n-1;
    for(int i = 0; i < n; i++){
        if(x[i] < szuk){
            c[p] = x[i];
            p++;
        }
        if(x[i] > szuk){
            c[k] = x[i];
            k--;
        }
    }
    while(p != k+1){
        c[p] = szuk;
        p++;
    }

    for(int i = 0; i < n ; i++){
        printf("%d", c[i]);
    }
}