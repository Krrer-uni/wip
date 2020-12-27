#include <stdio.h>

int main (void)
{
    int zl, gr;

    printf("podaj liczbę złoty: ");
    scanf("%d", &zl);
    printf("\npodaj liczbę groszy: ");
    scanf("%d", &gr);
    int p = 200;
    printf("    bankoty:\n");
    for(int j = 0; j < 8; j++){
        for(int i = 0; zl >= p; i++){
            zl -= p;
            if(zl < p) printf("         %d x %d zł\n", i+1, p);
        }
        switch(p)
        {
            case 200: p = 100; break;
            case 100: p = 50; break;
            case 50: p = 20; break;
            case 20: p = 10; break;
            case 10: p = 5; printf("    monety:\n"); break;
            case 5: p = 2; break;
            case 2: p = 1; break;
            default: break;

        }
    }

    p = 50;

    for(int j = 0; j < 6; j++){
        for(int i = 0; gr >= p; i++){
            gr -= p;
            if(gr < p) printf("         %d x %d gr\n", i+1, p);
        }
        switch(p)
        {
            case 50: p = 20; break;
            case 20: p = 10; break;
            case 10: p = 5; break;
            case 5: p = 2; break;
            case 2: p = 1; break;
            default: break;

        }
    }


}