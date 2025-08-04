#include <stdio.h>

#define PRINT_ST(a) \
{ \
    printf("a.real = %f, a.imaginary = %f\n", a.real, a.imaginary); \
}

struct st {
    double real;
    double imaginary;
};

int main()
{
    struct st c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;
    PRINT_ST(c1);    
    c1 = c2;
    PRINT_ST(c1);

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    PRINT_ST(c3); 
    return 0;
}

