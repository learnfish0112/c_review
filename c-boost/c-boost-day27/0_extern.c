#include <stdio.h>

extern int j = 15;

int f(int i) {
    return i * j++;
}

int main()
{
    printf("%d\n", f(10));
    printf("Hello world\n");
    return 0;
}

