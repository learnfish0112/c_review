#include <stdio.h>
#include <stdlib.h>

int compint(const void* p, const void* q) {
    return *(int*)p - *(int*)q;
}
int main()
{
    int arr[] = {3,4,56,1,2};
    qsort(arr, 5, sizeof(arr[0]), compint);

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

