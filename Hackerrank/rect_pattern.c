#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            int min = i < j ? i : j;
            min = min < size - i + 1 ? min : size - i + 1;
            min = min < size - j + 1 ? min : size - j + 1;

            printf("%d ", n - min + 1);
        }
        printf("\n");
    }

    return 0;
}
