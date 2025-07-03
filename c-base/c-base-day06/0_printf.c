#include <stdio.h>

void print_line(char* str1, char* str2) {
    printf("%-9s%s\n", str1, str2);
}

int main()
{
    print_line("Free:", "123");
    return 0;
}

