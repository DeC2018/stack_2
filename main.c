#include <stdio.h>

typedef int Data;

#define N 8
typedef struct {
    Data a[N];
    unsigned int n;
} Stack;

void print(Stack * st)
{
    for(unsigned int i = 0; i < st->n; i++)
        printf("%d ", st->a[i]);
    printf("\n");
}

void init(Stack * st) {
    st->n = 0;
}

int main()
{
    Stack stack;
    Stack * st = &stack;

    init(st);
    print(st);

    return 0;
}