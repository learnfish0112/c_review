#include <stdio.h>
#include "stack.h"

int main()
{
    push(10);
    push(20);
    push(30);


    while(!is_empty()) {
        printf("Pop %d from stack\n", pop());
    }
    return 0;
}

