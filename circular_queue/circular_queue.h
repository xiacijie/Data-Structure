//
// Created by jack on 29/07/17.
//

#ifndef CIRCULAR_QUEUE_CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_CIRCULAR_QUEUE_H

#include <stdbool.h>

#define PUBLIC
#define PRIVATE static
#define ITEM int

typedef struct circular_queue_type *circular_queue;

PRIVATE void terminate(const char *message);
PUBLIC circular_queue create(int capacity);
PUBLIC bool is_empty(const circular_queue q);
PUBLIC bool is_full(const circular_queue q);
PUBLIC int get_size(const circular_queue q);
PUBLIC void push(circular_queue q, ITEM i);
PUBLIC ITEM pop(circular_queue q);
PUBLIC void destroy(circular_queue q);
PUBLIC void print_int(const circular_queue q);


#endif //CIRCULAR_QUEUE_CIRCULAR_QUEUE_H
