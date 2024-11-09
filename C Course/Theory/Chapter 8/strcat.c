#include <stdio.h>
#include <string.h>

int main()
{
    char st1[] = "Samarth";
    char st2[] = " kajla";
    strcat(st1, st2); // st2 is now concatenated with st1
    printf("%s", st1);
    return 0;
}