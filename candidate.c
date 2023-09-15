#include <stdio.h>
#include <cs50.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate get_candidate(string prompt);

int main(void)
{
    candidate candidates_array[1];
    for (int i = 0; i < 1; i++)
    {
        candidate president = get_candidate("Choose your candidate");
        printf("Candidate: %s\n", president.name);
        printf("Votes: %i\n", president.votes);
        return 0;
    }
}

candidate get_candidate(string prompt)
{
    printf("%s\n", prompt);
    candidate c;
    c.name = get_string("Enter the name: ");
    c.votes = get_int("Enter a number of vote: ");
    return c;
}
