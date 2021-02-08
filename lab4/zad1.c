#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool match(char* wz, char* łan){
    if(wz[0]=='\0' && łan[0]=='\0' ) return true;
    switch(wz[0]){
        case '?': {
            if(łan[0] == '\0') return false;
            return match(&(wz[1]), &(łan[1]));
        }
        break;
        case '*':{
            int i = 0;
            while(!match(&(wz[1]), &(łan[0 + i]))){
                if(łan[0+i] =='\0') return false;
                i++;
            }
            return true;   
        }
        break;
        default:{
            if(wz[0]  != łan[0]) return false;
           return match(&(wz[1]), &(łan[1]));
        }
    }
}


int main(){
    char wzor[20];
    char probka[20];
    scanf("%s %s", wzor, probka);
    printf("match(%s, %s) = ", wzor, probka);
    if(match(wzor,probka)) printf("true\n");
    else printf("false\n");
}