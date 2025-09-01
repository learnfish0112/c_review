#include <stdio.h>

int main()
{
   _Static_assert(__INT64_MAX__ > 1, "test static_assert"); 

    printf("Hello world\n");
    return 0;
}

