#include <stdio.h>
void copy(char *dest, char *src)
{
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
void main()
{
    char source[100], destination[100];
    printf("Enter a string: ");
    gets(source);
    copy(destination, source);
    printf("Copied string: %s", destination);
}
