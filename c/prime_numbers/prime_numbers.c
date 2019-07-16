#include <stdio.h>

int main() {

	printf("Prime numbers from 1 to... ");
	fflush(stdout);
	int end = 0;
	scanf("%d", &end);

	printf("2\n");

	for (int i = 3; i < end; i += 2) {
		_Bool isPrime = 1;
		for (int j = 2; j < i/2; j++) {
			if (i % j == 0) {
				isPrime = 0;
			}
		}
		if (isPrime) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}
