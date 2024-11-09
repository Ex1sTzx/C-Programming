#include <stdio.h>

int main()
{
     char a;
    printf("Enter a alphabet : ");
    scanf("%c",&a);

      if (a>=97 && a<= 122)
    {
       printf("You have entered a lowercase alpahabet.");
    }
    else if (a>=65 && a<=90)
    {
        printf("You have entered a uppercase aplphabet.");
    }
}