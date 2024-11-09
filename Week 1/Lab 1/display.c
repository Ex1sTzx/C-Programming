#include <stdio.h>

int main()
{
    int integer;
    float realNumber;
    char character;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter a real number: ");
    scanf("%f", &realNumber);

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("You entered:\nInteger: %d\nReal number: %f\nCharacter: %c\n", integer, realNumber, character);

    return 0;
}
