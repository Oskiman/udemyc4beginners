// Guessing game
// guess a random number between 0 - 20 
// user gets 5 tries
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int guess = 0;
	int count = 5;

	// generate random number between 0 - 20
	time_t t;
	srand((unsigned)time(&t));
	int random = rand()%21;

	while(count > 0)
	{
		printf("What's your guess(0 - 20)?");
		scanf("%d", &guess);
		
		if(guess == random)
		{
			printf("Correct! You win!\n");
			break;
		}
		else if(guess < random)
		{
			printf("Too low\n");
			count--;
		}
		else if(guess > random)
		{
			printf("Too high\n");
			count--;
		}

		printf("You have %d tries left\n");
	}

	return 0;
}
