#include <stdio.h>

int reverseNumber(int n)
{
    int reversed = 0;
    while (n != 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The reverse of the number is %d", reverseNumber(number));

    return 0;
}