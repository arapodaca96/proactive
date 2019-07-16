#include <stdio.h>
#include <stdbool.h>

void displayBoard();
void makeMove(int player);
_Bool spaceTaken(int index);
_Bool checkForWin();

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main() {

	int player = 1;
	_Bool gameOver = false;
	int movesLeft = 9;

	while ((gameOver == false) && (movesLeft > 0)) {

		displayBoard();
		makeMove(player);

		if (player == 1)
			player = 2;
		else
			player = 1;

		gameOver = checkForWin();
		movesLeft--;
	}

	displayBoard();

	if (movesLeft == 0) {
		printf("It's a tie!\n");
	}
	else {
		if (player == 1)
			printf("Player 2 wins!\n");
		else
			printf("Player 1 wins!\n");
	}

	return 0;
}

void displayBoard() {
	printf("   |   |   \n");
	printf(" %c | %c | %c \n", board[0], board[1], board[2]);
	printf("   |   |   \n");
	printf("---+---+---\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n", board[3], board[4], board[5]);
	printf("   |   |   \n");
	printf("---+---+---\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n", board[6], board[7], board[8]);
	printf("   |   |   \n");
}

void makeMove(int player) {

	int index = -1;

	for (;;) {

		printf("Player %d, make your move --> ", player);
		fflush(stdout);
		scanf("%d", &index);

		if (index < 1  ||  index > 9) {
			printf("Invalid move.\n");
		}
		else {
			_Bool taken = spaceTaken(index - 1);
			if (taken == false) {
				if (player == 1) {
					board[index - 1] = 'X';
				}
				else {
					board[index - 1] = 'O';
				}
				break;
			}
			else {
				printf("Invalid move.\n");
			}
		}
	}
}

_Bool spaceTaken(int index) {

	if (board[index] == 'X'  ||  board[index] == 'O') {
		return true;
	}
	else {
		return false;
	}
}

_Bool checkForWin() {

	if ((board[0] == 'X' && board[1] == 'X' && board[2] == 'X') ||
		(board[0] == 'O' && board[1] == 'O' && board[2] == 'O')) {
		return true;
	}
	else if ((board[3] == 'X' && board[4] == 'X' && board[5] == 'X') ||
			(board[3] == 'O' && board[4] == 'O' && board[5] == 'O')) {
		return true;
	}
	else if ((board[6] == 'X' && board[7] == 'X' && board[8] == 'X') ||
			(board[6] == 'O' && board[7] == 'O' && board[8] == 'O')) {
		return true;
	}
	else if ((board[0] == 'X' && board[3] == 'X' && board[6] == 'X') ||
			(board[0] == 'O' && board[3] == 'O' && board[6] == 'O')) {
		return true;
	}
	else if ((board[1] == 'X' && board[4] == 'X' && board[7] == 'X') ||
			(board[1] == 'O' && board[4] == 'O' && board[7] == 'O')) {
		return true;
	}
	else if ((board[2] == 'X' && board[5] == 'X' && board[8] == 'X') ||
			(board[2] == 'O' && board[5] == 'O' && board[8] == 'O')) {
		return true;
	}
	else if ((board[0] == 'X' && board[4] == 'X' && board[8] == 'X') ||
			(board[0] == 'O' && board[4] == 'O' && board[8] == 'O')) {
		return true;
	}
	else if ((board[2] == 'X' && board[4] == 'X' && board[6] == 'X') ||
			(board[2] == 'O' && board[4] == 'O' && board[6] == 'O')) {
		return true;
	}
	else {
		return false;
	}
}
