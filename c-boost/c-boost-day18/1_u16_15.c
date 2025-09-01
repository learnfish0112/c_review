#include <stdio.h>

typedef enum _day_of_week {
    MONDAY = 1,
    TUESDAY,
    WENSDAY,
    THRUSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} day_of_week;

int main()
{
    day_of_week wens = WENSDAY;
    enum _day_of_week thrus = THRUSDAY;

    printf("wens = %d\n", wens);
    printf("thrus = %d\n", thrus);
    return 0;
}

