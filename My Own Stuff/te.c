#include <stdio.h>
void main()
{
    float a;
    int x = 6, y = 4;
    a = x / y;
    printf("Value of a = % f", a);
    a = (float)x / y;
    printf("Value of a = % f", a);
}
