#include <stdio.h>

int main()
{
    int number1, number2;
    int remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    /* Convert negative numbers to positive */
    if (number1 < 0)
    {
        number1 = -number1;
    }

    if (number2 < 0)
    {
        number2 = -number2;
    }

    if (number1 == 0 && number2 == 0)
    {
        printf("HCF is not defined when both numbers are zero.\n");
    }
    else
    {
        /* Euclidean algorithm */
        while (number2 != 0)
        {
            remainder = number1 % number2;
            number1 = number2;
            number2 = remainder;
        }

        printf("HCF (GCD) = %d\n", number1);
    }

}
