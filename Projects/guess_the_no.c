#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int randomNumber = (rand() % 100) + 1; // Generate a random no from 1 to 100
    int guessed, no_of_guesses = 0;

    do
    {
        printf("Enter your number : ");
        scanf("%d", &guessed);
        if (guessed>randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed<randomNumber)
        {
            printf("Higher number please!\n");
        }
        else if (guessed == randomNumber)
        {
            printf("You guessed the right number!\n");
        }
        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("You guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}
