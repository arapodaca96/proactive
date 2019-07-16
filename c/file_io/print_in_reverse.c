#include <stdio.h>

int main() {

	FILE* fin = fopen("test.txt", "r");
	FILE *fout = fopen("temp.txt", "w");
	if (fin == NULL) {
		return -1;
	}

	fseek(fin, 0, SEEK_END);
	int count = ftell(fin);
	char c;

	for (int i = 0; i < count; i++) {
		fseek(fin, -i, SEEK_END);
		c = fgetc(fin);
		fputc(c, fout);
	}

	fclose(fin);
	fclose(fout);

	int val = remove("test.txt");
	if (val == -1) {
		printf("Remove error.");
	}

	val = -1;
	val = rename("temp.txt", "test.txt");
	if (val == -1) {
		printf("Rename error.");
	}

	return 0;
}

