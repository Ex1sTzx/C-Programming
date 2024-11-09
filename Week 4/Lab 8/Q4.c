#include <stdio.h>

int power(int a, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}

int main()
{
    int num, og, remainder, reversed = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    og = num;

    while (num != 0) {
        num /= 10;
    }

    num = og;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    num = og;

    while (num != 0) {
        remainder = num % 10;
        sum += power(remainder, 3);
        num /= 10;
    }

    if (og == sum) {
        printf("%d is an Armstrong number.\n", og);
    } else {
        printf("%d is not an Armstrong number.\n", og);
    }

    return 0;
}
