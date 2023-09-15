#include <cs50.h>
#include <stdio.h>

int collatz(int n);

int main(void)
{
    int n = get_int("Type a number to see how many steps it takes to get back to '1': ");
    printf("%i\n", collatz(n));
    return 0;
}

int collatz(int n)
{
    if(n == 1)
    {
        return 0;
    }
    else if((n % 2) == 0)
    {
        return 1 + collatz(n/2);
    }
    else
    {
        return 1 + collatz(3*n + 1);
    }
}
