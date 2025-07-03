#include <stdio.h>

int main()
{
    int i = 1, j = 2, k = 3;

    printf("i = %d, j = %d, k= %d\n", i, j, k);
    i = j = k;
    printf("i = %d, j = %d, k= %d\n", i, j, k); //3 3 3
    return 0;
}

