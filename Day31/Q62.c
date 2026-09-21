#include <stdio.h>

int main()
{
    int array[100];
    int size, i;
    int temporary;

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
        }

        /* Swap elements from both ends */
        for (i = 0; i < size / 2; i++)
        {
            temporary = array[i];
            array[i] = array[size - 1 - i];
            array[size - 1 - i] = temporary;
        }

        printf("Reversed array:\n");

        for (i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }

        printf("\n");
    }
}
