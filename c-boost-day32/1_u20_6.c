#include <stdio.h>

unsigned short swap_bytes(unsigned short i);

// 6.a
/* unsigned short swap_bytes(unsigned short i) { */
/*     unsigned char first_ch = i; */
/*     unsigned char second_ch = i >> 8; // Right shift operation, left fill number decide by realize, recommand use unsigned integer. */
/*     return (unsigned short)(first_ch << 8) | second_ch; */
/* } */

// 6.b
unsigned short swap_bytes(unsigned short i) {
    return (i << 8) | (i >> 8);
}

int main()
{
    unsigned short i = 0;
    printf("Enter a hexadecimal number (up to four digits) ");
    scanf("%hx", &i);
    i = swap_bytes(i);
    printf("Number with bytes swapped: %hx\n", i);
    return 0;
}

