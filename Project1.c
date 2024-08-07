#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Enter ur number:");
        scanf("%d", &guessed_number);
        if (randomNumber > guessed_number)
        {
            printf("Guess higher!\n");
        }
        else if (randomNumber < guessed_number)
        {
            printf("Guess lower!\n");
        }
        else
        {
            printf("Congrats! You got the correct number!\n");
        }
        no_of_guesses++;
    } while (guessed_number != randomNumber);

    printf("The number of guesses you took: %d", no_of_guesses);
    return 0;
}