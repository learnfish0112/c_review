/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  //bool digit_seen[10] = {false};
  int digit_count[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    ++digit_count[digit];
    n /= 10;
  }

  printf("Digit:      ");
  for(int i = 0; i <= 9; i++) {
      printf("%3d", i);
  }
  printf("\n");

  printf("Occurrences:");
  for(int i = 0; i <= 9; i++) {
      printf("%3d", digit_count[i]);
  }
  printf("\n");

  return 0;
}
