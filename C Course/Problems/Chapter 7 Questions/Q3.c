#include <stdio.h>

int main()
{
    int array[10], n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        array[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d = %d\n",n, i + 1, array[i]);
    }

    return 0;
}