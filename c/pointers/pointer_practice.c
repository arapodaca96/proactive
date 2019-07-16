#include <stdio.h>

int main() {

	int val = 100;

	int *p_val = &val;

	printf("val Address: %p\n", p_val);
	printf("p_val Address: %p\n", &p_val);
	printf("p_val Address contents: %d\n", *p_val);

	return 0;
}

