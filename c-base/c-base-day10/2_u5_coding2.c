#include <stdio.h>

#define AM_MAX_HOUR (11)
#define PM_FIRST_HOUR (12)

void ChangeTo12HourSystem(int hour, int min) {
    if(hour <= AM_MAX_HOUR) {
        printf("Equivalent 12-hour time: %d:%.2d AM\n", hour, min);
    } else if(hour == PM_FIRST_HOUR){
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hour, min);
    } else {
        printf("Equivalent 12-hour time: %d:%.2d PM\n", (hour - 12), min);
    }
}

int main()
{
    int hour = 0, min = 0;

    printf("Enter a 24-hour time:");
    scanf("%d :%d", &hour, &min);//if min is 02, which can also be read correctly
    ChangeTo12HourSystem(hour, min);

    return 0;
}

