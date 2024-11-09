#include <stdio.h>

int main()
{
    int i = 5;
    int* j = &i;
    int** k = &j;

    printf("Value of i: %d\n", i);
    printf("Address of i: %p\n", &i);
    printf("Value of j: %p\n", *j);
    printf("Address of j: %p\n", &j);
    printf("Dereferencing k: %d\n", **k);
    return 0;
}