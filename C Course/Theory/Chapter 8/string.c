#include <stdio.h>

int main()
{
    char st[] = "abcd";
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Character is %c\n", st[i]);
    // } This is not required as C already has a %s specifier
    printf("%s", st);

    return 0;
}