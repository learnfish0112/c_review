#include <stdio.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;

union {
    struct {
        WORD ax;
    } word;

    struct {
        BYTE al, ah;
    } byte;
}regs;

int main()
{
    regs.byte.ah = 0x12;
    regs.byte.al = 0x34;

    printf("ah addr: %p\n", &regs.byte.ah);
    printf("al addr: %p\n", &regs.byte.al);

    return 0;
}

