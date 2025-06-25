/**************************************
 *
 * Book Name: C Programming: A modern approach
 * Author:learnfish
 * Content: U9 exercise 10
 *
 *************************************/
#include <stdio.h>

#define ARR_SIZE(a) (sizeof(a)/sizeof(a[0]))

int GetArrMax(int arr[], int n) {
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}

double GetArrAvg(int arr[], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return ((double) sum / n);
}

int GetArrPostiveNumCount(int arr[], int n) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            ++count;
        }
    }

    return count;
}

void test() {
    int test_arr[] = {1, 2, 3, 4, -1};
    printf("GetArrMax:%d\n", GetArrMax(test_arr, ARR_SIZE(test_arr)));   //4 
    printf("GetArrAvg:%f\n", GetArrAvg(test_arr, ARR_SIZE(test_arr)));   //1.xx 
    printf("GetArrPostiveNumCount:%d\n", GetArrPostiveNumCount(test_arr, ARR_SIZE(test_arr)));   //4 
}

int main()
{
    test();
    return 0;
}

