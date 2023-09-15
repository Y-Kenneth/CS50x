// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float tax_amount = bill * (tax / 100);      // 10
    float total_1 = bill + tax_amount;          // 100 + 10 = 110
    float tip_amount = total_1 * (tip / 100.0); // 110 * (5/100) = 5.5
    float total_2 = total_1 + tip_amount;       // 110 + 5.5 = 115.5
    float half = total_2 / 2;
    return half;
}
