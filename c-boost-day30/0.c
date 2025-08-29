#include <stdio.h>

int main()
{
    // Following code run ok, so struct tag not keyword
    struct file_date {
        int month;
        int day;
    } file_date = {.month = 12, .day = 25};

    printf("file_date month = %d, day = %d\n", file_date.month, file_date.day);
    return 0;
}

