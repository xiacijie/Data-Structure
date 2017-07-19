//
// Created by Jack Xia on 2017-07-19.
//

#ifndef C_PROGRAMMING_LINKED_LIST_H
#define C_PROGRAMMING_LINKED_LIST_H

#define PUBLIC
#define PRIVATE static

typedef int ITEM;
PRIVATE void terminate(char *message);
PUBLIC struct linked_list *create();
PUBLIC void add(struct linked_list *list,ITEM i);
PUBLIC void print_int(struct linked_list *list);
#endif //C_PROGRAMMING_LINKED_LIST_H
