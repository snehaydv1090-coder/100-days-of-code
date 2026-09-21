#include <stdio.h>

int main()
{
    int row, number;

    for (row = 1; row <= 5; row++)
    {
        for (number = 1; number <= row; number++)
        {
            printf("%d", number);
        }

        printf("\n");
    }
}
