#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main()
{
    person people[5];

    people[0].name = "Patrick";
    people[0].number = "+62-888-7057-777";

    people[1].name = "Joel";
    people[1].number = "+62-896-9653-8817";

    people[2].name = "Timothy";
    people[2].number = "+62-819-3671-1000";

    people[3].name = "Raymond";
    people[3].number = "+62-878-1703-6062";

    people[4].name = "Kenneth";
    people[4].number = "+62-812-3394-7686";

    string name = get_string("Name: ");
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Phone number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Phone number not found\n");
    return 1;
}
