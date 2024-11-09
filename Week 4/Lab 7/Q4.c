#include <stdio.h>

int main() {
    int n, k, count = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("The first %d multiples of %d are:\n", n, k);

    while (count <= n) {
        printf("%d\n", k * count);
        count++;
    }

    return 0;
}