#include <stdio.h>

int main()
{
    struct t;
    };
    /* struct t arr[10]; wrong, arr can not have incomplete type*/

    struct t {
        int a;
        int b;
    };
    struct t arr[10];

   struct t t1 = {1, 2};
   printf("t1.a = %d\n", t1.a);
    return 0;
}

