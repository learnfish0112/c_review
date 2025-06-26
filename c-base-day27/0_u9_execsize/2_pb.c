/**************************************
 *
 * Book Name: C Programming: A modern approach
 * Author:learnfish
 * Content: U9 exercise 19
 *
 *************************************/
#include <stdio.h>

void pb(int n) {
    if(n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

void test() {
    int test_num;

    while(1) {
        printf("test_num: ");
        scanf("%d", &test_num);
        pb(test_num);
        printf("\n");
    }
}

int main()
{
    test();
    return 0;
}

