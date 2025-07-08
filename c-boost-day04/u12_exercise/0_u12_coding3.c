#include <stdio.h>

void read_one_line_then_print(void);

int main()
{
    read_one_line_then_print();

    return 0;
}

void read_one_line_then_print(void) {
    char str[128] = {0};
    char *p = str;

    printf("Enter a message: ");
    while((*p = getchar()) != '\n' && p < str + 128) {
        p++;
    } 

    printf("Reversal is: ");
    p--;//mv '\n'
    while(p >= str) {
        printf("%c", *p);
        p--;
    }
    printf("\n");
}

