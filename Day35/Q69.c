#include <stdio.h>
#include <limits.h>

int main()
{
    int array[100];
    int size, i;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size < 2 || size > 100)
    {
        printf("Enter between 2 and 100 elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] > largest)
        {
            secondLargest = largest;
            largest = array[i];
        }
        else if (array[i] > secondLargest &&
                 array[i] != largest)
        {
            secondLargest = array[i];
        }
    }

    if (secondLargest == INT_MIN)
    {
        printf("No distinct second-largest element exists.\n");
    }
    else
    {
        printf("Second-largest element = %d\n", secondLargest);
    }

}
