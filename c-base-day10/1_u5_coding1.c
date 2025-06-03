#include <stdio.h>

void PrintDigitNum(int num, int digit) {
    if(digit == -1) {
        printf("The number %d not 1 digit\n", num);
    } else if(digit == 1){
        printf("The number %d has 1 digit\n", num);
    } else {
        printf("The number %d has %d digits\n", num, digit);
    }
}
int main()
{
    int num = -1;

    printf("Enter a number:");
    scanf("%d", &num);
    if(num == 0) {
        PrintDigitNum(num, -1);
    } else if(num <= 9) {
        PrintDigitNum(num, 1);
    } else if(num <= 99) {
        PrintDigitNum(num, 2);
    } else if(num <= 999) {
        PrintDigitNum(num, 3);
    } else {
        PrintDigitNum(num, 4);
    }
    return 0;
}

