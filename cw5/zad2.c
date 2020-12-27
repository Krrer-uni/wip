#include <stdio.h>
struct node {
    int value;
    struct node *next;
};

typedef struct node *list;

void dopisz_niemalejaco(list *ptr, int i){
    struct node n1;
    n1.value = i;
    n1.next = NULL;
    if(*ptr == NULL) *ptr = &n1;
    else if ( (*ptr)->value > i){
        n1.next = *ptr;
        *ptr = &n1;
    }else {
        list ptr_next = &((*ptr)->next);
        dopisz_niemalejaco(&ptr_next, i);
    } 
}

void usun(list *ptr, int i){
    if((*ptr)->next == NULL) return;
    if((*ptr)->value == i){
        list tmp = (*ptr)->next;
        free((*ptr));
        *ptr = tmp;
        usun(&tmp, i);
    }
    
}

void dopisz_na_koniec(list *ptr, int i){
    struct node n1;
    n1.next = NULL;
    n1.value = i;
    if(*ptr == NULL) *ptr = &n1;
    else if((*ptr)->next == NULL) (*ptr)->next = &n1;
    else {
        list tmp = (*ptr)->next;
        dopisz_na_koniec(&tmp , i);
    }
}

void odwroc(list *ptr){
    
}