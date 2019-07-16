#include <iostream>
#include <vector>

int main() {

	std::cout << "Enter the number of bins for your graph: " << std::endl;
	short bins{ 0 };
	std::cin >> bins;

	std::cout << "Please enter " << bins << " values: " << std::endl;
	std::vector<double> vals {};

	for (short i{ 0 }; i < bins; i++) {
		double input{ 0.0 };
		std::cin >> input;
		vals.push_back(input);
	}

	std::cout << std::endl << "You entered: ";
	for (auto val: vals) {
		std::cout << val << " ";
	}

	return 0;
}
