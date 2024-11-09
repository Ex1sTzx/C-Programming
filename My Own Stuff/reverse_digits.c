#include <stdio.h>

int main()
{
    int n, digit, reverse = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    do {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;

    } while (n!=0); printf("The reversed number is %d ", reverse);
    
    return 0;
}