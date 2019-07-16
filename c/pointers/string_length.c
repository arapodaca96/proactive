#include <stdio.h>

int string_length(const char*);

int main() {

	char *str = "Alejandro";

	printf("String Length: %d", string_length(str));

	return 0;
}

int string_length(const char* string) {

	const char *string_end = string;

	while (*string_end != '\0') {
		string_end++;
	}

	return (string_end - string);
}

