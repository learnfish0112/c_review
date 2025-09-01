#include <stdio.h>

#define PRINT_ST(a) \
{ \
    printf("a.real = %f, a.imaginary = %f\n", a.real, a.imaginary); \
}

struct complex {
    double real;
    double imaginary;
};

struct complex make_complex(double real, double imaginary);
struct complex add_complex(struct complex real, struct complex imaginary);

int main()
{
    struct complex c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;
    
    struct complex mc = make_complex(1.0, 2.0);
    PRINT_ST(mc);

    struct complex ac = add_complex(c1, c2);
    PRINT_ST(ac);

    return 0;
}

struct complex make_complex(double real, double imaginary) {
    return ((struct complex){real, imaginary});
}
struct complex add_complex(struct complex c1, struct complex c2) {
    return ((struct complex){c1.real + c2.real, c1.imaginary + c2.imaginary});
}
