#include <stdio.h>

int NWD(int a,int b){
    int c;
    while(b!=0){
        c = b;
        b = a%b;
        a = c;
    }
    return a;
}

int main(void){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int licznik=0;
        for(int a = 1; a <=i; a++){
            for(int b = 1; b <= i; b++) if(NWD(a,b) == 1) licznik++;
        }
        printf("%d; %lf\n",i ,((double)licznik)/(i*i));
    }
}