#include <stdio.h>

int main()
{
    char str[] = "Hello, World!";
    char *ptr = str;
    ptr = "Helllo MRU";
    printf("%s\n", ptr);

    return 0;
}
