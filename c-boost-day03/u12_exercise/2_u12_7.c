#include <stdio.h>
#include <stdbool.h>

#define ARR_SIZE(a) (sizeof(a)/sizeof(a[0]))

bool search(const int *p, int n, int key); 

int main()
{
    int arr[] = {30, 40, 35, 39, 38};

    printf("find res: %d\n", search(arr, ARR_SIZE(arr), 39));
    printf("find res: %d\n", search(arr, ARR_SIZE(arr), 59));
    return 0;
}

bool search(const int *p, int n, int key) {
    while(n--) {
        if(*p == key){
            return true;
        }
        p++;
    }

    return false;
}
