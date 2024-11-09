#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j > n - i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

/*
54321
5432
543
54
5
*/