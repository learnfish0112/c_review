#include <stdio.h>

int main()
{
    int m, n, mod;

    printf("Enter two integers:");
    scanf("%d%d", &m, &n);
    while(n != 0) {
       mod = m % n;
        m = n;
        n = mod;
    }
    printf("Greatest common divisor: %d\n", m);

    return 0;
}

