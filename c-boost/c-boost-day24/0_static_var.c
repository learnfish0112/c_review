#include <stdio.h>

int *static_var(void) {
    static int i = 123;
    return &i;
}

int main()
{
    int *pi = static_var();
    printf("*pi = %d\n", *pi);
    
    return 0;
}

