#include <stdio.h>

int main()
{
    long long number, originalNumber;
    long long product = 1;
    int digit;
    int oddDigitFound = 0;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    originalNumber = number;

    if (number < 0)
    {
        number = -number;
    }

    while (number != 0)
    {
        digit = number % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
            oddDigitFound = 1;
        }

        number = number / 10;
    }

    if (oddDigitFound == 1)
    {
        printf("Product of odd digits of %lld = %lld\n",
               originalNumber, product);
    }
    else
    {
        printf("The number contains no odd digits.\n");
    }

}
