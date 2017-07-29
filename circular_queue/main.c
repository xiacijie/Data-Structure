#include <stdio.h>
#include "circular_queue.h"

int main() {
    circular_queue  q = create(5);
    push(q,1);
    push(q,2);
    push(q,3);
    push(q,4);
    push(q,5);
    pop(q);
    push(q,6);

    print_int(q);
    return 0;
}