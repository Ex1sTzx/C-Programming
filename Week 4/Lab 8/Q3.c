#include <stdio.h>

int main() {
    int num, og, remainder, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    og = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (og == reversed) {
        printf("%d is a palindrome.\n", og);
    } else {
        printf("%d is not a palindrome.\n", og);
    }

    return 0;
}