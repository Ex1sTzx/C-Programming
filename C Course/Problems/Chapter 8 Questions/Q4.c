#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
void mystrcpy(char str1[], char str2[])
{
    for (int i = 0; i < mystrlen(str2); i++)
    {
        str1[i] = str2[i];
    }
    str1[mystrlen(str2)] = '\0';
}

int main()
{
    char string1[] = "hello";
    char string2[30];
    mystrcpy(string2, string1);
    printf("%s %s\n", string1, string2);

    return 0;
}