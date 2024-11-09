#include <stdio.h>

int main()
{
    int i, j, m, n;

    printf("Enter the number of rows in Matrix 1: ");
    scanf("%d", &i);
    printf("Enter the number of columns in Matrix 1: ");
    scanf("%d", &j);

    printf("Enter the number of rows in Matrix 2: ");
    scanf("%d", &m);
    printf("Enter the number of columns in Matrix 2: ");
    scanf("%d", &n);

    if (i != m || j != n)
    {
        printf("Matrix subtraction is not possible as the dimensions do not match.\n");
        return 0;
    }

    int arr1[i][j], arr2[i][j], diff[i][j];

    printf("Enter the elements of Matrix 1:\n");
    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < j; col++)
        {
            scanf("%d", &arr1[row][col]);
        }
    }

    printf("Enter the elements of Matrix 2:\n");
    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < j; col++)
        {
            scanf("%d", &arr2[row][col]);
        }
    }

    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < j; col++)
        {
            diff[row][col] = arr1[row][col] - arr2[row][col];
        }
    }

    printf("Difference of the two matrices:\n");
    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < j; col++)
        {
            printf("%d ", diff[row][col]);
        }
        printf("\n");
    }

    return 0;
}
