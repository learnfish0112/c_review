#include <stdio.h>

#define NELEMS(a) (sizeof(a)/sizeof(a[0]))

int main()
{
    int arr[] = {1,2,3,4,5};
    printf("arr elem : %lld\n", NELEMS(arr));
    return 0;
}

