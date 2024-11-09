#include <stdio.h>

int main()
{
    int i = 5;
    int* j = &i;

    printf("Address of i: %p\n", &i);
    printf("Address of i: %p\n", j);
    printf("Value of i: %d\n", *j);
    return 0;
}