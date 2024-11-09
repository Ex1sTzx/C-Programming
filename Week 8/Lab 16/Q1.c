#include <stdio.h>

int main()
{
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &i);
    printf("Enter the number of columns: ");
    scanf("%d", &j);

    int arr[i][j];
    printf("Enter the elements of the array:\n");
    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < j; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }
    printf("\n");
    printf("Matrix:\n");

    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < j; col++)
        {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }

    return 0;
}