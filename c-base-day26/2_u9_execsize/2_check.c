/**************************************
*
* Book Name: C Programming: A modern approach
* Author:learnfish
* Content: U9 exercise 2
*
*************************************/
#include <stdio.h>

int Check(int x, int y, int n) {
    if((x >= 0 && x <= n) && (y >= 0 && y <= n)) {
        return 1;
    } else {
        return 0;
    }
}

int test() {
    return Check(1, 2, 10);
}

int test2() {
    return Check(12, 2, 10);
}

int test3() {
    return Check(12, 22, 10);
}

int test4() {
    return Check(10, 2, 10);
}

int main()
{
    printf("test1() ret:%d\n", test());
    printf("test2() ret:%d\n", test2());
    printf("test3() ret:%d\n", test3());
    printf("test4() ret:%d\n", test4());
    return 0;
}

