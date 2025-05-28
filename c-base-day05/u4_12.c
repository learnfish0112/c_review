#include <stdio.h>

int main()
{
    int i = 5;
    int j = 3 - 2 * i++;
    printf("%d %d\n", i, j);
    return 0;
}

