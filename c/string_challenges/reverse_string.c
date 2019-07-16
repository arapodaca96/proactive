#include <stdio.h>
#include <string.h>

void reverse_string(char[]);

int main () {

	printf("Enter string: ");
	fflush(stdout);
	char string[160];
	fgets(string, 160, stdin);

	reverse_string(string);

	printf("Reversed string: %s\n", string);

	return 0;
}

void reverse_string(char str[]) {

	char temp;
	for (int i = 0; i < strlen(str) / 2; i++) {
		temp = str[i];
		str[i] = str[strlen(str) - 1 - i];
		str[strlen(str) - 1 - i] = temp;
	}

	return;
}


