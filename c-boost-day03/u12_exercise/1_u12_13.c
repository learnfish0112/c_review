#include <stdio.h>

#define N (10)

double ident[N][N];
int row = N, col = N;

void print_arr(double *pident);

int main()
{
    double *p = ident[0];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j) {
                *p = 1.0;
            } else {
                *p = 0.0;
            }
            p++;
        }
    }

    print_arr(ident[0]);
    return 0;
}

void print_arr(double *pident) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%.1f ", *pident);
            pident++;
        }
        printf("\n");
    }
}
