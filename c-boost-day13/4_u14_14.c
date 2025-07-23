#include <stdio.h>

#define SQR(x) ((x)*(x))

int main()
{

#undef SQR
#define SQR
    int i = SQR(199);
    printf("%d\n", i);
    return 0;
}

