#include <stdio.h>

int exp_power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // to check if a number is a perfect square

    int isPerfectSquare = 0;

    for (int i = 0; exp_power(i, 2) <= n; i++)
    {
        if (exp_power(i, 2) == n)
        {
            isPerfectSquare = 1;
            break;
        }
    }

    if (isPerfectSquare)
    {
        printf("%d is a perfect square.\n", n);
    }
    else
    {
        printf("%d is not a perfect square.\n", n);
    }

    return 0;
}