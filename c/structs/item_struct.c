#include <stdio.h>
#include <stdlib.h>

// Structs
struct item {

	char *itemName;
	int quantity;
	float price;
	float amount; //quantity * price

};

// Function Declarations
void readItem(struct item *);
void printItem(struct item *);

// Global Variables
int NAME_LIMIT = 32;

// Main Function
int main() {

	struct item i1; //= {NULL, 0, 0.0, 0.0};
	struct item *p_i1 = &i1; //(struct item*)calloc(1, sizeof(struct item));

	p_i1->itemName = (char *)malloc(NAME_LIMIT * sizeof(char));
	if (p_i1->itemName == NULL) {
		return -1;
	}

	readItem(p_i1);
	printItem(p_i1);

	free(p_i1);

	return 0;
}

// Function Definitions
void readItem(struct item *str_ptr) {

	printf("Enter product name, price, and quantity: \n");
	fflush(stdout);
	scanf("%s %f %d", str_ptr->itemName, &str_ptr->price, &str_ptr->quantity);
	str_ptr->amount = str_ptr->price * str_ptr->quantity;

}

void printItem(struct item *str_ptr) {

	printf("\n");
	printf("Item Name: %s\n", str_ptr->itemName);
	printf("Unit Price: $%.2f\n", str_ptr->price);
	printf("Quantity: %d units\n", str_ptr->quantity);
	printf("Subtotal: $%.2f\n", str_ptr->amount);

}

