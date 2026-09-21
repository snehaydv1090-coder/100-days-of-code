#include <stdio.h>

int main()
{
    int array[100];
    int size, i;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size <= 0 || size > 100)
    {
        printf("Invalid array size.\n");
    }
    else
    {
        printf("Enter %d elements:\n", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);

            if (array[i] > 0)
            {
                positiveCount++;
            }
            else if (array[i] < 0)
            {
                negativeCount++;
            }
            else
            {
                zeroCount++;
            }
        }

        printf("Positive elements = %d\n", positiveCount);
        printf("Negative elements = %d\n", negativeCount);
        printf("Zero elements = %d\n", zeroCount);
    }
}
