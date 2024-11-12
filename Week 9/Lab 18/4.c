#include <stdio.h>
void main()
{
    char str1[100], str2[100];
    int i = 0, result = 0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            result = str1[i] - str2[i];
            break;
        }
        i++;
    }
    if (result == 0 && str1[i] != str2[i])
        result = str1[i] - str2[i];
    printf("Result of comparison: %d", result);
}
