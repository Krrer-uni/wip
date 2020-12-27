#include <stdio.h>
#include <stdbool.h>
#include "lib.h"

bool palindrom(char napis[]){
    int length = 0;
    while(napis[length] != '\0') length++;
    for(int i = 0; i < length; i++){
        if(napis[i] != napis[length-i -1]){
            return false;
        }
    }
    return true;
}