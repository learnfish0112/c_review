#include <stdio.h>

int main()
{
    int i = 0;
    float f1 = 1.5;
    float f2 = 1.5;

    i = f1 + f2;
    printf("i = %d\n", i);
    i = (int)f1 + (int)f2;
    printf("i = %d\n", i);

    return 0;
}

