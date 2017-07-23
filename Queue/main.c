#include <stdio.h>
#include "queue.h"
int main() {
    queue q= create(10);
    push(q,2);
    push(q,3);
    push(q,4);
    push(q,5);
    printf("%d\n",pop(q));
    printf("%d\n",peek(q));
    printf("%d\n",get_size(q));
    print_int(q);
    return 0;
}