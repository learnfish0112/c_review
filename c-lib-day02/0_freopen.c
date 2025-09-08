#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;

    if((fp = freopen("foo", "a", stdout)) == NULL) {
        printf("Err happened\n");
        exit(-1);
    }

    printf("Test freopen\n");
    fclose(fp);
    printf("After fclose(fp)\n");
    return 0;
}

