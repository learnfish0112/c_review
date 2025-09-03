#include <stdio.h>

int main()
{
    printf("Hello world, %s %s\n", __DATE__, __TIME__);
#error "hi"
    return 0;
}

