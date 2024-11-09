#include <stdio.h>

int main() {
    float num1, num2, average;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    average = (num1 + num2) / 2;

    printf("The average of %f and %f is %45f\n", num1, num2, average);

    return 0;
}
