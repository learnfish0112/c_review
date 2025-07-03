#include <stdio.h>

int *test() {
    if(0) {
        printf("can not see\n");
        return NULL;
    } else if(0) {
        printf("can not see\n");
        return NULL;
    }
}

int main()
{
    int *a = test();
    if(a != NULL) {
        printf("nb\n");
    } else {
        printf("NULL\n");
    }

    return 0;
}

