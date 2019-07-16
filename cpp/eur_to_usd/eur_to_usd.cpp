#include <iostream>

int main() {

	const double usd_per_eur {1.19};

	std::cout << "Enter the value in EUR: " << std::endl;
	double eur;
	std::cin >> eur;
	std::cout << std::endl;
	std::cout << eur << " Euros is equivalent to $" << eur * usd_per_eur << std::endl;

	return 0;
}
