#include <stdio.h>
void main()
{
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }
    printf("Vowels: %d, Consonants: %d", vowels, consonants);
}
