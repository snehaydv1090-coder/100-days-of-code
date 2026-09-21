#include <stdio.h>

int main()
{
    int number, originalNumber;
    int remainder, reversedNumber = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("%d is not a palindrome number.\n", number);
    }
    else
    {
        originalNumber = number;

        while (number != 0)
        {
            remainder = number % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number = number / 10;
        }

        if (originalNumber == reversedNumber)
        {
            printf("%d is a palindrome number.\n",
                   originalNumber);
        }
        else
        {
            printf("%d is not a palindrome number.\n",
                   originalNumber);
        }
    }
}
