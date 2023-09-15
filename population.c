#include <cs50.h>
#include <stdio.h>

int llamas(int start, int end);

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // TODO: Print number of years
    int years = llamas(start, end);
    printf("Years: %i\n", years);

    return 0;
}

int llamas(int start, int end)
{
    int n = start;
    int years = 0;

    // TODO: Calculate number of years until we reach threshold
    while (n < end)
    {
        n = n + (n / 3) - (n / 4);
        years++;
    }
    return years;
}