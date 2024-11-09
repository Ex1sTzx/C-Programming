#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    printf("Enter a number : ");
    scanf("%d",&c);
    printf("Enter a number : ");
    scanf("%d",&d);

    if (a>b && a>c && a>d)
    {
       printf("The greatest number is %d",a);
    }
    if (b>a && b>c && b>d)
    {
       printf("The greatest number is %d",b);
    }
    if (c>b && c>a && c>d)
    {
       printf("The greatest number is %d",c);
    }
    if (d>b && d>c && d>a)
    {
       printf("The greatest number is %d",d);
    }
    
    return 0;
}