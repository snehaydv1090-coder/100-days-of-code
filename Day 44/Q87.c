#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    int i, spaces = 0, digits = 0, specialCharacters = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isspace((unsigned char)str[i]))
            spaces++;
        else if (isdigit((unsigned char)str[i]))
            digits++;
        else if (!isalpha((unsigned char)str[i]))
            specialCharacters++;
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", specialCharacters);

}
