#include <stdio.h>

int main() 
{
    int guessno = 45, userguess; // Declare variables

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100:\n");

    while (1) 
	{ // Infinite loop until the correct number is guessed
        // Read user input
        scanf("%d", &userguess);

        // Check if the guess is too high, too low, or correct
        if (userguess > guessno)
		{
            printf("Your guess is too high! Try again: ");
        }
		 else if (userguess < guessno) 
		{
            printf("Your guess is too low! Try again: ");
        }
		 else 
		{
            printf("Congratulations! You guessed it right!\n");
            break; // Exit the loop
        }
    }

}

