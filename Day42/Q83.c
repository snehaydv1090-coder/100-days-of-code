#include <stdio.h>

int main()
{
    char text[200];
    char character;
    int vowels = 0;
    int consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    while (text[i] != '\0')
    {
        character = text[i];

        if (character >= 'A' && character <= 'Z')
        {
            character = character + 32;
        }

        if (character >= 'a' && character <= 'z')
        {
            if (character == 'a' || character == 'e' ||
                character == 'i' || character == 'o' ||
                character == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        i++;
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

}
