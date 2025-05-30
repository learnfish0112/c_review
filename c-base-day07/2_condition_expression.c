#include <stdio.h>

int main()
{
    char* str1 = "hello";
    char* str2 = "world";
    printf("condition expression: %s\n", (1 == 2)?(str1):(str2));
    //next line cannot build pass
    //printf("condition expression: %d\n", (1 == 2)?(1.5):(str2));
    return 0;
}

