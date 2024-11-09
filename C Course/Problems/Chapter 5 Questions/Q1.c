#include <stdio.h>

float average(float, float, float);

float average(float a, float b, float c)
{
    return (a + b + c) / 3;
}
int main()
{
    float a, b, c;
    printf("Enter 1st number: ");
    scanf("%f", &a);
    printf("Enter 2nd number: ");
    scanf("%f", &b);
    printf("Enter 3rd number: ");
    scanf("%f", &c);

    printf("The average of these 3 values is %.2f", average(a, b, c));
    return 0;
}