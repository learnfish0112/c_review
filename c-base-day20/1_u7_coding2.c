/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* square2.c (Chapter 6, page 110) */
/* Prints a table of squares using a for statement */

#include <stdio.h>

#define LF_VAL (10)
#define CR_VAL (13)

int main(void)
{
    long int i;
    long int n;
    long int count = 0;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);
    //read LF
    getchar();

    for (i = 1; i <= n; i+=1) {
        printf("%20ld%20ld\n", i, i * i);

        count++;
        if(count % 24 == 0) {
            printf("Press Enter to continue ...\n");
            while(1) {
                if(getchar() == LF_VAL) {
                    break;
                } else {
                    continue;
                }
            }
        }

        //err handle
        if(i * i < 0) {
            break;
        }
    }

    return 0;
}
