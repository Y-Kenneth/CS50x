#include <cs50.h>
#include <math.h>
#include <stdio.h>

int every_other_digit(long credit);
int multiplyAndSum(int last_digit);
int number_of_digits(long credit);
bool isValidAmex(long credit, int numDigits);
bool isValidMasterCard(long credit, int numDigits);
bool isValidVisa(long credit, int numDigits);

int main(void)
{
    long credit = get_long("Type your credit card number: ");
    int sum_every_other_digit = every_other_digit(credit);
    int numDigits = number_of_digits(credit);
    bool amex = isValidAmex(credit, numDigits);
    bool master = isValidMasterCard(credit, numDigits);
    bool visa = isValidVisa(credit, numDigits);
    if (sum_every_other_digit % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    else if (amex == true)
    {
        printf("AMEX\n");
    }
    else if (master == true)
    {
        printf("MASTERCARD\n");
    }
    else if (visa == true)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
}

bool isValidAmex(long credit, int numDigits)
{
    int first_two_digits = credit / pow(10, 13);
    if ((numDigits == 15) && (first_two_digits == 34 || first_two_digits == 37))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isValidMasterCard(long credit, int numDigits)
{
    int first_two_digits = credit / pow(10, 14);
    if ((numDigits == 16) && (first_two_digits > 50 && first_two_digits < 56))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isValidVisa(long credit, int numDigits)
{
    if (numDigits == 13)
    {
        int first_digit = credit / pow(10, 12);
        if (first_digit == 4)
        {
            return true;
        }
    }
    else if (numDigits == 16)
    {
        int first_digit = credit / pow(10, 15);
        if (first_digit == 4)
        {
            return true;
        }
    }
    return false;
}

int number_of_digits(long credit)
{
    int count = 0;
    while (credit > 0)
    {
        count = count + 1;
        credit = credit / 10;
    }
    return count;
}

int every_other_digit(long credit)
{
    int sum = 0;
    bool isAlternateDigit = false;
    while (credit > 0)
    {
        if (isAlternateDigit == true)
        {
            int last_digit = credit % 10;
            int product = multiplyAndSum(last_digit);
            sum = sum + product;
        }
        else
        {
            int last_digit = credit % 10;
            sum = sum + last_digit;
        }
        isAlternateDigit = !isAlternateDigit;
        credit = credit / 10;
    }
    return sum;
}

int multiplyAndSum(int last_digit)
{
    int multiply = last_digit * 2;
    int sum = 0;
    while (multiply > 0)
    {
        int last_digit_multiply = multiply % 10;
        sum = sum + last_digit_multiply;
        multiply = multiply / 10;
    }
    return sum;
}