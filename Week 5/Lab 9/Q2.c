#include <stdio.h>

int main()
{
    int sum = 0, num;

    do
    {
        printf("Enter a positive integer (0 to exit): ");
        scanf("%d", &num);
        sum += num;

    } while (num != 0);

    printf("Sum of all positive integers entered: %d\n", sum);

    return 0;
}