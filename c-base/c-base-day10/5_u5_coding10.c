#include <stdio.h>

void TransNumToLetter(double grade) {
    if(grade < 0 || grade > 100) {
        printf("Not illegal input\n");
        return;
    }
    int decade_digit = -1;
    decade_digit = (grade / 10);

    switch(decade_digit) {
    case 10: case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("F\n");
        break;
    }
}
int main()
{
    double grade = -1;
    printf("Enter numerical grade: ");
    scanf("%lf", &grade);
    TransNumToLetter(grade);
    return 0;
}

