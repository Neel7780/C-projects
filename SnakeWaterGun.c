#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    srand(time(0));
    int randomNumber = (rand() % 3);
    int choice = 0;
    printf("Enter 0) Snake");
    printf("Enter 1) Water");
    printf("Enter 2) Gun");
    scanf("%d", &choice);
    if (randomNumber == choice)
    {
        printf("Draw!");
    }
    else if (randomNumber == 1 && choice == 0)
    {
        printf("You win!");
    }
    else if (randomNumber == 1 && choice == 2)
    {
        printf("Computer wins!");
    }
    else if (randomNumber == 0 && choice == 1)
    {
        printf("Computer wins!");
    }
    else if (randomNumber == 0 && choice == 2)
    {
        printf("You win!");
    }
    else if (randomNumber == 2 && choice == 0)
    {
        printf("Computer wins!");
    }
    else if (randomNumber == 2 && choice == 1)
    {
        printf("You win!");
    }
    else
    {
        printf("Something went wrong! Sorry...");
    }
    printf("\nComputer added, %d", randomNumber);
    return 0;
}