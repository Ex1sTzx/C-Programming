#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int i = 5, j = 2;
    printf(" Before swapping %d %d\n", i, j);
    swap(&i, &j);
    printf(" After swapping %d %d\n", i, j);
    printf("Values of %d %d\n", i, j);
    return 0;
}
/*
In call by reference, the function receives the actual memory addresses of the arguments.
This means that any changes made to the parameters inside the function directly affect
the original variables in the calling function.
The function operates on the actual data, not a copy.
*/