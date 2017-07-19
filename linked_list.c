//
// Created by Jack Xia on 2017-07-19.

//Directives

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"



//struct definitons
struct node{
    ITEM data;
    struct node *next;

};

struct linked_list{
    struct node *head;
    int size;
};

//Functions
PRIVATE void terminate(char *message){
    printf(message);
    exit(EXIT_FAILURE);
}

PUBLIC struct linked_list *create(){
    struct linked_list *new_list = malloc(sizeof(struct linked_list));
    new_list->head = NULL;
    new_list->size = 0;
    return new_list;

}
PUBLIC void add(struct linked_list *list,ITEM i){
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node == NULL){
        terminate("ERROR:cannot add the node to the linked list!");
    }
    new_node->data = i;
    new_node->next = list->head;
    list->head = new_node;
    list->size ++;

}


PUBLIC void print_int(struct linked_list *list){
    struct node *p;
    p = list->head;
    for (;p;p=p->next){
        printf("%d ",p->data);
    }
}







