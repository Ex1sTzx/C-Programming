#include <stdio.h>

// Function declaration: This function calculates the factorial of a given number.
int factorial(int);

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The factorial of %d is %d", a, factorial(a));

    return 0;
}
