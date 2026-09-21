#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, columns;
    int i, j, diagonal;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    if (rows <= 0 || rows > 10 ||
        columns <= 0 || columns > 10)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }

    printf("Enter the matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for (diagonal = 0;
         diagonal <= rows + columns - 2;
         diagonal++)
    {
        for (i = 0; i < rows; i++)
        {
            j = diagonal - i;

            if (j >= 0 && j < columns)
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    printf("\n");
}
