#include <stdio.h>

#define RED 1
#define GREEN 2
#define BLUE 4

int main()
{
    int i = 2;
    if(i & (BLUE | GREEN)) {
        printf("Hello or\n");
    } else {
        printf("Hello world\n");
    }
    return 0;
}

