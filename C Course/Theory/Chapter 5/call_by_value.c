#include <stdio.h>

int sum(int a, int b)
{
    int sum = a + b;
    printf("Sum: %d\n", sum);
    return sum;
}
int main()
{
    int x, y;
    printf("Enter 1st number: ");
    scanf("%d", &x);
    printf("Enter 2nd number: ");
    scanf("%d", &y);

    sum(x, y);
    return 0;
}

/*In call by value, the function receives a copy of the actual argument values.
This means that any changes made to the parameters inside the function do not affect
the original variables in the calling function.The function operates on its own copy of the data.
*/