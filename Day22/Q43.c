#include <stdio.h>

int main()
{
    int number, originalNumber, temporaryNumber;
    int digit, i, factorial;
    int sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a non-negative integer.\n");
    }
    else
    {
        originalNumber = number;
        temporaryNumber = number;

        do
        {
            digit = temporaryNumber % 10;
            factorial = 1;

            for (i = 1; i <= digit; i++)
            {
                factorial = factorial * i;
            }

            sum = sum + factorial;
            temporaryNumber = temporaryNumber / 10;
        }
        while (temporaryNumber != 0);

        if (sum == originalNumber)
        {
            printf("%d is a strong number.\n", originalNumber);
        }
        else
        {
            printf("%d is not a strong number.\n",
                   originalNumber);
        }
    }

}
