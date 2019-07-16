#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	time_t t;
	srand((unsigned) time(&t));
	int ANSWER = rand() % 51;
	int guess = -1;
	int triesLeft = 5;

	while (guess != ANSWER  &&  triesLeft > 0) {

		printf("Please enter your guess [from 0 to 50]: ");
		fflush(stdout);
		scanf("%d", &guess);

		if (guess >= 0  &&  guess <= 50) {
			if (guess == ANSWER) {
				printf("\nYou got it!\n");
				break;
			}
			else {
				if (ANSWER > guess) {
					printf("Too low.\n");
				}
				else {
					printf("Too high.\n");
				}
				triesLeft--;
			}
		}
		else {
			printf("Please enter a number between 0 and 50\n");
			continue;
		}

	}

	if (triesLeft == 0) {
		printf("\nGame over.\n\n");
		printf("Answer was %d.\n", ANSWER);
	}

	return 0;
}
