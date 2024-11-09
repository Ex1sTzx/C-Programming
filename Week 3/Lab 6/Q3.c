#include <stdio.h>

int main()
{
    int a, b;
    char operation;

    printf("Enter two integers and an operator (+, -, *, /, %): ");
    scanf("%d %d %c", &a, &b, &operation);

    switch (operation) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("Result: %d\n", a % b);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
    }

    return 0;
}
