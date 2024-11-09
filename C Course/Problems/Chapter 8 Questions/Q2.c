#include <stdio.h>

int strlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char string[] = "hello, I'm heisenberg";
    printf("%d\n", strlen(string));
    return 0;
}