#include <stdio.h>
#include <math.h>


int find1(int x, int n, int t[n])
{
    for(int i = 0; i < n; i ++)
    {
        if(t[i] == x){
            return (i+1);
        }
    }
    return -1;
}
//Potrzeba maksymalnie n iteracji, bo wtedy sprawdzimy wszystkie komórki tablicy; P(i,n) -> i - 1 < n;

int find2(int x , int n, int t[n])
{
    int k = n;
    int p = 0;
    int c;
    while(p<=k)
    {
        c = (k+p)/2;
        if(t[c] == x){
            return c;
        }
        else if(t[c] > x){
            p = sr + 1;
        }
        else {
            k = sr - 1;
        }
    }
    return -1;
}

int main (void){
    int n, m;
    scanf("%d %d",&m , &n);
    int a[m];
    int b[n];
    for(int i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    int c[m+n];
    int m1 = 0;
    int n1 = 0;
    for(int i = 0; i < m + n; i++){
        if(m1 == m)
        {
            c[i]=b[n1];
            n1++;
            continue;
        }
        if(n1 == n)
        {
            c[i]=a[m1];
            m1++;
            continue;
        }

        if(a[m1] <= b[n1]){
            c[i] = a[m1];
            m1++;
        }
        else 
        {
            c[i] = b[n1];
            n1++;
        }
    }
}