#include <stdio.h>

int main()
{
    int total = 1000;

    while(total++) {
        printf("\n");
        printf("%d\n", 9 - ((total - 1) % 10));
        printf("%d\n", (10 - (total % 10)));
        printf("%d\n", (10 - (total % 10)) % 10);
    }
    return 0;
}

