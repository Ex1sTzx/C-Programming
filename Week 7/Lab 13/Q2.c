#include <stdio.h>

int armstrongNumber(int n)
{
    int og, remainder, result = 0, temp;
    og = n;

    while (n != 0)
    {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n /= 10;
    }

    if (og == result)
    {
        return 1;
    }
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (armstrongNumber(number))
    {
        printf("%d is an Armstrong number.\n", number);
    }
    return 0;
}