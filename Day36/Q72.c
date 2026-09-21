#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, columns, i, j;
    long long sum = 0;

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
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of all matrix elements = %lld\n", sum);

  
}
