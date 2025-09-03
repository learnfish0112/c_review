#ifndef _LEARNFISH_
#define _LEARNFISH_
#include <stdio.h>

inline int add(int x, int y) {
    static const int a = 1;
    printf("a = %p\n", &a);
    return x + y;
}

#endif
