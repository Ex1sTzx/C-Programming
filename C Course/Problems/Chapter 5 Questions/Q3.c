#include <stdio.h>

float gravitationalForce(float);

float gravitationalForce(float mass)
{
    float g = 9.8;
    return mass * g;
}
    int main()
    {
        float mass;
        printf("Enter the mass of the object (in kg): ");
        scanf("%f", &mass);
        printf("The gravitational force on the object is: %.2f Newtons\n", gravitationalForce(mass));
        return 0;
    }