#include <stdio.h>

// 0,1,1,2,3,5,8,13,21,34....
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}   
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("Fibonacci number at position %d is: %d\n", i, fibonacci(i));
    return 0;
}