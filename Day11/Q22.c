#include <stdio.h>

int main()
{
    float costPrice, sellingPrice;
    float profit, loss, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (costPrice <= 0 || sellingPrice < 0)
    {
        printf("Invalid price entered.\n");
    }
    else if (sellingPrice > costPrice)
    {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;

        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (costPrice > sellingPrice)
    {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;

        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else
    {
        printf("No profit and no loss.\n");
    }

}
