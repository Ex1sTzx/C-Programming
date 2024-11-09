#include <stdio.h>

int main() {
    int a;  //1 for members, 0 for non-members
    float b;  // Amount
    float discount = 0.0;

    printf("Enter membership status (1 for member, 0 for non-member): ");
    scanf("%d", &a);
    printf("Enter the amount spent: Rs.");
    scanf("%f", &b);

    if (a == 1 && b > 100) {
        discount = 0.10 * b;  // 10% discount 
    } else if (a == 0 && b > 150) {
        discount = 0.05 * b;  // 5% discount 
    }

    printf("The discount is: Rs.%.2f\n", discount);
    printf("The amount to be paid after discount: Rs.%.2f\n", b - discount);

    return 0;
}
