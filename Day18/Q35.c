#include <stdio.h>

int main()
{
    int number, i;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Factors of %d are:\n", number);

        for (i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                printf("%d ", i);
            }
        }

        printf("\n");
    }

}
