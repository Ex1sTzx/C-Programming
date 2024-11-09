#include <stdio.h>

void address(int * a){
    printf("The address of i in this function is %p\n",a);
}
int main()
{
    int i = 10;
     printf("The address of i is %p\n", &i);
     address(&i);
    return 0;
}