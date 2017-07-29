//
// Created by jack on 29/07/17.
//

#include "circular_queue.h"
#include <stdlib.h>
#include <stdio.h>

struct circular_queue_type{
    int tail;
    int head;
    ITEM *contents;
    int size;
    int capacity;
};

//----------------------------------------------------------------------------------------------------------------
PRIVATE void terminate(const char *message){
    printf(message);
    exit(EXIT_FAILURE);
}
//----------------------------------------------------------------------------------------------------------------


PUBLIC circular_queue create(int capacity){
    circular_queue new_queue = malloc(sizeof(struct circular_queue_type));
    if (new_queue == NULL)
        terminate("ERROR: Circular Queue cannot be created!");

    new_queue->contents = malloc(capacity*sizeof(ITEM));

    if (new_queue->contents == NULL) {
        free(new_queue);
        terminate("ERROR: Contents cannot be malloced!");
    }

    new_queue->capacity = capacity;
    new_queue->size = 0;
    new_queue->head = 0;
    new_queue->tail = 0;
    return new_queue;
}
PUBLIC bool is_empty(const circular_queue q){
    return q->size == 0;
};

PUBLIC bool is_full(const circular_queue q){
    return q->size == q->capacity;
}

PUBLIC int get_size(const circular_queue q){
    return q->size;
}

PUBLIC void push(circular_queue q, ITEM i){
    if (is_full(q)){
        terminate("ERROR: The queue is full! Cannot push any more!");
    }
    q->contents[q->tail] = i;

    q->tail = (q->tail + 1) % (q->capacity);
    q->size ++;
}

PUBLIC ITEM pop(circular_queue q){
    if (is_empty(q)){
        terminate("Error: The queue is empty! Cannot pop!");
    }

    ITEM to_pop = q->contents[q->head];
    q->head = (q->head + 1) % q->capacity;
    q->size -- ;
    return to_pop;
}

PUBLIC void destroy(circular_queue q){
    free(q->contents);
    free(q);
}

PUBLIC void print_int(const circular_queue q){
    int i;
    for (i=0;i<q->size;i++)
        printf("%d ",q->contents[(q->head+i) % q->capacity ]);

}





