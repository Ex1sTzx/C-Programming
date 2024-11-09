#include <stdio.h>

// Function to print Fibonacci series up to n terms
void printFibonacciSeries(int n)
{
    int first = 0, second = 1, next;

    printf("Fibonacci series: ");

    // Print the first two terms
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d ", first);
            continue;
        }
        if (i == 1)
        {
            printf("%d ", second);
            continue;
        }

        next = first + second;
        printf("%d ", next);

        first = second;
        second = next;
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printFibonacciSeries(n);

    return 0;
}
