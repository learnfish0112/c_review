#include <stdio.h>

//a
char *(*p(char*));

//b
struct t {
    int a;
};
void (*f(struct t *p, long int n))(void);

//c
void insert(void);
void update(void);
void search(void);
void print(void);
void (*a[4])(void) = {
    &insert,
    &update,
    &search,
    &print
};

//d
struct t (*b[10])(int a, int b);

int main()
{
    printf("Hello world\n");
    return 0;
}

