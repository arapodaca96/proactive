#include <stdio.h>

void square_number(int *);

int main() {

	printf("Enter an integer: ");
	fflush(stdout);
	int num = 0;
	scanf("%d", &num);

	printf("Before pass by reference: %d\n", num);

	square_number(&num);

	printf("After pass by reference: %d\n", num);

	return 0;
}

void square_number(int * input) {

	*input = (*input) * (*input);

	return;
}

