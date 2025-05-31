#include <stdio.h>
//#include <stdbool.h>

int main()
{
    //C99 built-in type: _Bool 
    _Bool flag = 1;
    //C99 stdbool.h include type:bool include macro: true false 
    //bool flag = true;//g++ no need stdbool.h can build pass, gcc must need, compiler optimization

    if(flag) {
        printf("Hello world\n");
    }
    return 0;
}

