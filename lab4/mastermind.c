#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node{
    int value;
    struct node *next;
};
typedef struct node  *list;

void add_front(list *ptr, int n){
    list temp = *ptr; 
    *ptr = malloc(sizeof(struct node));
    (*ptr)->value = n;
    (*ptr)->next = temp;
}
void delete_next(list *ptr){
    list tmp = *ptr;
    // printf("deleted\n");
    *ptr = (*ptr)->next;
    free(tmp);
}
int min(int a, int b){
    if(a>=b) return b;
    else return a;
}

int main(){
    list poss = NULL;
    list history = NULL;
    for(int a = 6; a  > 0; a--){
        for(int b = 6; b  > 0 ; b--){
            for(int c = 6; c  > 0; c--){
                for(int d = 6; d  >0; d--){
                    add_front(&poss, 1000*a + 100*b + 10*c + d);
                }
            }
        }
    }
    // list test = poss;
    // while(test != NULL){
    //    printf("%d\n", test->value);
    //       test = test->next;
    // }
    bool win = false;
    while(!win){
        //pytanie
        int cand = poss->value;
        int red,white;
        int num[4];
        int color[6];
        num[0] = cand/1000;
        num[1] = (cand%1000)/100;
        num[2] = (cand%100)/10;
        num[3] = cand%10;
        printf("[%d] [%d] [%d] [%d] ?\n", num[0], num[1], num[2], num[3]);
        // printf("[%d] [&d] [%d] [%d] ?\n", num[0], num[1], num[2], num[3]);
        printf("red: ");
        scanf("%d", &red);
        printf("white: ");
        scanf("%d", &white);

        if(red == 4) break;
        
        list swp = poss;
        poss = poss->next;
        free(swp);
        // printf("flag1\n");


        // int history_entry = cand + 10000*white + 100000*red;
        // add_front(&history, history_entry);
        for(int c = 0; c < 6; c++){
                color[c]=0;
        }
        for(int c = 0; c<4; c++){
                color[num[c]-1]++;
        }




        while(poss!=NULL){
         //   printf("start\n");
            bool valid = true;

            int i = poss->value;
          //  printf("%d\n", i);
            int redp, whitep;
            redp = 0; whitep = 0;
            int i_num[4];
            int i_color[6];
            i_num[0] = i/1000;
            i_num[1] = (i%1000)/100;
            i_num[2] = (i%100)/10;
            i_num[3] = i%10;

            for(int c = 0; c < 6; c++){
                i_color[c]=0;
            }
            for(int c = 0; c<4; c++){
                if(num[c] == i_num[c])redp++;
                i_color[i_num[c]-1]++;
            }
            for(int c = 0; c < 6; c++){
                whitep += min(color[c],i_color[c]);
            }
            whitep -=redp;
          //  printf("red = %d white = %d\n", redp, whitep);
            if(red != redp || white != whitep) valid = false;
            if(!valid) delete_next(&poss);
            else break;
        //printf("end\n");
        }


        list ptr = poss;
        // if(poss != NULL) {
        //     printf("wewnątrz1\n");
        //     ptr = poss->next;
        // }
        // else {
        //     ptr = NULL;
        //     printf("wewnątrz2\n");
        // }
        printf("Pętla 2\n");
        while(ptr != NULL && ptr->next != NULL){
          //  printf("start drugiej\n");
            bool valid = true;
            int i = (ptr->next)->value;
         //   printf("%d\n", i);
            int redp, whitep;
            redp = 0; whitep = 0;
            int i_num[4];
            int i_color[6];
            i_num[0] = i/1000;
            i_num[1] = (i%1000)/100;
            i_num[2] = (i%100)/10;
            i_num[3] = i%10;

            for(int c = 0; c < 6; c++){
                i_color[c]=0;
            }
            for(int c = 0; c<4; c++){
                if(num[c] == i_num[c])redp++;
                i_color[i_num[c]-1]++;
            }
            for(int c = 0; c < 6; c++){
                whitep += min(color[c],i_color[c]);
            }
            whitep -=redp;
         //   printf("red = %d white = %d\n", redp, whitep);
            if(red != redp || white != whitep) valid = false;
            if(!valid) delete_next(&(ptr->next));
            else if((ptr->next)->next == NULL) break;
            else ptr = ptr->next;
           // printf("%p\n", ptr);

         //   printf("koniec drugiej\n");
        }
       // printf("po drugiej");
        //usuń niepotrzebne
        if (poss == NULL){
            printf("you cheated!!!\n");
            return 0;
        }
    }
    printf("I win!\n");
}