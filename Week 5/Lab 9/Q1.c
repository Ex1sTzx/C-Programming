#include <stdio.h>

int main()
{
    int i = 1, j = 9;
    do
    {
        printf("%d\n", i++);
    } while (i <= 10);

    do
    {
        printf("%d\n", j--);

    } while (j >= 1);

    return 0;
}