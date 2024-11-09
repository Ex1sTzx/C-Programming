#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        sum += n;
        n--;
    }

    printf("Sum: %d\n", sum);

    return 0;
}