#include <stdio.h>

int main()
{
    int x = 22, y = 37;
    x = y++ + x++;
    y = y++ + ++x;
    printf("%d,%d\n", x, y);
    return 0;
}