#include <stdio.h>

int main()
{
    int matrix[10][10];
    int size, i, j;
    int isSymmetric = 1;

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
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }

        if (isSymmetric == 0)
        {
            break;
        }
    }

    if (isSymmetric == 1)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }
}
