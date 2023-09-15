#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = "Emma";
    int length = strlen(name);

    for (int i = 0; i < length; i++)
    {
        printf("%c ", name[i]);
    }
    printf("\n");
}