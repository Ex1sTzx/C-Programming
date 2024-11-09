#include <stdio.h>

int main()
{
    int sum = 0, n = 1;
    do
    {
      sum+= n;
      n++;
    } while (n <= 10);

      printf("The sum of first 10 natural numbers is %d", sum);
    
    return 0;
}