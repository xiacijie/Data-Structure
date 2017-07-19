//
// Created by Jack Xia on 2017-07-19.

//---------------Directives--------

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include <stdbool.h>


//--------struct definitions-----------
struct node{
    ITEM data;
    struct node *next;

};

struct linked_list{
    struct node *head;
    int size;
};

//-------------Functions----------------

/*Error handling function*/
PRIVATE void terminate(const char *message){
    printf(message);
    exit(EXIT_FAILURE);
}

/*Create a linked list*/
PUBLIC struct linked_list *create(){
    struct linked_list *new_list = malloc(sizeof(struct linked_list));
    new_list->head = NULL;
    new_list->size = 0;
    return new_list;
}

/* Add an element to the list*/
PUBLIC void add(struct linked_list *list,ITEM i){
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node == NULL){
        terminate("ERROR:cannot add the node to the linked list!\n");
    }
    new_node->data = i;
    new_node->next = list->head;
    list->head = new_node;
    list->size ++;
}



/*Pop the last element in the list*/
PUBLIC ITEM pop(struct linked_list *list){
    struct node *p;
    struct node *previous = NULL;
    p = list->head;
    if (p == NULL){
        terminate("ERROR:The list is empty. Cannot pop an element!\n");
    }
    while (p->next){
        previous = p;
        p = p->next;
    }
    ITEM to_return = p->data;

    // When there is only one element in the list:
    if (list->size == 1){

        list->head =NULL;

    }
    else{
        previous->next = NULL;

    }

    free(p);
    list->size -- ;
    return to_return;

}

/* Return the current size of the list*/

PUBLIC int get_size(const struct linked_list *list){
    return list->size;
}


/*Search the first element that matched and return its index. If it does not exist, return -1 */
PUBLIC int search_index(const struct linked_list *list,ITEM to_search){
    bool find = false;
    int index = 0;
    struct node *p;
    p = list->head;
    for (;p;p=p->next){
        if (p->data == to_search){
            find = true;
            break;
        }
        index ++;
    }
    if (find) return index;
    else return -1;

}



/* Print all the elements in the list( Only int type can be printed!)*/
PUBLIC void print_int(const struct linked_list *list){
    struct node *p;
    p = list->head;
    for (;p;p=p->next){
        printf("%d ",p->data);
    }
}







