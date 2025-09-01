#include <stdio.h>

#define getchar() getc(stdin) /*function macro can have empty para list*/

int main()
{
    char ch = getchar();
    printf("%c\n", ch);
    return 0;
}

