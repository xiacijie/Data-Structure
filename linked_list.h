//
// Created by Jack Xia on 2017-07-19.
//

//----------------directives-----------------------------
#include <stdbool.h>
#ifndef C_PROGRAMMING_LINKED_LIST_H
#define C_PROGRAMMING_LINKED_LIST_H

#define PUBLIC
#define PRIVATE static

//-----------------declarations--------------------------
typedef int ITEM;
PRIVATE void terminate(const char *message);
PUBLIC struct linked_list *create();
PUBLIC void add(struct linked_list *list,ITEM i);
PUBLIC void print_int(const struct linked_list *list);
PUBLIC ITEM pop(struct linked_list *list);
PUBLIC int get_size(const struct linked_list *list);
PUBLIC int search_index(const struct linked_list *list,ITEM to_search);
PUBLIC void delete(struct linked_list *list,ITEM to_delete);
PUBLIC void clear(struct linked_list *list);
PUBLIC struct linked_list *concatenate(struct linked_list *list1,struct linked_list *list2);
#endif //C_PROGRAMMING_LINKED_LIST_H
