#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define STR_SIZE (1024)

int read_line(char p[], int n);

int main()
{
    char str[STR_SIZE + 1];

    read_line(str, STR_SIZE);
    printf("%s", str);
    printf("\n\n");
    printf("%c", getchar());
    return 0;
}

int read_line(char p[], int n) {
    int i = 0, ch = -1;

    while(isspace(ch = getchar())) 
        ;

    p[i++] = ch;
    while(!isspace(ch = getchar())) {
        p[i++] = ch;
        if(i == n) break;
    }
    if(ch != '\n') {
        p[i] = '\0';
    } else {
        p[i] = '\n';
    }

    return i;
}
