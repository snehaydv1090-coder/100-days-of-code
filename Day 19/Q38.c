#include <stdio.h>

int main()
{
    long long number, originalNumber;
    int digit;
    long long sum = 0;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    originalNumber = number;

    /* Convert a negative number to positive */
    if (number < 0)
    {
        number = -number;
    }

    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum of the digits of %lld = %lld\n",
           originalNumber, sum);

}
