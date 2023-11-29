//
// Created by 鱼鱼鱼 on 2023/11/29.
//


#include <stdio.h>
#include"linkstack.h"
#include<stdlib.h>

linkstack stack_create(){
    linkstack s;

    if((s = (linkstack)malloc(sizeof(listnode))) == NULL){
        printf("malloc failed\n");
        return NULL;
    }
    s->data = 0;
    s->next = NULL;

    return s;
}

int stack_push(linkstack s, data_t value){
    if(s == NULL){
        printf("s is NULL\n");
        return -1;
    }

    linkstack p;
    if((p = (linkstack)malloc(sizeof(listnode))) == NULL){
        printf("malloc failed\n");
        return -1;
    }

    p->data = value;
    p->next = s->next;
    s->next = p;

    return 0;
}

data_t stack_pop(linkstack s){
    if(s == NULL){
        printf("s is NULL\n");
        return -1;
    }

    data_t t;
    linkstack  p;

    p = s->next;
    s->next = p->next;

    t = p->data;
    free(p); //出栈释放内存
    p = NULL;
    return t;
}

int stack_empty(linkstack s){
    if (s == NULL) {
        printf("s is NULL\n");
        return -1;
    }

    return (s->next==NULL? 1 : 0);
}

data_t stack_top(linkstack s){
    return s->next->data;
}

linkstack stack_free(linkstack s){
    if(s == NULL){
        printf("s is NULL\n");
        return -1;
    }

    linkstack p = s;
    while(s != NULL){
        p = s;
        s = s->next;
        printf("free:%d\n", p->data);
        free(p);
    }
    p = NULL;
    return NULL;
}
