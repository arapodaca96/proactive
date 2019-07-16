#include <stdio.h>

int main() {

	FILE *fp = fopen("test.txt", "r");
	if (fp == NULL) {
		printf("Error\n");
		return -1;
	}

	char c;
	int i = 0;

	while ((c = fgetc(fp)) != EOF) {
		if (c == '\n')
			i++;
	}

	printf("Number of lines in file: %d\n", i);

	fclose(fp);

	return 0;
}

