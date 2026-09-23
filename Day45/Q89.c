#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, frequency = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            frequency++;
        }
    }

    printf("Frequency of '%c': %d\n", ch, frequency);

}
