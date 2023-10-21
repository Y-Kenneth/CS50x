#include <cs50.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    // FILE is a data structure defined in the stdio.h library. So FILE is not a data type.
    FILE *file;

    if (argc != 2)
    {
        printf("Improper usage.\n");
        return 1;
    }

    // Open file
    string filename = argv[1];
    file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL)
    {
        printf("No such file found\n");
        return 1;
    }

    // u stands for unsigned(only positive integers), while signed(can be positive & negative integers)
    // 8 means this is only 8 bits (a single byte) for an integer
    // _ means all that together (unsigned integers of 8 bits), is going to be its own type
    // to use uint8_t , we need to include stdint.h library
    uint8_t buffer[4];
    uint8_t signature[] = {37, 80, 68, 70}; // 37 60 68 and 70 are integers signature for PDF File

    fread(buffer, 1, 4, file);

    // Does the buffer signature match?
    for (int i = 0; i < 4; i++)
    {
        if (buffer[i] != signature[i])
        {
            printf("Likely not a PDF file\n");
            fclose(file);
            return 0;
        }
    }
    printf("Likely a PDF!\n");
    fclose(file);
    return 0;
}
