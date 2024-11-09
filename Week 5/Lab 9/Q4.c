#include <stdio.h>

int main()
{
    int number, sum = 0;

    printf("Enter a series of numbers (negative num to stop):\n");

    do
    {
        scanf("%d", &number);
        if (number >= 0)
        {
            sum += number;
        }
    } while (number >= 0);

    printf("Sum of entered numbers: %d\n", sum);

    return 0;
}