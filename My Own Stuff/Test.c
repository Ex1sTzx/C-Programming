
/*
Programmer:	Samarth
Purpose: To check global variables vs local variables
*/
#include <stdio.h>

int jai;
int main()
{
    int n;
    printf("Hello");
    printf("The value of jai: %d and value of n is: %d\n", jai, n);
    getchar();
    test();
    return 0;
}

void test()
{
    int jai;
    printf("The value of jai: %d and value of n is: %d\n", jai, jai);
}