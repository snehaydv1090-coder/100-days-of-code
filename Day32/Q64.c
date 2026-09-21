#include <stdio.h>

int main()
{
    long long number;
    int frequency[10] = {0};
    int digit, mostFrequentDigit = 0;
    int maximumFrequency = 0;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    if (number < 0)
    {
        number = -number;
    }

    if (number == 0)
    {
        frequency[0] = 1;
    }

    while (number != 0)
    {
        digit = number % 10;
        frequency[digit]++;
        number = number / 10;
    }

    for (digit = 0; digit <= 9; digit++)
    {
        if (frequency[digit] > maximumFrequency)
        {
            maximumFrequency = frequency[digit];
            mostFrequentDigit = digit;
        }
    }

    printf("Most frequently occurring digit = %d\n",
           mostFrequentDigit);
    printf("Frequency = %d\n", maximumFrequency);
}
