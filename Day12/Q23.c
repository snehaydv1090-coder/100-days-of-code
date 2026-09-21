#include <stdio.h>

int main()
{
    int lateDays;
    float fine;

    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays < 0)
    {
        printf("Invalid number of days.\n");
    }
    else if (lateDays == 0)
    {
        printf("No fine. The book was returned on time.\n");
    }
    else if (lateDays <= 5)
    {
        fine = lateDays * 2;
        printf("Library fine = Rs. %.2f\n", fine);
    }
    else if (lateDays <= 10)
    {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("Library fine = Rs. %.2f\n", fine);
    }
    else if (lateDays <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("Library fine = Rs. %.2f\n", fine);
    }
    else
    {
        printf("Membership Cancelled.\n");
    }

}
