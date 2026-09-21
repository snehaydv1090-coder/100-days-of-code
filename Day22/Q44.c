#include <stdio.h>

int main()
{
    int numberOfTerms, i;
    double numerator, denominator;
    double sum = 1.0;

    printf("Enter the number of terms: ");
    scanf("%d", &numberOfTerms);

    if (numberOfTerms <= 0)
    {
        printf("Please enter a positive number of terms.\n");
    }
    else
    {
        printf("Series: 1");

        for (i = 2; i <= numberOfTerms; i++)
        {
            numerator = (2 * i) - 1;
            denominator = 2 * i;

            printf(" + %.0lf/%.0lf", numerator, denominator);

            sum = sum + (numerator / denominator);
        }

        printf("\nSum of the series = %.4lf\n", sum);
    }

}
