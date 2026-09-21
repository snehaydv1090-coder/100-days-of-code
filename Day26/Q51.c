#include <stdio.h>

int main()
{
    int row, space, number;

    for (row = 1; row <= 5; row++)
    {
        /* Print leading spaces */
        for (space = 1; space <= 5 - row; space++)
        {
            printf(" ");
        }

        /* Print numbers */
        for (number = 6 - row; number <= 5; number++)
        {
            printf("%d", number);
        }

        printf("\n");
    }
}
