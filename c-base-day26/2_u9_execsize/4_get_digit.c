/**************************************
 *
 * Book Name: C Programming: A modern approach
 * Author:learnfish
 * Content: U9 exercise 6
 *
 *************************************/

#include <stdio.h>

int GetDigit(int n, int k) {
    int digit = 0;

    while(k--) {
        if(n == 0) {
            return 0;
        }
        digit = n % 10;
        n /= 10;
    }

    return digit;
}

void test() {
    printf("%d\n", GetDigit(117, 1));//7
}

void test2() {
    printf("%d\n", GetDigit(117, 2));//1
}

void test3() {
    printf("%d\n", GetDigit(317, 3));//3
}

void test4() {
    printf("%d\n", GetDigit(317, 4));//0
}

int main()
{
    test();
    test2();
    test3();
    test4();
    return 0;
}

