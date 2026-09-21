#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    if (totalSeconds < 0)
    {
        printf("Please enter a non-negative value.\n");
    }
    else
    {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;

        printf("Time = %02d:%02d:%02d\n",
               hours, minutes, seconds);
    }

}
