#include <stdio.h>

int main() {
    int num1, num2, diff;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    diff = num1 - num2;
    if (diff < 0) {
        diff = -diff;
    }

    if (diff == num1 || diff == num2) {
        printf("Difference is equal to one of the values entered.\n");
    } else {
        printf("Difference is not equal to any of the values entered.\n");
    }

    return 0;
}
