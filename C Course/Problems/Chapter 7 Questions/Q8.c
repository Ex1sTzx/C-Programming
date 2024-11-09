#include <stdio.h>

int main()
{
    int i, j, k;
    printf("Enter the dimensions of the 3D array: ");
    scanf("%d%d%d", &i, &j, &k);
    int array[i][j][k];
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            for (int c = 0; c < k; c++)
            {
                printf("The address of the elements [%d][%d][%d] in ascending order is %u.\n", a, b, c, &array[a][b][c]);
            }
        }
    }

    return 0;
}