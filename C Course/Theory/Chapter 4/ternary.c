#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d",&a); 
    printf("Enter a number : ");
    scanf("%d",&b);

    a>b ? printf("First number is greater than second number"): printf("Second number is greater than first number");

    return 0;
}