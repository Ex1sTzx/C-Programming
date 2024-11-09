#include <stdio.h>

int main() {
    int a, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &a);

    while (a != 0) {
        a /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}