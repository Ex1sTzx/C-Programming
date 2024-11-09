#include <stdio.h>

void increment(int *a) {
    (*a)++; 
}

int main() {
    int i = 42;

    printf("Before increment: i = %d\n", i);

    // Pass the address of 'i' to the increment function
    increment(&i);

    printf("After increment: i = %d\n", i);

    return 0;
}
