#include <stdio.h>

int main()
{
    int arr[3] = {0};

    printf("Enter a three-digit number:");
    scanf("%1d %1d %1d", &arr[0], &arr[1], &arr[2]);
    printf("The reversal is:%d%d%d\n", arr[2], arr[1], arr[0]);

    return 0;
}

