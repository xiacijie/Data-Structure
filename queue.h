//
// Created by jack on 17-7-22.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include "stdbool.h"

#define PUBLIC
#define PRIVATE static

#define ITEM int

typedef struct queue_type *queue;

PRIVATE terminate(const char *message);
PUBLIC queue create(int size);
PUBLIC bool is_empty(const queue q);
PUBLIC bool is_full(const queue q);
PUBLIC int get_size(const queue q);
PUBLIC ITEM peek(const queue q);
PUBLIC void push(queue q, ITEM i);
PUBLIC ITEM pop(queue q);
PUBLIC void print_int(const queue q);
#endif //QUEUE_QUEUE_H
