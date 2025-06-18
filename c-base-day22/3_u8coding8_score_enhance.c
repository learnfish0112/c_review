#include <stdio.h>

#define ROW_NUM (2)
#define COL_NUM (2)

void ReadArr(int arr[][COL_NUM]) {
    for(int i = 0; i < ROW_NUM; i++) {
        printf("Enter student %d score:  ", i + 1);
        for(int j = 0; j < COL_NUM; j++) {
            scanf("%d", &arr[i][j]);
        }
    } 
}

void PrintTotal(int arr[][COL_NUM]) {
    int row_total[ROW_NUM] = {0};
    int col_total[COL_NUM] = {0};

    for(int i = 0; i < ROW_NUM; i++) {
        for(int j = 0; j < COL_NUM; j++) {
            row_total[i] += arr[i][j];
        }
        printf("Student%d totals:      ", i);
        printf("%3d\n", row_total[i]);
        printf("Student%d avg:         ", i);
        printf("%3.1f\n", (1.0 * row_total[i] / ROW_NUM));
    } 
    printf("\n");

    int discipline_max = -1;
    int discipline_min = 101;
    for(int i = 0; i < ROW_NUM; i++) {
        //reset each discipline
        discipline_max = -1;
        discipline_min = 101;
        for(int j = 0; j < COL_NUM; j++) {
            if(arr[j][i] > discipline_max) {
                discipline_max = arr[j][i];
            }
            if(arr[j][i] < discipline_min) {
                discipline_min = arr[j][i];
            }
            col_total[i] += arr[j][i];
        }
        printf("Discipline%d avg:      ", i);
        printf("%3.1f\n", ((1.0) * col_total[i] / COL_NUM));
        printf("Discipline%d max:      ", i);
        printf("%3d\n", discipline_max);
        printf("Discipline%d min:      ", i);
        printf("%3d\n", discipline_min);
    }
}
    
void Solution() {
    int arr[ROW_NUM][COL_NUM] = {0};

    ReadArr(arr);
    PrintTotal(arr);
}

int main()
{
    Solution();
    return 0;
}

