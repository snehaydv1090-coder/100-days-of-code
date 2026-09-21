#include <stdio.h>

int main()
{
    int matrix[10][10];
    int size, i, j;
    int areDistinct = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    if (size <= 0 || size > 10)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }

    printf("Enter the matrix elements:\n");

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (matrix[i][i] == matrix[j][j])
            {
                areDistinct = 0;
                break;
            }
        }

        if (areDistinct == 0)
        {
            break;
        }
    }

    if (areDistinct == 1)
    {
        printf("The main diagonal elements are distinct.\n");
    }
    else
    {
        printf("The main diagonal elements are not distinct.\n");
    }
}
