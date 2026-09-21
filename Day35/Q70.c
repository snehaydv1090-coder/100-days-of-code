#include <stdio.h>

int main()
{
    int array[100], rotatedArray[100];
    int size, k, i, newPosition;

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

    printf("Enter the number of right rotations: ");
    scanf("%d", &k);

    if (k < 0)
    {
        printf("Enter a non-negative rotation value.\n");
        return 0;
    }

    k = k % size;

    for (i = 0; i < size; i++)
    {
        newPosition = (i + k) % size;
        rotatedArray[newPosition] = array[i];
    }

    printf("Array after right rotation:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", rotatedArray[i]);
    }

    printf("\n");
}
