#include <stdio.h>
#include "0_inline.h"

int main()
{
    int (*x)(int, int) = add;
    printf("Hello world, add(1,2) = %d\n", x(1,2));
    printf("Hello world, add(4,3) = %d\n", x(4,3));

    return 0;
}

