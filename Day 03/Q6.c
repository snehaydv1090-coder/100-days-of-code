#include <stdio.h>

int main()
{
    int number1, number2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    printf("Before swapping: number1 = %d, number2 = %d\n",
           number1, number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("After swapping: number1 = %d, number2 = %d\n",
           number1, number2);
}
