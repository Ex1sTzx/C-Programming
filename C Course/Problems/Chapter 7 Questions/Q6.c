#include <stdio.h>

void multiplication(int x, int arr[10]) 
{
    for (int i = 1; i <= 10; i++) 
    {
        arr[i-1] = x * i; 
    }
}

int main()
{
    int arr[3][10]; 

    
    multiplication(2, arr[0]); 
    multiplication(7, arr[1]); 
    multiplication(9, arr[2]); 

    
    printf("Multiplication Tables:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
            printf("%d x %d = %d\n", (i == 0) ? 2 : (i == 1) ? 7 : 9, j+1, arr[i][j]);
        }
        printf("\n"); 
    }

    
    printf("Elements of the array :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
