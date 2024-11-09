#include <stdio.h>

int main() {
    int number;
    float floatnum;
    double doublenum;
    char character;

    printf("Size of int: %zu bytes\n", sizeof(number));
    printf("Size of float: %zu bytes\n", sizeof(floatnum));
    printf("Size of double: %zu bytes\n", sizeof(doublenum));
    printf("Size of char: %zu bytes\n", sizeof(character));

    return 0;
}
