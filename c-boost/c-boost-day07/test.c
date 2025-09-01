#include <stdio.h>
#include <string.h>

int main()
{
    /* printf("%d\n", strcmp("a", "b")); */
    char* p = "abc";
    char* q = "aef";

    if(*p == *q) {
        //*p is char
        printf("*p is equal to *q\n");
    }
    return 0;
}

