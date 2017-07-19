
#include "stack.h"
#include <stdio.h>
int main(){
    stack s;
    s = create(10);
    push(s,1);
    push(s,2);
    push(s,3);
    print_int(s);
    printf("\n");
    printf("%d\n",pop(s));
    print_int(s);
    printf("%d",is_empty(s));
    return 0;
}