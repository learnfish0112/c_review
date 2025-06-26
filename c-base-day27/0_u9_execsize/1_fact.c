/**************************************
 *
 * Book Name: C Programming: A modern approach
 * Author:learnfish
 * Content: U9 exercise 17
 *
 *************************************/

#include <stdio.h>

int fact(int test_num) {
    int res = 1;

    while(test_num) {
        res *= test_num;
        test_num--;
    }

    return res;
}

void test() {
    int test_num;

    while(1) {
        printf("test_num: ");
        scanf("%d", &test_num);
        printf("res: %d\n", fact(test_num));
    }
}

int main()
{
    test();
    return 0;
}

