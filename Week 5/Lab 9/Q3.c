#include <stdio.h>

int main()
{
    int i = 1, even = 0, odd = 0;

    do
    {
        even += i;
        i += 2;
    } while (i <= 50);

    i = 2;

    do
    {
        odd += i;
        i += 2;
    } while (i <= 50);

    printf("Sum of even numbers from 1 to 50: %d\n", even);
    printf("Sum of odd numbers from 1 to 50: %d\n", odd);

    return 0;
}