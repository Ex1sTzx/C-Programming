#include <stdio.h>

int sum(int * a, int * b){
    int result = *a + *b;
    
    return result;
}
float average(int * a, int * b){
    float sum_result = sum(a, b);
    float average_result = sum_result / 2;
    return average_result;
}
int main()
{
    int a, b ;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    printf("Sum: %d\n", sum(&a, &b));
    printf("Average: %f\n", average(&a, &b));
    return 0;
}