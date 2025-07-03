/**************************************
 *
 * Book Name: C Programming: A modern approach
 * Author:learnfish
 * Content: U9 exercise 4
 *
 *************************************/

#include <stdio.h>
#include <stdbool.h>

#define ONE_YEAR_MONTH (12)

int DayOfYear(int month, int day, int year) {
    int months_days[ONE_YEAR_MONTH + 1] = { 
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 
    };   

    int res = 0;
    bool is_leap_year = false;
    if(year % 400 == 0) {
        is_leap_year = true;
    } else if(year % 4 == 0 && year % 100 != 0) {
        is_leap_year = true;
    } else {
        is_leap_year = false;
    }

    for(int i = 1; i < month; i++) {
        res += months_days[i];
        if(i == 2 && is_leap_year == true) {
            res += 1;
        }
    }

    res += day;
    return res;
}

void test() {
    printf("%d\n", DayOfYear(1, 17, 2025));//17
}

void test2() {
    printf("%d\n", DayOfYear(2, 17, 2025));//48
}

void test3() {
    printf("%d\n", DayOfYear(3, 17, 2025));//76
}

int main()
{
    test();
    test2();
    test3();
    return 0;
}

