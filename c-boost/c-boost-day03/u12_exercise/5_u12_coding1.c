#include <stdio.h>

void read_one_line_then_print(void);

int main()
{
    read_one_line_then_print();

    return 0;
}

void read_one_line_then_print(void) {
    char str[128] = {0};
    int idx = 0;
    char ch;

    printf("Enter a message: ");
    while((ch = getchar()) != '\n') {
        str[idx++] = ch;
    } 

    printf("Reversal is: ");
    while(idx--) {
        printf("%c", str[idx]);
    }
    printf("\n");
}

