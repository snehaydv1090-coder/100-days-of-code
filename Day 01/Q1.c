#include <stdio.h>

int main()
{
    int number1, number2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    sum = number1 + number2;

    printf("Sum = %d\n", sum);
}
