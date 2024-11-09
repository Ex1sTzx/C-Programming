#include <stdio.h>

float temperature(float);

float temperature(float a){
    return (a * 9/5) + 32; // Convert Celsius to Fahrenheit
}
int main()
{
    int a;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &a);
    printf("Temperature in Fahrenheit: %.2f\n", temperature(a)); // Call the function and print the result
    return 0;
}