#include <stdio.h>

int main()
{
    int first[10][10], second[10][10];
    int product[10][10] = {0};
    int rows1, columns1, rows2, columns2;
    int i, j, k;

    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    if (rows1 <= 0 || rows1 > 10 ||
        columns1 <= 0 || columns1 > 10 ||
        rows2 <= 0 || rows2 > 10 ||
        columns2 <= 0 || columns2 > 10)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }

    if (columns1 != rows2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter the first matrix:\n");

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the second matrix:\n");

    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            for (k = 0; k < columns1; k++)
            {
                product[i][j] +=
                    first[i][k] * second[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            printf("%d ", product[i][j]);
        }

        printf("\n");
    }
}
