#include <stdio.h>
int main(void){
    int n = 6;
    int tab[6] = {6, 2, 0, 3, 5, 6};
    for ( int i = n; i > 0; i--){
        for ( int j = 0; j < i; j++){
            if( tab [j + 1] < tab[j]){
                int tmp = tab [j];
                tab [j] = tab [j + 1];
                tab [j + 1] = tmp;
            }   
        }
    }
    for(int i = 0; i < n; i++) printf("%d ", tab[i]);
}
warunek w 6 lini powinien być j+1< i