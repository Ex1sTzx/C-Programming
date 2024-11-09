#include <stdio.h>

int main()
{
     int a;
    printf("Enter your annual salary : ");
    scanf("%d",&a);
 
    if (a<250000)
     {
        printf("You have to pay %d taxes.", 0*a);
    }
    else if (a>=250000 && a<500000)
    {
        printf("You have to pay %d taxes.", (1*a)/20);
    }
    else if (a>=500000 && a<1000000)
    {
        printf("You have to pay %d taxes.", (1*a)/5);
    }
    else if (a>1000000)
    {
        printf("You have to pay %d taxes.", (3*a)/10);
    }
    

    return 0;
}