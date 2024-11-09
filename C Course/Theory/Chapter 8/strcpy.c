#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Samarth";
    char st2[10];
    strcpy(st2, st);
    printf("%s %s\n", st2, st);
    return 0;
}