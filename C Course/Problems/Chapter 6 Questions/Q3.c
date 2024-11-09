#include <stdio.h>

int increase(int * a){
    *a *= 10;
    return *a;
}
int main()
{
    int i = 10;
     printf("The value of i is %d\n",i);
     increase(&i);
     printf("The value of i after the increase is %d\n",i);
    return 0;
}