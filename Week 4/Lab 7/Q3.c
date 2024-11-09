#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d:\n", n);

    while (first <= n) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}