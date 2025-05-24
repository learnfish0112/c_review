#include <stdio.h>

int main()
{
    int first = 0, second = 0, third = 0, forth = 0, fifth = 0;

    printf("Enter ISBN:");
    scanf("%d - %d - %d - %d - %d", &first, &second, &third, &forth, &fifth);
    printf("GS1 prefix:%d\n", first);
    printf("Group identifier:%d\n", second);
    printf("Publisher code:%d\n", third);
    printf("Item number:%d\n", forth);
    printf("Check digit:%d\n", fifth);

    return 0;
}

