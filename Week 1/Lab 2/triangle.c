#include <stdio.h>
int main()
{
    float breadth, length, area;
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    area = breadth * length;
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}