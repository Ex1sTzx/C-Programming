#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a single character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
     printf("%c is a vowel.\n", ch);
     break;
    default:
        printf("%c is a consonant.\n", ch);
        break;
    }

    return 0;
}