#include <stdio.h>

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int* i = arr;
     i += 2;
    printf("%d\n", *i); 
    return 0;
}