#include <stdio.h>

void static_local_var() {
    static int i = 0;
    printf("i = %d\n", i);
    i = 11;
    printf("i = %d\n", i);
}
int main()
{
    static_local_var();
    static_local_var();
    return 0;
}

