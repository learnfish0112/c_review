#include <stdio.h>

int main()
{
    int i = 8;

    // i   bit
    // 0 ^ 1 = 1
    // 1 ^ 1 = 0
    // other i bit bit
    //       1   ^  0  = 1
    //       0   ^  0  = 0
    for(int j = 0; j < 4; j++) {
        i ^=  (1 << 3);
        printf("i = %d\n", i);
    }

    return 0;
}

