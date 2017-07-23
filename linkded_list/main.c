#include <stdio.h>
#include "linked_list.h"
int main() {
    struct linked_list *s;
    s = create();
    append(s,0);
    add(s,1);
    add(s,4);
    add(s,5);
    add(s,1);
    add(s,7);
    add(s,10);
    print_int(s);
    return 0;
}