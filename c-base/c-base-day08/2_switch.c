#include <stdio.h>

int main()
{
    //compile error is meet expectation
    switch("abc") {
    default:
        printf("aa\n");
    }
    return 0;
}

