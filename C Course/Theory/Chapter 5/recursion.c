#include <stdio.h>

int factorial(int n)
{
    // Base case: If n is 0 or 1, return 1 (since 0! = 1 and 1! = 1).
    if (n == 1 || n == 0)
    {
        return 1;
    }
    // Recursive case: Multiply n by the factorial of (n-1).
    // This keeps calling the function with smaller numbers until it reaches the base case.
    return factorial(n - 1) * n; 
}

int main()
{
    int a;
    // Prompt the user to enter a number.
    printf("Enter a number: ");
    // Read the number from the user and store it in variable 'a'.
    scanf("%d", &a);

    // Call the factorial function with 'a' and print the result.
    printf("The factorial of %d is %d", a, factorial(a));

    return 0;
}
