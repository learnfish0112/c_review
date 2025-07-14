#include <stdio.h>
#include <string.h>

void censor(char *p, int n);

int main()
{
    char str[] = "foo fool print foo";
    censor(str, strlen(str));
    printf("%s", str);

    return 0;
}

void censor(char *p, int n) {
    int i = 0, res = 0;

    while(i + 2 <= n ) {
        res = strncmp(p + i, "foo", 3);
        if(!res) {
            p[i] = 'x';
            p[i + 1] = 'x';
            p[i + 2] = 'x';
            i += 3;
        } else {
            i++;
        }
    }
}
