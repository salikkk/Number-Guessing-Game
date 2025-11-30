#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess = 0;
    int attempts = 0;

   
    srand(time(NULL));
    int number = rand() % 100 + 1;
    printf("===========================================\n");
    printf("                 START!\n");
    printf("   Choose a number between 1 and 100.\n");
    printf("   Try to guess it! (enter 0 to quit)\n");
    printf("===========================================\n\n");

    while (1) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
       
            int c;
            printf("Please enter a valid integer.\n");
            while ((c = getchar()) != '\n' && c != EOF) { } 
            continue;
        }

        if (guess == 0) {
            printf("You chose to quit. The number was %d.\n", number);
            break;
        }

        attempts++;

        if (guess < number) {
            printf("Too low! Try a higher number.\n\n");
        } else if (guess > number) {
            printf("Too high! Try a lower number.\n\n");
        } else {
            printf("Congratulations! You guessed it in %d attempt%s.\n", attempts, attempts == 1 ? "" : "s");
            break;
        }
    }

    return 0;
}
