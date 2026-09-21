#include <stdio.h>

int main()
{
    long long number, originalNumber;
    long long divisor = 1;
    long long firstDigit, lastDigit, middleDigits;
    long long swappedNumber;
    int sign = 1;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    originalNumber = number;

    if (number < 0)
    {
        sign = -1;
        number = -number;
    }

    /* Find the place value of the first digit */
    while (number / divisor >= 10)
    {
        divisor = divisor * 10;
    }

    firstDigit = number / divisor;
    lastDigit = number % 10;

    middleDigits = (number % divisor) / 10;

    swappedNumber = (lastDigit * divisor)
                    + (middleDigits * 10)
                    + firstDigit;

    swappedNumber = swappedNumber * sign;

    printf("Number after swapping first and last digits = %lld\n",
           swappedNumber);

}
