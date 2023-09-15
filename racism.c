#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char x = get_char("Bro lu hitam gak? ");

    if (x == 'y' || x == 'Y')
    {
        printf("Halo jawir\n");
    }
    else if (x == 'n' || x == 'N')
    {
        printf("Halo cina\n");
    }
}