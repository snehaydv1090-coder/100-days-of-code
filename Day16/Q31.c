#include <stdio.h>

int main()
{
    int number, remainder;
    long long binaryNumber = 0;
    long long placeValue = 1;

    printf("Enter a non-negative decimal number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a non-negative number.\n");
    }
    else if (number == 0)
    {
        printf("Binary representation = 0\n");
    }
    else
    {
        while (number > 0)
        {
            remainder = number % 2;
            binaryNumber = binaryNumber + remainder * placeValue;

            number = number / 2;
            placeValue = placeValue * 10;
        }

        printf("Binary representation = %lld\n", binaryNumber);
    }

}
