#include <stdio.h>

int main()
{
    int array[100];
    int size, i, element;
    int position = -1;

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

        printf("Enter the element to search for: ");
        scanf("%d", &element);

        for (i = 0; i < size; i++)
        {
            if (array[i] == element)
            {
                position = i + 1;
                break;
            }
        }

        if (position != -1)
        {
            printf("%d was found at position %d.\n",
                   element, position);
        }
        else
        {
            printf("%d was not found in the array.\n", element);
        }
    }
}
