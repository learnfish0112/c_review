#include <stdio.h>
#include <stdlib.h>

int main()
{
    // fopen mode "r" or "r+", file need exist
    // fopen mode "w" or "w+" or "a" or "a+", file no need exist
    FILE* fp = fopen("a.txt", "r+");
    if(fp == NULL) {
        printf("Create or open file failed\n");
        exit(EXIT_FAILURE);
    }

    /* fclose(fp); */
    /* rename("a.txt", "b.txt"); */
    return 0;
}

