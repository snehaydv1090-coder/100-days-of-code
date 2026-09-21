#include <stdio.h>

int main()
{
    int array[100];
    int size, i, element;
    int left, right, middle;
    int position = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size <= 0 || size > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter %d elements in ascending order:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &element);

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        middle = left + (right - left) / 2;

        if (array[middle] == element)
        {
            position = middle + 1;
            break;
        }
        else if (array[middle] < element)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    if (position == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element found at position %d.\n", position);
    }
}
