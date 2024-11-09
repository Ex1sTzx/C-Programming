#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter your marks in Maths : ");
    scanf("%d",&a);
    printf("Enter your marks in Physics : ");
    scanf("%d",&b);
    printf("Enter your marks in Chemistry : ");
    scanf("%d",&c);

    if (a <0 || b<0 ||c <0 || a>100 || b> 100 || c> 100)
    {
        printf("Enter a valid number");
    }
    
   else if (a < 33 || b< 33 || c < 33)
    {
        printf("You failed this year");
    }
    else if (a+b+c >= 120)
    {
        printf("You passed this year");
    }
    else
    {
        printf("Your result is inconclusive");
    }
    
    return 0;
}