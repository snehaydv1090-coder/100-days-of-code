#include <stdio.h>

int main()
{
    int number, remainder, reversedNumber = 0;
    int originalNumber, sign = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    if (number < 0)
    {
        sign = -1;
        number = -number;
    }

    while (number != 0)
    {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

    reversedNumber = reversedNumber * sign;

    printf("Reverse of %d = %d\n",
           originalNumber, reversedNumber);

}
