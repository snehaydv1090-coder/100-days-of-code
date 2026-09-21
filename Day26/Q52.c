#include <stdio.h>

int main()
{
    int group, star, numberOfStars;

    for (group = 1; group <= 5; group++)
    {
        if (group <= 3)
        {
            numberOfStars = (2 * group) - 1;
        }
        else
        {
            numberOfStars = (2 * (6 - group)) - 1;
        }

        for (star = 1; star <= numberOfStars; star++)
        {
            printf("*\n");
        }

        /* Print a blank line between groups */
        if (group < 5)
        {
            printf("\n");
        }
    }
}
