#include <stdio.h>

int main()
{
    int n, prime = 1; 
    printf("The number is : ");
    scanf("%d", &n);

    
    if (n <= 1)
    {
        prime = 0;  
    }
    else
    {
        for (int i = 2; i < n; i++)  
        {
            if (n % i == 0)  
            {
                prime = 0; 
                break; 
            }
        }
    }

    if (prime == 0)
    {
        printf("%d is not a prime number\n", n);     
    }
    else
    {
        printf("%d is a prime number\n", n);  
    }

    return 0;
}
