#include <stdio.h>
#include <ctype.h>

int main() {

	FILE *fin = fopen("test.txt", "r");
	FILE *fout = fopen("upper.txt", "w");
	if (fin == NULL) {
		return -1;
	}

	char c;

	while ((c = fgetc(fin)) != EOF) {
		fputc((char)toupper(c), fout);
	}

	fclose(fin);
	fclose(fout);

	int val = remove("test.txt");
	if (val == -1) {
		printf("Remove error.\n");
	}

	val = -1;
	val = rename("upper.txt", "test.txt");
	if (val == -1) {
		printf("Rename error.\n");
	}

	return 0;
}

