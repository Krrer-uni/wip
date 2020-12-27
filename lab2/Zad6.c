#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);

    int sum[n];
    for(int i = 0; i < n; i++) sum[i]=0;
    for(int j = 0; j < n; j++){
        for(int i = 1; i < j; i++){
            if(j%i==0)sum[j]+=i;
        }
    }

    for(int i = 0; i < n; i++){
        if(sum[i] == i) printf("%d\n", sum[i]);
    }

    for(int j = 0; j < n; j++){
        for(int i = 1; i < j; i++){
            if(sum[i]==j&&sum[j]==i){
                printf("(%d,%d) = %d\n", j, i, sum[i]);
            }
        }
    }
}