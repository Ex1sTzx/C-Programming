#include <stdio.h>

int main()
{
    int i, num, sum = 0;
    float average;

    printf("Enter 10 numbers:\n");

    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    average = (float)sum / 10;

    printf("Sum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);

    return 0;
}