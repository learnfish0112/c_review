#include <stdio.h>

#define CONCAT(x,y) (x##y)

int main()
{
    int CONCAT(i,1) = 1, CONCAT(i,2) = 2;
    /* int CONCAT(i,CONCAT(i,1)); nested call macro which include ## or # operator, wrong*/
    /*compiler cannot recognize iCONCAT macro*/
    printf("i1 = %d, i2 = %d\n", i1, i2);
    return 0;
}

