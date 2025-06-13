#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    int arr[a];

    printf("%zu\n", sizeof(arr));
    return 0;
}

