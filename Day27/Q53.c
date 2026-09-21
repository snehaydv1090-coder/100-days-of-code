#include <stdio.h>

int main()
{
    int row, star;

    /* Print the upper part */
    for (row = 1; row <= 5; row++)
    {
        for (star = 1; star <= (2 * row) - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    /* Print the lower part */
    for (row = 4; row >= 1; row--)
    {
        for (star = 1; star <= (2 * row) - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }
}
