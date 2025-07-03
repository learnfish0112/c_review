#include <stdio.h>

int main()
{
    int i = 6;
    int j = i += i;
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

