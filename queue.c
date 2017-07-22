
// Created by jack on 17-7-22.
//

#include "queue.h"
#include "stdio.h"
#include "stdlib.h"

struct queue_type{
    int head;
    int tail;
    int size;
    ITEM *contents;
    int capacity;
};

PRIVATE terminate(const char *message){
    printf("message");
    exit(EXIT_FAILURE);
}



PUBLIC queue create(int size){
    queue new_queue = malloc(sizeof(struct queue_type));
    if (new_queue==NULL){
        terminate("Error: Fail to create a queue!");
    }

    new_queue->contents = malloc(sizeof(int)*size);
    new_queue->head = 0;
    new_queue->tail = 0;
    new_queue->size = 0;
    new_queue->capacity = size;

    return new_queue;
}

PUBLIC bool is_empty(const queue q){
    return q->head==q->tail;
}

PUBLIC bool is_full(const queue q){
    return q->tail == q->capacity-1;
}

PUBLIC int get_size(const queue q){
    return q->size;
}

PUBLIC void push(queue q, ITEM i){
    if (is_full(q)){
        terminate("Error: The queue is full. Cannot push any element!");
    }

    q->contents[q->tail++] = i;
    q->size ++;


}

PUBLIC ITEM pop(queue q){
    if (is_empty(q)){
        terminate("Error: The queue is empty. Cannot pop any element!");
    }
    ITEM to_pop = q->contents[q->head++];
    q->size--;

    return to_pop;

}

PUBLIC ITEM peek(const queue q){
    if (is_empty(q)){
        terminate("Error: The queue is empty. Cannot peek!");
    }
    ITEM to_peek = q->contents[q->head];

    return to_peek;
}

PUBLIC void print_int(const queue q){
    int i;
    for (i = q->head;i<q->tail;i++){
        printf("%d ",q->contents[i]);
    }
}
