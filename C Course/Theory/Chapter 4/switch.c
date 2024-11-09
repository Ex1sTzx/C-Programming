#include <stdio.h>

int main()
{
    int a;
     printf("Enter a number : ");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("You entered the number 1");
        // Without the break statement, the program will continue executing the subsequent cases without checking the case conditions.
        break;
    case 2:
        printf("You entered the number 2");
        break;
    case 3:
        printf("You entered the number 3");
        break;
    case 4:
        printf("You entered the number 4");
        break;
    case 5:
        printf("You entered the number 5");
        break;
    
    default:
    printf("Nothing matched");
        break;
    }
    return 0;
}