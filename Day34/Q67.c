#include <stdio.h>

int main()
{
    int array[101];
    int size, element, position, i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size <= 0 || size > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter %d elements:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the insertion position: ");
    scanf("%d", &position);

    if (position < 1 || position > size + 1)
    {
        printf("Invalid position.\n");
    }
    else
    {
        for (i = size; i >= position; i--)
        {
            array[i] = array[i - 1];
        }

        array[position - 1] = element;
        size++;

        printf("Array after insertion:\n");

        for (i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }

        printf("\n");
    }

}
