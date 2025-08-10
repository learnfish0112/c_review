#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* i = malloc(sizeof(int));
    if(i == NULL) {
        return -1;
    }

    *i = 10;
    printf("*i = %d\n", *i);

    return 0;
}

