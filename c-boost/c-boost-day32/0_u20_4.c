#include <stdio.h>
#include "rgb.h"

// No err check
#define MK_COLOR(r,g,b) ((long) b << 16 | g << 8 | r)

int main()
{
    long rgb = MK_COLOR(29, 100, 111); 
    printf("r = %d\n", (char)rgb);
    return 0;
}

