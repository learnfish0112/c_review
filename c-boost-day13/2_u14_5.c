#include <stdio.h>
#include "string.h"

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main()
{
    char s[5];
    int i = 0;

    strcpy(s,"abcd");
    putchar(TOUPPER(s[++i]));//D
    printf("\n%d\n",i);//3

    i = 0;
    strcpy(s,"0123");
    putchar(TOUPPER(s[++i]));//2
    printf("\n%d\n",i);//2
    return 0;
}

