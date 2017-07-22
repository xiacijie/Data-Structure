//
// Created by jack on 17-7-19.
//

#ifndef HELLOWORLD_STACK_H
#define HELLOWORLD_STACK_H
//-----------------Directives---------------
#include <stdbool.h>
#define PRIVATE static
#define PUBLIC

//----------------Element type--------------
typedef int ITEM;


//----------------Struct definition---------
typedef struct stack_type *stack;


//-----------------declarations-------------

/*Error handling function*/
PRIVATE void teminate(char *message);

/* Create a new stack*/
PUBLIC stack create(ITEM size);

/* Free the memory of the stack*/
PUBLIC void destroy(stack i);

/* Clear all the elements of the stack*/
PUBLIC void make_empty(stack s);

/* Whether the stack is empty.*/
PUBLIC bool is_empty(const stack s);

/*whether the stack is full*/
PUBLIC bool is_full(const stack s);

/* Add an element into the stack*/
PUBLIC void push(stack s,ITEM i);

/* Get the last element in the stack and then delete it*/
PUBLIC ITEM pop(stack s);

/* Get the last element*/
PUBLIC ITEM peek(const stack s);

/* visualize all the elements in this stack. Only int elements can be printed!*/
PUBLIC void print_int(const stack s);

#endif //HELLOWORLD_STACK_H
