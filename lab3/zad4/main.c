#include <stdio.h>
#include "agents.h"

int main(void){
    // struct agent smith = newagent(1, 1);
    // struct agent johnson = newagent(2, 7);
    
    struct agent Bob = newagent (0 , 0) ;
    struct agent Alice = newagent (3 , 3) ;
    north (& Bob );
    south (& Alice );
    west (& Alice );
    north (& Bob );
    east (& Bob) ;
    south (& Alice );
    printf (" odleg łość = %f\n", distance (Bob , Alice ));
    return 0;
}