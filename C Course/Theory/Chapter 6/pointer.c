#include <stdio.h>

int main()
{
    int i = 7;
    int* j = &i; // j is a pointer pointing to i
    int k = 8;

    printf("The address of i is %u\n",&i);
    printf("The address of j is %u\n",&j);
    printf("The value of at j is %d\n",*j);
    return 0;
}