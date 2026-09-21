#include <stdio.h>

int main()
{
    long long binaryNumber, temporaryNumber;
    long long complement = 0;
    long long placeValue = 1;
    int digit, numberOfDigits = 0;
    int isValid = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    if (binaryNumber < 0)
    {
        printf("Invalid binary number.\n");
        return 0;
    }

    temporaryNumber = binaryNumber;

    /* Special case for binary number 0 */
    if (temporaryNumber == 0)
    {
        numberOfDigits = 1;
    }

    while (temporaryNumber != 0)
    {
        digit = temporaryNumber % 10;
        numberOfDigits++;

        if (digit != 0 && digit != 1)
        {
            isValid = 0;
            break;
        }

        if (digit == 0)
        {
            complement = complement + placeValue;
        }

        placeValue = placeValue * 10;
        temporaryNumber = temporaryNumber / 10;
    }

    if (isValid == 0)
    {
        printf("Invalid binary number. Use only 0 and 1.\n");
    }
    else if (binaryNumber == 0)
    {
        printf("1's complement = 1\n");
    }
    else
    {
        printf("1's complement = %0*lld\n",
               numberOfDigits, complement);
    }

}
