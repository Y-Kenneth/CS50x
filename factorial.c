#include <cs50.h>
#include <stdio.h>

int factorial(int number);

int main(void)
{
    int n = get_int("Type the number: ");
    printf("%i\n", factorial(n));
}

int factorial(int number)
{
    if (number == 1)
        return 1;
    else
        return number * factorial(number - 1);
}

//if we have a single-line loops or single-line conditional branches, we can get rid of all the curly braces around them, like in line 14-17
//the original one should be :

//  int factorial(int number)
//  {
//      if (number == 1)
//      {
//          return 1;
//      }
//      else
//      {
//          return number * factorial(number - 1);
//      }
//  }