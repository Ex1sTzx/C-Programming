#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("%d\n", sum);
    return 0;
}