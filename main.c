#include <stdio.h>
#include"linkstack.h"

int main() {
    linkstack s;
    if((s = stack_create()) == NULL){
        printf("s is NULL\n");
        return -1;
    }

    stack_push(s,1);
    stack_push(s,3);
    stack_push(s,5);
    stack_push(s,7);
    stack_push(s,9);

    while(!stack_empty(s)){
        printf("pop:%d\n", stack_pop(s));
    }

    s = stack_free(s);

    return 0;
}
