#include <stdio.h>

int main()
{
    long long number1, number2;
    long long first, second;
    long long remainder, hcf, lcm;

    printf("Enter two integers: ");
    scanf("%lld %lld", &number1, &number2);

    first = number1;
    second = number2;

    /* Convert negative values to positive */
    if (first < 0)
    {
        first = -first;
    }

    if (second < 0)
    {
        second = -second;
    }

    if (first == 0 || second == 0)
    {
        printf("LCM = 0\n");
    }
    else
    {
        number1 = first;
        number2 = second;

        /* Find HCF using the Euclidean algorithm */
        while (number2 != 0)
        {
            remainder = number1 % number2;
            number1 = number2;
            number2 = remainder;
        }

        hcf = number1;
        lcm = (first / hcf) * second;

        printf("LCM = %lld\n", lcm);
    }
}
