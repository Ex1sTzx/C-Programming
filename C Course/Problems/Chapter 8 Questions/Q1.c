#include <stdio.h>

int main()
{
    char str[8];
    for (int i = 0; i < 7; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[7] = '\0';
    printf("%s\n", str);
    return 0;
}