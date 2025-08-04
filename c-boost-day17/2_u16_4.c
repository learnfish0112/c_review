#include <stdio.h>

#define PRINT_ST(a) \
{ \
    printf("a.real = %f, a.imaginary = %f\n", a.real, a.imaginary); \
}

typedef struct complex {
    double real;
    double imaginary;
} Complex;

Complex make_complex(double real, double imaginary);
Complex add_complex(Complex real, Complex imaginary);

int main()
{
    Complex c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;
    
    Complex mc = make_complex(1.0, 2.0);
    PRINT_ST(mc);

    Complex ac = add_complex(c1, c2);
    PRINT_ST(ac);

    return 0;
}

Complex make_complex(double real, double imaginary) {
    return ((Complex){real, imaginary});
}
Complex add_complex(Complex c1, Complex c2) {
    return ((Complex){c1.real + c2.real, c1.imaginary + c2.imaginary});
}
