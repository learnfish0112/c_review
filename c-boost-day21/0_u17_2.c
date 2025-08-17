#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(const char* str) {
    char* p = malloc(strlen(str) + 1);
    strncpy(p, str, strlen(str));
    p[strlen(str) + 1] = '\0';
    return p;
}

int main()
{
    char* p = duplicate("abc");
    printf("p = %s\n", p);
    free(p);
    p = NULL;

    char str2[] = "def";
    p = duplicate(str2);
    printf("p = %s\n", p);
    free(p);
    p = NULL;

    return 0;
}

