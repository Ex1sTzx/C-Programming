#include <stdio.h>

int sumofnaturalnum(int num) {
    if (num == 1)
    {
        return 1;
    }
    return sumofnaturalnum(num-1) + num;
}
    
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("The sum of all natural numbers upto %d is %d.\n", num, sumofnaturalnum(num));
    return 0;
}