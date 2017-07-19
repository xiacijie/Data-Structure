//
// Created by jack on 17-7-19.
//

#ifndef HELLOWORLD_STACK_H
#define HELLOWORLD_STACK_H
#include <stdbool.h>

typedef int ITEM;
typedef struct stack_type *stack;


//declarations
void teminate(char *message);
stack create(ITEM size);
void destroy(stack i);
void make_empty(stack s);
bool is_empty(const stack s);
bool is_full(const stack s);
void push(stack s,ITEM i);
ITEM pop(stack s);
void print_int(stack s);
#endif //HELLOWORLD_STACK_H
