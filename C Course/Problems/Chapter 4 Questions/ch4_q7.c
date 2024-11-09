#include <stdio.h>

int main()
{
    int n = 8, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += (i*n);
    }
        printf("The sum of all multiples of 8 till 10 is %d", sum);
    return 0;
}