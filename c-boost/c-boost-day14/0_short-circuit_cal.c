#include <stdio.h>

int main()
{
    int i = 0;
    int arr[] = {1, 2, 4, 6};

    printf("?: %d\n", (arr[++i] < arr[++i] ? arr[++i] : arr[++i]));//6
    printf("int i = %d\n", i);//3, which means that ?: also short-circuit calculation



    return 0;
}

