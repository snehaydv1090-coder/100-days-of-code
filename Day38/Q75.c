#include <stdio.h>

int main()
{
    int first[10][10], second[10][10];
    int rows, columns, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    if (rows <= 0 || rows > 10 ||
        columns <= 0 || columns > 10)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }

    printf("Enter the first matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the second matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    printf("Sum of the matrices:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", first[i][j] + second[i][j]);
        }

        printf("\n");
    }
}
