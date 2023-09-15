#include <stdio.h>

int main(void)
{
    int num[5] = {6, 1, 0, 9, 4};

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (num[j] < num[j + 1])
            {
                int temp;
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}
