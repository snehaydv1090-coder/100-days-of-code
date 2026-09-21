#include <stdio.h>

int main()
{
    int row, space, star;

    for (row = 1; row <= 5; row++)
    {
        /* Print spaces */
        for (space = 1; space < row; space++)
        {
            printf(" ");
        }

        /* Print stars */
        for (star = row; star <= 5; star++)
        {
            printf("*");
        }

        printf("\n");
    }

}
