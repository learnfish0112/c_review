#include <stdio.h>

int sum_array(const int a[], int n);

int main()
{
    int arr[] = {1, 2, 3};
    int arr2[] = {3, 8, 2, 4, 6};
    int arr3[] = {3, 8, 9, 4, 6};
    int res = 0;

    res = sum_array(arr, 3);//6
    printf("%d\n", res);
    res = sum_array(arr2, 5);//23
    printf("%d\n", res);
    res = sum_array(arr3, 5);//30
    printf("%d\n", res);

    return 0;
}

int sum_array(const int a[], int n) {
    const int *p = a;
    int sum = 0;

    while(n--) {
        sum += *p;
        p++;
    } 

    return sum;
}
