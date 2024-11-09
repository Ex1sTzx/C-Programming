#include <stdio.h>

int count(int num)
{
    if (num < 10)
    {
        return 1;
    }
    else
    {
        return 1 + count(num / 10);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of digits: %d\n", count(num));

    return 0;
}