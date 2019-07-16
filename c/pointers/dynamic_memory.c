#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("Enter the string length limit: ");
	fflush(stdout);
	int limit = 0;
	scanf("%d", &limit);
	limit++;

	printf("Enter the string: ");
	fflush(stdout);
	char *str = (char*)malloc(limit * sizeof(char));

	if (str != NULL) {
		scanf(" ");
		fgets(str, limit, stdin);
		printf("You entered: %s\n", str);
	}
	else {
		printf("Error. \n");
	}

	free(str);

	return 0;
}

