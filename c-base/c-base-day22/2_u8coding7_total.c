#include <stdio.h>

void ReadArr(int arr[][5]) {
    for(int i = 0; i < 5; i++) {
        printf("Enter row %d:  ", i + 1);
        for(int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    } 
}

void PrintTotal(int arr[][5]) {
    int row_total[5] = {0};
    int col_total[5] = {0};

    printf("Row totals:      ");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            row_total[i] += arr[i][j];
        }
        printf("%3d", row_total[i]);
    } 
    printf("\n");

    printf("Column totals:   ");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            col_total[i] += arr[j][i];
        }
        printf("%3d", col_total[i]);
    }
    printf("\n");
}
    
void Solution() {
    int arr[5][5] = {0};

    ReadArr(arr);
    PrintTotal(arr);
}

int main()
{
    Solution();
    return 0;
}

