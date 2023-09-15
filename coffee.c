#include <stdio.h>
#include <cs50.h>

typedef struct
{
    string product;
    int price;
}
sell;

sell get_sell(string prompt);

int main(void)
{
    sell coffee = get_sell("What kind of coffee would you like to sell? ");
    printf("%s\n", coffee.product);
    printf("%i\n", coffee.price);
}

sell get_sell(string prompt)
{
    printf("%s\n", prompt);

    sell c;
    c.product = get_string("Choose your product: ");
    c.price = get_int("Set the price (in rupiah): ");
    return c;
}