/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* stack1.c (Chapter 19, page 488) */
/* stack.c, change this program to build stack by pointer */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_SIZE 100

static int contents[STACK_SIZE];
static int *top_pointer = &contents[0];

void test() {
    push(2);
    push(3);
    push(6);

    pop();
    pop();

    push(5);
    push(8);

    print_stack();
}

void test2() {
    push(2);
    push(3);

    pop();
    pop();
    pop(); //hope EXIT_FAILURE
}

int main(void) {
    test();
    make_empty();
    test2();

    return 0;
}

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top_pointer = &contents[0];
}

bool is_empty(void)
{
    if(top_pointer == &contents[0]) 
        return true;
    else
        return false;
}


bool is_full(void)
{
    if(top_pointer == &contents[STACK_SIZE - 1]) 
        return true;
     else 
        return false;
}

void push(int i)
{
  if (is_full())
    terminate("Error in push: stack is full.");
  *top_pointer++ = i;
}

int pop(void)
{
  if (is_empty())
    terminate("Error in pop: stack is empty.");
  return *--top_pointer;
}

void print_stack(void) {
    while(!is_empty()) {
        printf("pop %d from stack\n", pop());
    }
}

