#include <stdio.h>
#include <string.h>

int main()
{
    char st1[] = "Samarth";
    char st2[] = "kajla";

    printf("%d", strcmp(st1, st2));

    return 0;
}

// the strcmp(st1, st2) will return:
// 0 if the strings are identical,
// a negative value if st1 is lexicographically smaller than st2,
// a positive value if st1 is lexicographically greater than st2.
