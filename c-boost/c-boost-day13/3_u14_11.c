#include <stdio.h>

#define ERROR(s, ...) ( \
    fprintf(stderr, s, __VA_ARGS__))

int main()
{
    int idx = 0;
    ERROR("Range error: index = %d\n", idx);

    return 0;
}

