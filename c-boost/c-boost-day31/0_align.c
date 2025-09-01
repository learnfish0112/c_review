#include <stdio.h>

int main()
{
    //show arr elem type align val
    printf("%zu\n", _Alignof(int [33]));
    return 0;
}

