#include <stdio.h>

int main()
{
    int a, b, c;
    a = 5;

    c = (b = a + 1) - (a = 1);
    printf("c = %d\n", c); //This .c file can build pass, which is dangerous
    return 0;
}

