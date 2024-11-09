#include <stdio.h>

int main()
{
    int side1, side2, side3 ;
    printf("The length of side 1 is : ");
    scanf("%d",&side1);
    printf("The length of side 2 is : ");
    scanf("%d",&side2);
    printf("The length of side 3 is : ");
    scanf("%d",&side3);
    if (side1 <= 0 || side2 <=0 || side3 <= 0 )
    {
        printf("The side of a triangle should always be greater than zero");
    }
    
    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2)
    {
        printf("This is a valid triangle.");
    }
    else
    {
        printf("This is not a valid triangle");
    }
    
    return 0;
}