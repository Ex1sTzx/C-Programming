#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], substr[100];
    int i, j, pos = -1;
    printf("Enter the main string: ");
    gets(str);
    printf("Enter the substring to search: ");
    gets(substr);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; substr[j] != '\0' && str[i + j] == substr[j]; j++)
            ;
        if (substr[j] == '\0')
        {
            pos = i;
            break;
        }
    }
    if (pos != -1)
        printf("Substring found at position: %d", pos);
    else
        printf("Substring not found");
}
