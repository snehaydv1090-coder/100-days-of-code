#include <stdio.h>

int main()
{
    int number, originalNumber, temporaryNumber;
    int digit, numberOfDigits = 0;
    int i;
    long long power, sum = 0;

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

        /* Count the number of digits */
        do
        {
            numberOfDigits++;
            temporaryNumber = temporaryNumber / 10;
        }
        while (temporaryNumber != 0);

        temporaryNumber = number;

        /* Calculate the sum of powered digits */
        do
        {
            digit = temporaryNumber % 10;
            power = 1;

            for (i = 1; i <= numberOfDigits; i++)
            {
                power = power * digit;
            }

            sum = sum + power;
            temporaryNumber = temporaryNumber / 10;
        }
        while (temporaryNumber != 0);

        if (sum == originalNumber)
        {
            printf("%d is an Armstrong number.\n",
                   originalNumber);
        }
        else
        {
            printf("%d is not an Armstrong number.\n",
                   originalNumber);
        }
    }
}
