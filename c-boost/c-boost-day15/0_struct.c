#include <stdio.h>

#define MAX_LEN (12)

int main()
{
    struct {
        char name[MAX_LEN + 1];
        int on_hand;
    } part1 = {};

    printf("%d", part1.on_hand);
    return 0;
}

