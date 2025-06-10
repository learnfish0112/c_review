#include <stdio.h>

int main()
{
    unsigned short us = 65535;

    us += 3;
    printf("us = %d\n", us);
    //printf("sizeof(unsigned short) = %ld\n", sizeof(unsigned short));
    return 0;
}

