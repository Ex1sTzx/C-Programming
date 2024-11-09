#include <stdio.h>

int main()
{
     long n, i;
   printf("the number is : ");
   scanf("%ld",&n);
   long fact =1;
   for(i =1;i<=n;i++){
       fact = fact*i;
   }
   printf("the factorial is %ld",fact);
    return 0;
}