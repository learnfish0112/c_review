#include <stdio.h>

int main()
{
    int number = 0;
    int count = 3;
    int arr[3] = {0};

    printf("Enter a three-digit number:");
    scanf("%d", &number);
    while(count--) {
        arr[count] = (number % 10);
        printf("arr[%d] = %d\n", count, arr[count]);
        number /= 10;
    }
    printf("The reversal is:%d%d%d\n", arr[2], arr[1], arr[0]);

    return 0;
}

