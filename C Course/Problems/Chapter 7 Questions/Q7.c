#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter the number of rows: ");
    scanf("%d", &x);
    printf("Enter the number of columns: ");
    scanf("%d", &y);

    int arr[x][y];

    int n;
    printf("Enter the number of numbers to multiply (up to %d): ", x);
    scanf("%d", &n);

    if (n > x)
    {
        printf("Cannot enter more numbers than rows. Setting n to %d.\n", x);
        n = x;
    }

    int mul[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d to multiply: ", i + 1);
        scanf("%d", &mul[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    printf("Multiplication Tables:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d x %d = %d\n", mul[i], j + 1, arr[i][j]);
        }
        printf("\n");
    }

    printf("Matrix: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
