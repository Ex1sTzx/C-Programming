#include <stdio.h>

int main() {
    // Declare a variable to store the user's age
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility for driving
    if (age >= 18) {
        // If age is 18 or older, the user can drive
        printf("You are eligible to drive.\n");
    } else if (age >= 16) {
        // If age is between 16 and 17 (inclusive), the user can drive with a learner's permit
        printf("You can drive with a learner's permit. Drive safely!\n");
    } else
     {
     // If age is less than 16, the user cannot drive
        printf("Sorry, you are not eligible to drive yet.\n");
    }

    return 0;
}
