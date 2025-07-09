#include <stdio.h>

int main()
{
    char str[9] = "June 14";
    int arr[9] = {1,2};

    if(str[8] == arr[8]) {
        /* printf("str[8] = %d, arr[8] = %d\n", str[8], arr[8]); */
        printf("str[8] == arr[8] is true\n");
    }

    printf("over");
    return 0;
}

