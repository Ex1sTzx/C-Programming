#include <stdio.h>

// Function to slice a part of the string from 'start' to 'end' (exclusive)
char *slice(char str[], int start, int end)
{
    // 1. Get the address of the character at the 'start' index
    // This uses pointer arithmetic to move the pointer 'start' positions forward in memory.
    char *ptr1 = &str[start];

    // 2. Set the character at the 'end' index to '\0' to terminate the string.
    // In C, strings end when they encounter a null terminator ('\0').
    // This cuts off the string at the position 'end'.
    str[end] = '\0';

    // 3. Return the pointer to the start of the sliced string.
    // C will print everything from 'start' up to where it encounters '\0'.
    return ptr1;
}

int main()
{
    // Declare a string (an array of characters)
    char string[] = "heisenberg";

    // Call the 'slice' function to get the slice from index 1 to index 8
    // 'string[1]' is 'e', so the slice starts there.
    // At 'string[8]', we insert '\0', so the string will become "eisenbe"
    printf("%s\n", slice(string, 1, 8));

    return 0;
}
