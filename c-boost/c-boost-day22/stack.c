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
#define NOUSE_FUNC
#define ERR_RES (-100000)

struct  content {
    int content;
    struct content *next;
};
/* static int contents[STACK_SIZE]; */
/* static int *top_pointer = &contents[0]; */
struct content *top = NULL;

void test() {
    push(2);
    push(3);
    push(6);

    pop();
    pop();

    push(5);
    push(8);

    print_stack(); //8 5 2
}

void test2() {
    push(2);
    push(3);

    print_stack(); // 3 2
    pop();
    pop();
    pop(); //need hear stack empty 3 times
    print_stack(); //need nothing happen
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
    struct content *temp = NULL, *cur = top;
    while(cur) {
        temp = cur->next;
        free(cur);
        cur = temp;
    }
}

bool is_empty(void)
{
    if(top) 
        return true;
    else
        return false;
}

#ifndef NOUSE_FUNC
bool is_full(void)
{
    if(top_pointer == &contents[STACK_SIZE - 1]) 
        return true;
    else 
        return false;
}
#endif

/* void push(int i) */
bool push(int i)
{
    struct content *cur = malloc(sizeof(struct content));

    if(cur) {
        cur->content = i;
        cur->next = top;
        top = cur;
        return true;
    } else {
        printf("Stack is full!!!\n");
        return false;
    }
}

int pop(void)
{
    if(top) {
        int res = top->content;
        top = top->next;
        return res;
    } else {
        printf("Stack is empty!!!\n");
        return ERR_RES;
    }
}

void print_stack(void) {
    int val = 0;

    while(1){
        val = pop();
        if(val == ERR_RES)
            return;
        else
            printf("pop %d from stack\n", val);
    }
}

