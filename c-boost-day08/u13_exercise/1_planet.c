/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* planet.c (Chapter 13, page 304) */
/* Checks planet names */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"mercury", "venus", "earth",
        "mars", "jupiter", "saturn",
        "uranus", "neptune", "pluto"};
    int i, j;

    for (i = 1; i < argc; i++) {
        for(char *k = argv[i]; *k; k++) {
            printf("%c\n",*k);
            if(isupper(*k)) *k += 32;
        }
        for (j = 0; j < NUM_PLANETS; j++)
            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
