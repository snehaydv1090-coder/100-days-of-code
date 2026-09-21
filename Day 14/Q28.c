#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long product = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
    }
    else if (n < 2)
    {
        printf("There are no even numbers from 1 to %d.\n", n);
    }
    else
    {
        printf("Even numbers from 1 to %d are:\n", n);

        for (i = 2; i <= n; i = i + 2)
        {
            printf("%d ", i);
            product = product * i;
        }

        printf("\nProduct = %llu\n", product);
    }
}
