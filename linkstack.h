//
// Created by 鱼鱼鱼 on 2023/11/29.
//

#ifndef LINKSTACK_LINKSTACK_H
#define LINKSTACK_LINKSTACK_H
typedef int data_t; /*定义栈中的数据类型*/
typedef struct node_t{
     data_t data; /*数据域*/
     struct node_t *next;  /*链接指针域*/
}listnode,*linkstack;   /*链栈类型定义*/

linkstack stack_create(); // 创建栈
int stack_push(linkstack s, data_t value); //进栈
data_t stack_pop(linkstack s); //出栈
int stack_empty(linkstack s); //判断栈是否为空
data_t stack_top(linkstack s); //取栈顶元素
linkstack stack_free(linkstack s); //删除栈


#endif //LINKSTACK_LINKSTACK_H
