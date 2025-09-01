#ifndef INLINE_H
#define INLINE_H

static inline double testadd(double a, double b) {
    static const int i = 1;
    return a + b + i;
}

#endif
