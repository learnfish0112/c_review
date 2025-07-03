#include <stdio.h>

void PrintMonthlyCalendar(int month_day, int start_day_of_week) {
    //While start_day_of_week != Sun, reserve respond space
    int cur_day_of_week = start_day_of_week;
    while(start_day_of_week != 1) {
        printf("   ");
        start_day_of_week--;
    }

    for(int cur_print_day = 1; cur_print_day <= month_day; cur_print_day++) {
        printf("%2d", cur_print_day);
        if(cur_day_of_week % 7 == 0) {
            cur_day_of_week = 1;
            printf("\n");
        } else {
            if(cur_print_day == month_day) {
                printf("\n");
            } else {
                cur_day_of_week++;
                printf(" ");
            }
        }
    }

}

void Test() {
    int month_day = 31;
    int start_day_of_week = 3; //1=Sun, 7=Sat

    PrintMonthlyCalendar(month_day, start_day_of_week);
}

int main()
{
    //    Test();
    
    int month_day = 0, start_day_of_week = 0;

    printf("Enter number of days in month: ");
    scanf("%d", &month_day);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day_of_week);

    PrintMonthlyCalendar(month_day, start_day_of_week);

    return 0;
}

