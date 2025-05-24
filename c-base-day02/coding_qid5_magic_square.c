#include <stdio.h>

#define USER_ENTER_NUM_COUNT 16
#define ROW_NUM (4) 
#define COLUMN_NUM (4)
#define ARR_SIZE(a) (sizeof(a)/sizeof(int))

void print_res(int arr[], int arr_size) {
    for(int i = 0; i < arr_size; i++) {
        if(i == arr_size - 1) {
            printf("%d\n", arr[i]);
        } else {
            printf("%d ", arr[i]);
        } 
    }

}
int main()
{
    int arr[ROW_NUM][COLUMN_NUM] = {0};
    int row_sums[ROW_NUM] = {0};
    int column_sums[COLUMN_NUM] = {0};
    int diagonal_sums[2] = {0};

    printf("Enter the number form 1 to 16 in any order:\n");
    //caculate row_sums and column_sums
    for(int i = 0; i < ROW_NUM; i++) {
        for(int j = 0; j < COLUMN_NUM; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < ROW_NUM; i++) {
            row_sums[i] = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3];
    }
    for(int i = 0; i < COLUMN_NUM; i++) {
            column_sums[i] = arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i];
    }
    for(int i = 0; i < 4; i++) {
        diagonal_sums[0] += arr[i][i];
        diagonal_sums[1] += arr[4 - i - 1][4 - i - 1];
    }


    printf("row_sums:");
    print_res(row_sums, ARR_SIZE(row_sums));
    printf("column_sums:");
    print_res(column_sums, ARR_SIZE(column_sums));
    printf("diagonal_sums:");
    print_res(diagonal_sums, ARR_SIZE(diagonal_sums));
    return 0;
}

