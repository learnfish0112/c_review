#include <stdio.h>

void swap(int *p, int *q);

int main()
{
    int a = 1, b = 2;

    printf("Before swap, a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap, a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
