#include <stdio.h>

int main()
{
    printf("%d\n", ~(~0 << 3));

    return 0;
}

