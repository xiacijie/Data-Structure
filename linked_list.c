//
// Created by Jack Xia on 2017-07-19.

//---------------Directives--------

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"



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
    struct linked_list *new_list;
    new_list = malloc(sizeof(struct linked_list));
    new_list->head = NULL;
    new_list->size = 0;
    return new_list;
}

/* Add an element to the list*/
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

/* Append the element to the tail of the linked list*/
PUBLIC void append(struct linked_list *list,ITEM i){
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node == NULL){
        terminate("ERROR:cannot append the node to the linked list!");

    }
    new_node->data = i;

    struct node *p = list->head;


    if (list->head == NULL){
        list->head = new_node;
    }
    else{
        while (p->next){
            p = p->next;
        }
        p->next = new_node;
    }
    list->size++;

}


/*Pop the last element in the list*/
PUBLIC ITEM pop(struct linked_list *list){
    struct node *p;
    struct node *previous = NULL;
    p = list->head;
    if (p == NULL){
        terminate("ERROR:The list is empty. Cannot pop an element!");
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

PUBLIC bool is_empty(const struct linked_list *list){
    return get_size(list)==0;
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

/* Delete the element from the list*/
PUBLIC void delete(struct linked_list *list,ITEM to_delete){
    int index = search_index(list,to_delete);
    if (index == -1){
        terminate("ERROR: The element does not exist! Cannot be deleted!");

    }

    struct node *previous = NULL;
    int countdown = index;
    struct node *p = list->head;
    while (countdown){
        previous = p;
        p=p->next;
        countdown--;
    }

    if (p==list->head){
       list->head = list->head->next;
    }
    else{
        previous->next = p->next;

    }
    free(p);
    list->size--;
}

/* Clear all the element in the list*/
PUBLIC void clear(struct linked_list *list){
    while(!is_empty(list)){
        pop(list);
    }
}

/* Concatenate two  linked list and return the new linked list*/
PUBLIC struct linked_list *concatenate(struct linked_list *list1,struct linked_list *list2){
    struct linked_list *new_list =  create();
    new_list->head= list1->head;
    new_list->size += list1->size;
    struct node *p = new_list->head;
    while (p->next){
        p = p->next;
    }
    p->next = list2->head;
    new_list->size += list2->size;
    return  new_list;
}

/* Print all the elements in the list( Only int type can be printed!)*/
PUBLIC void print_int(const struct linked_list *list){
    struct node *p;
    p = list->head;
    for (;p;p=p->next){
        printf("%d->",p->data);
    }
    printf("\n");
}







