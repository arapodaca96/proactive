#include <iostream>

int * apply_all(int *, int, int *, int);
void print(int *, int);

int main() {

	int size1 = 5;
	int size2 = 3;
	int arr1[size1] {1, 2, 3, 4, 5};
	int arr2[size2] {1, 2, 3};

	std::cout << "Array 1: ";
	print(arr1, size1);
	std::cout << std::endl;

	std::cout << "Array 2: ";
	print(arr2, size2);
	std::cout << std::endl;

	int *results = apply_all(arr1, size1, arr2, size2);
	std::cout << "Array 3: ";
	print(results, size1 * size2);
	std::cout << std::endl;

	return 0;
}

int * apply_all(int *arr1, int size1, int *arr2, int size2) {

	int *new_arr {new int[size1 * size2]};

	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size1; j++) {
			*(new_arr + (j + size1*i)) = *(arr1 + j) * *(arr2 + i);
		}
	}

	return new_arr;
}

void print(int *arr, int size) {

	std::cout << "[ ";

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << "]" << std::endl;
}

