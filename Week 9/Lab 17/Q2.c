#include <stdio.h>
void main()
{
    int num = 10;
    int *p = &num;
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", p);
    printf("Value pointed by p: %d", *p);
}
