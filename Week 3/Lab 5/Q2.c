#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("The length of side 1 is : ");
    scanf("%d", &side1);
    printf("The length of side 2 is : ");
    scanf("%d", &side2);
    printf("The length of side 3 is : ");
    scanf("%d", &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Triangle cannot have a side length less than or equal to zero!\n");
    } else if (side1 == side2 && side1 == side3) {
        printf("Triangle is equilateral!\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Triangle is isosceles!\n");
    } else {
        printf("Triangle is scalene!\n");
    }

    return 0;
}
