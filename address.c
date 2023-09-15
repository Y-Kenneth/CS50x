#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%p\n", s);      //address of a string is just at its first character
    printf("%p\n\n", &s[0]);  //&s[0] means the first character in "s", so the address should be the same as above
    printf("%p\n", &s[1]);  //&s[1] means the second character in "s", etc.
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

//char *__ is equal to "string" in CS50 library