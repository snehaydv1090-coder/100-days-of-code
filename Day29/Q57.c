#include <stdio.h>

int main()
{
    int array[100];
    int size, i;
    long long sum = 0;

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
            sum = sum + array[i];
        }

        printf("Sum of array elements = %lld\n", sum);
    }
}
