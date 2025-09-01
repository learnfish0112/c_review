#include <stdio.h>
#include <stdbool.h>

#define ARR_SIZE(a) (sizeof(a)/sizeof(a[0]))

void find_two_largest(int a[], int n, int *plargest, int *psecond_largest);

int main()
{
    int arr[] = {1, 3, 5, 8, 2, 4, 6};
    /* int arr[] = {1}; */
    int largest = -1, second_largest = -1;

    find_two_largest(arr, ARR_SIZE(arr), &largest, &second_largest);
    printf("largest = %d, second_largest = %d\n", largest, second_largest);
    return 0;
}

void find_two_largest(int a[], int n, int *plargest, int *psecond_largest) {
    bool flag = false;

    for(int i = 0; i < n; i++) {
        if(a[i] > *plargest) {
            if(*plargest == *psecond_largest && flag == false) {
                *psecond_largest = a[i];
                flag = true;
            } else {
                *psecond_largest = *plargest;
                /* printf("%d\n", *plargest); */
            }
            *plargest = a[i];
        } else if(a[i] > *psecond_largest) {
            *psecond_largest = a[i];
        }
    }
}
