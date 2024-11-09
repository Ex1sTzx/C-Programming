#include <stdio.h>

int main()
{
    int n = 10, i = 10;

    for ( i = 10; i >= 0 ; i--)
    {
        printf("%d * %d = %d\n",n,i,i*n);
    }
    
    return 0;
}