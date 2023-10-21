#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = 28;
    int b = 50;
    int *c = &a;

    *c = 14;
    c = &b;
    *c = 25;

    printf("a has the value of %i, located at %p\n", a, &a);
    printf("b has the value of %i, located at %p\n", b, &b);
    printf("c has the value of %p, located at %p\n", c, &c);
}
