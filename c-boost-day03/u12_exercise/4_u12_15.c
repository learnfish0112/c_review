#include <stdio.h>
#include <stdbool.h>

#define ARR_SIZE(a) (sizeof(a)/sizeof(a[0]))

bool search(const int *p, int n, int key); 
void print_one_line(const int *p);

int main()
{
    int temperatures[7][24] = 
    {
        33, 35, 29, 24, 35, 38, 29, 24, 38, 39, 29, 24, 38, 39, 29, 24, 39, 39, 29, 24, 39, 30, 29, 24, 
        34, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 
        32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 
        32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 
        32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 
        32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 
        32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24, 32, 32, 29, 24 
    };
    int i = 0;
    int (*p)[24] = temperatures;

    /* for(int (*p)[24] = temperatures; p < temperatures + 7; p++) { */
    /*     printf("%d\n",search(p[0], 24, 32)); */
    /* } */
    printf("Please enter i val\n");
    scanf("%d", &i);
    while(i--) {
        p++;
    }
    print_one_line(p[0]);
    return 0;
}

bool search(const int *p, int n, int key) {
    while(n--) {
        if(*p == key){
            return true;
        }
        p++;
    }

    return false;
}

void print_one_line(const int *p) {
    for(int i = 0; i < 24; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}
