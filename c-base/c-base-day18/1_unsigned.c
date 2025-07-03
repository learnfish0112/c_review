#include <stdio.h>

int main()
{
    int i = -10;
    int i2 = 10;
    unsigned int ui = 10;

    if((unsigned int)i < ui) {
        printf("i = %d\n", i);
    //    printf("i == ui\n");
    }
    if(i2 == ui) {
        printf("i2 == ui\n");
    }
    return 0;
}

