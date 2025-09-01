#include <stdio.h>

/* #define AVG(x,y) (x+y)/2 wrong*/
/* a = 1, b = 3 AVG(a+,b) should not legal, other err same as below */
#define AVG(x,y) ((x)+(y))/2) 

/* #define AREA(x,y) (x)*(y)wrong */
/* (float)(10)/AREA(2,2)) */
#define AREA(x,y) ((x)*(y))

int main()
{
    int a = 1, b = 3;
    printf("res:%f\n",(float)(10)/AREA(2,2));
    return 0;
}

