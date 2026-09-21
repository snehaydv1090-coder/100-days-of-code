#include <stdio.h>

int main()
{
    int n, i, oddNumber = 1;
    int sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("The first %d odd numbers are:\n", n);

        for (i = 1; i <= n; i++)
        {
            printf("%d ", oddNumber);
            sum = sum + oddNumber;
            oddNumber = oddNumber + 2;
        }

        printf("\nSum = %d\n", sum);
    }
}
