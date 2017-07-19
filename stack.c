//
// Created by jack on 17-7-19.
//
# include <stdio.h>
# include "stack.h"
# include <stdlib.h>

#define PRIVATE static
#define PUBLIC


struct stack_type{
    ITEM *contents;
    int top;
    int capacity;
};

PRIVATE void terminate(const char * message){
    printf("%s\n",message);
    exit(EXIT_FAILURE);
}

PUBLIC stack create(ITEM capacity){
    stack  s =malloc(sizeof(struct stack_type));
    if (s == NULL){
        terminate("ERROR: stack cannot be created!");
    }
    s->contents = malloc(capacity*sizeof(ITEM));
    if (s->contents == NULL){
        free(s);
        terminate("ERROR: stack cannot be created!");
    }
    s->top = 0;
    s->capacity = capacity;

    return s;
}

PUBLIC void destroy(stack s){
    free(s->contents);
    free(s);
}

PUBLIC void make_empty(stack s){
    s->top = 0;
}

 PUBLIC bool is_empty(const stack s){
    return s->top == 0;
}

PUBLIC bool is_full(const stack s){
    return s->top == s->capacity;
}

PUBLIC void push(stack s,ITEM i){
    if (is_full(s)){
        terminate("ERROR:The stack is full!");
    }

    s->contents[s->top++] = i;
}


PUBLIC ITEM pop(stack s){
    if (is_empty(s)){
        terminate("ERROR:The stack is empty!");
    }

    ITEM to_return = s->contents[--s->top];
    return to_return;
}

PUBLIC void print_int(stack s){
    int i;
    int n = s->top;
    for (i=0;i<n;i++){
        printf("%d ",s->contents[i]);
    }

}