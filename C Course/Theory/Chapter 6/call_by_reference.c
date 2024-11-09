#include <stdio.h>

int sum(int *a, int *b)
{
    *a = 3;
    return *a + *b;
}

int main()
{
    int x, y;
    x = 7, y = 3;
    printf("The sum of the two numbers is %d\n", sum(&x, &y));
    printf("The value of x is now %d\n", x); // The value of x is now 3
    return 0;
}

// without pointers sum function couldn't change the value of x variable as a copy of x was passed.
// with the use of pointers we give the address of the x var and the function pointer changes the value of x
// directly in the main function
/*
Call by reference is a method of passing arguments to a function where the function receives the memory
addresses of the actual arguments, rather than their values.
This allows the function to directly modify the values of the variables in the calling function.

In call by reference, the function can access and modify the original variables,
as it operates on the memory locations rather than copies of the variables
*/