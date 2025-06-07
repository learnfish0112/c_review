#include <stdio.h>

int main()
{
    int i = 100;
    printf("Before for, i = %d\n", i);
    for(int i = 0; i < 10; i++) {
        printf("i = %d\n", i);
    }
    printf("After for, i = %d\n", i);
    return 0;
}

