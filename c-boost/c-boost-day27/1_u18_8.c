#include <stdio.h>

/* float *(*x(void))(int); */
void (*x(int, void(*y)(int))) (int);

int main()
{
    /* x(); */
    return 0;
}

