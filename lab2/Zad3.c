#include <stdio.h>

int main(void){

    double a = 1;
    int pp = 1;
    //niezmiennik P(a,pp) -> a = 1/1 + ... + 1/pp ^ a - 1/pp <= 10;
    //D_d I dla a = 1, pp = 1 P(a,pp) -> a = 1/pp =1 ^  a - 1/pp = 0 <= 10;
    // II Jeśli dla jakiegoś a P(a,pp) ^ a <= 10; to dla P(a',pp') gdzie a' i pp' to zmiana wartości a i pp po jednym przebiegu pętli
    // zał  a<=10  a=1/1+1/2+...+1/pp  a-1/pp<=10
    // pp' = pp + 1;     a' = a + 1/pp' = a + 1/(pp+1);
    //a' - 1/pp' = a + 1/pp' - 1/pp' = a <= 10; z warunku wejścia pętli;
    //a' = a + 1/pp' = 1/1 + 1/2 + ... 1/pp + 1/pp'; 
    // więc  P(a',pp')
    while(a <= 10.0){
        pp++;
        a += 1.0/pp;

       // printf("%d %lf\n",(int)pp, a);
    }
    printf("%d\n", pp);
}