#include <stdio.h>

void ShowEvenSquare(int num) {
    int square = 0;

    for(int count = 2; (square = (count * count)) <= num; count++) {
        if(square % 2 == 0) {
            printf("%d\n", square);
        }
    }
}

void Test() {
    printf("test num: 102\n");
    ShowEvenSquare(102);
    printf("\n");
}

void Test2() {
    printf("test num: 62\n");
    ShowEvenSquare(62);
    printf("\n");
}

int main()
{
    //Test();
    //Test2();

    int num = 0;

    scanf("%d", &num);
    ShowEvenSquare(num);

    return 0;
}

