#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        for (j = n - i; j > 1; j--)
        {
            printf(" ");
        }

        for (k = 0; k <= 2 * i; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}