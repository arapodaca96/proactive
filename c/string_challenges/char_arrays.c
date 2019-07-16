#include <stdio.h>
#include <stdbool.h>

int string_length(const char[]);
void string_concat(const char[], const char[], char[]);
_Bool strings_equal(const char[], const char[]);

int main() {

	printf("Enter first string: ");
	fflush(stdout);
	char firstString[500];
	scanf("%s", firstString);

	printf("Enter second string: ");
	fflush(stdout);
	char secondString[500];
	scanf("%s", secondString);

	char combinedString[1000];

	printf("\n");
	printf("First string: %s\n", firstString);
	printf("Second string: %s\n", secondString);

	printf("\n");
	printf("Length of first string: %d\n", string_length(firstString));
	printf("Length of second string: %d\n", string_length(secondString));

	printf("\n");
	string_concat(firstString, secondString, combinedString);
	printf("Concatenated strings: %s\n", combinedString);

	printf("\n");
	printf("Are the strings equal? %d\n", strings_equal(firstString, secondString));

	return 0;
}

int string_length(const char str[]) {

	int i = 0;

	while (str[i] != '\0') {

		i++;
	}

	return i;
}

void string_concat(const char str1[], const char str2[], char result[]) {

	int length1 = string_length(str1);
	int length2 = string_length(str2);

	for (int i = 0; i < length1; i++) {
		result[i] = str1[i];
	}
	for (int i = length1; i < (length1 + length2); i++) {
		result[i] = str2[i - length1];
	}
	result[length1 + length2] = '\0';

	return;
}

_Bool strings_equal(const char str1[], const char str2[]) {

	if (string_length(str1) != string_length(str2)) {
		return false;
	}

	for (int i = 0; i < string_length(str1); i++) {
		if (str1[i] != str2[i]) {
			return false;
		}
	}

	return true;
}

