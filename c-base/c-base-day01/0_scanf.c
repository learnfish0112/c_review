#include <stdio.h>

int main()
{
    char a, b;
    scanf("%c",&a);
    //avoid next scanf may be read '\n' issue 
    getc(stdin);
    scanf("%c",&b);
    printf("%c\n",a);
    printf("%c\n",b);
    return 0;
}

