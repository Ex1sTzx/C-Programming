#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("The number is : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
        printf("The factorial of %d is %d",n,fact);
    return 0;
}