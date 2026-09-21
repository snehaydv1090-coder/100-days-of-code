#include <stdio.h>

int main()
{
    int numberOfTerms, i;
    double numerator, denominator;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &numberOfTerms);

    if (numberOfTerms <= 0)
    {
        printf("Please enter a positive number of terms.\n");
    }
    else
    {
        printf("Series: ");

        for (i = 1; i <= numberOfTerms; i++)
        {
            numerator = 2 * i;
            denominator = (4 * i) - 1;

            printf("%.0lf/%.0lf", numerator, denominator);

            sum = sum + (numerator / denominator);

            if (i < numberOfTerms)
            {
                printf(" + ");
            }
        }

        printf("\nSum of the series = %.4lf\n", sum);
    }
}
