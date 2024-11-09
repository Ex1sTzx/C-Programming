#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2;

    printf("Enter two real numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);

    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    if (num2 != 0)
    {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    printf("Modulo: %.2f %% %.2f = %.2f\n", num1, num2, fmod(num1, num2));

    return 0;
}
