#include <stdio.h>

int main()
{
    int number1, number2, number3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    if (number1 >= number2 && number1 >= number3)
    {
        printf("%d is the largest number.\n", number1);
    }
    else if (number2 >= number1 && number2 >= number3)
    {
        printf("%d is the largest number.\n", number2);
    }
    else
    {
        printf("%d is the largest number.\n", number3);
    }

}
