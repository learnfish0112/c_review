/**************************************
 *
 * Book Name: C Programming: A modern approach
 * Author:learnfish
 * Content: U9 exercise 10
 *
 *************************************/

#include <stdio.h>

double demain(double x, double y, double z) {
    double res = 0;

    if(x >= y && x <= z) {
        res = x;
    } else if(y >= x && y <= z) {
        res = y;
    } else {
        res = z;
    }

    return res;
}

void test() {
    printf("hope res 5.14, res: %f\n", demain(5.14, 1.28, 9.42));
}

void test2() {
    printf("hope res 6.28, res: %f\n", demain(3.14, 6.28, 9.42));
}

void test3() {
    printf("hope res 4.42, res: %f\n", demain(3.14, 6.28, 4.42));
}
int main()
{
    test();
    test2();
    test3();
    return 0;
}

