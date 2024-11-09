#include <stdio.h>

int main()
{
    char st[50];

    printf("Enter a string: ");
    gets(st);
    puts(st); // it places the cursor in the next line in comparison to printf()
    return 0;
}