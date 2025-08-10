#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
}Node;

int main()
{
    Node* n = malloc(sizeof(Node));
    n->value = 1;

    printf("n->value = %d\n", n->value);
    return 0;
}

