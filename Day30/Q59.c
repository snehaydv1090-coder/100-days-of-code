#include <stdio.h>

int main()
{
    int array[100];
    int size, i;
    int evenCount = 0;
    int oddCount = 0;

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

            if (array[i] % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }

        printf("Number of even elements = %d\n", evenCount);
        printf("Number of odd elements = %d\n", oddCount);
    }
}
