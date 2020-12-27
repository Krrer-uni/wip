#include "lib.h"

int phi(long int n){
    int ct = 0;
    for(int i = 1; i <= n; i++){
        int a = i;
        int b = n;
        while(b != 0){
            int c = b;
            b = a%b;
            a = c;
        }
        if(a == 1) ct++;
    }

    return ct;
}
