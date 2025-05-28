#include <stdio.h>

#define EAN_LENGTH (12)

int main()
{
    int ean[EAN_LENGTH] = {0};
    
    printf("Enter the first 12 digits of an EAN:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &ean[0], &ean[1], &ean[2], &ean[3], &ean[4],
          &ean[5], &ean[6], &ean[7], &ean[8], &ean[9], &ean[10], &ean[11]);

    int first_num = ean[1] + ean[3] + ean[5] + ean[7] + ean[9] + ean[11];
    int second_num = ean[0] + ean[2] + ean[4] + ean[6] + ean[8] + ean[10];
    int temp = (first_num * 3) + second_num;
    printf("Check digit: %d\n", 9 - ((temp - 1) % 10));

    return 0;
}

