#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter a number: ");
     scanf("%d",&x);
    printf("Enter a number: ");
    scanf("%d",&y);

    if (x<2000 || x>3000)
    {
        printf("The number is %d\n",x);
    }
    if (y>=100 && y<=500)
    {
        printf("The number is %d\n",y);

    }
         return 0;
}