#include <stdio.h>

int main()
{
    int matrix[10][10];
    int size, i, j;
    long long diagonalSum = 0;

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
        diagonalSum = diagonalSum + matrix[i][i];
    }

    printf("Sum of main diagonal elements = %lld\n",
           diagonalSum);
}
