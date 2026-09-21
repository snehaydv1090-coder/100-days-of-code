#include <stdio.h>

int main()
{
    char text[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    printf("Characters of the string:\n");

    while (text[i] != '\0' && text[i] != '\n')
    {
        printf("%c\n", text[i]);
        i++;
    }

}
