#include <stdio.h>

int main()
{
    char character;

    printf("Enter an alphabet: ");
    scanf(" %c", &character);

    if ((character >= 'A' && character <= 'Z') ||
        (character >= 'a' && character <= 'z'))
    {
        if (character == 'A' || character == 'E' ||
            character == 'I' || character == 'O' ||
            character == 'U' || character == 'a' ||
            character == 'e' || character == 'i' ||
            character == 'o' || character == 'u')
        {
            printf("%c is a vowel.\n", character);
        }
        else
        {
            printf("%c is a consonant.\n", character);
        }
    }
    else
    {
        printf("The entered character is not an alphabet.\n");
    }

}
