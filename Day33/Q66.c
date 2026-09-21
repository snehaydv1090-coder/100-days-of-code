#include <stdio.h>

int main()
{
    int array[101];
    int size, element, i, position;

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

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    position = size;

    while (position > 0 && array[position - 1] > element)
    {
        array[position] = array[position - 1];
        position--;
    }

    array[position] = element;
    size++;

    printf("Array after insertion:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}
