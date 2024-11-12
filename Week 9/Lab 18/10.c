#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], *token;
    printf("Enter a string: ");
    gets(str);
    token = strtok(str, " ,");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ,");
    }
}
