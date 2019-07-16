#include <iostream>

int main() {

	std::cout << "Enter an amount in cents: " << std::endl;

	int cents;
	std::cin >> cents;

	std::cout << "You can provide this change as follows: " << std::endl;

	int dollars {0}, quarters {0}, dimes {0}, nickels {0}, pennies {0};

	dollars = cents / 100;
	cents = cents % 100;

	quarters = cents / 25;
	cents = cents % 25;

	dimes = cents / 10;
	cents = cents % 10;

	nickels = cents / 5;
	cents = cents % 5;

	pennies = cents;

	std::cout << "Dollars: " << dollars << std::endl;
	std::cout << "Quarters: " << quarters << std::endl;
	std::cout << "Dimes: " << dimes << std::endl;
	std::cout << "Nickels: " << nickels << std::endl;
	std::cout << "Pennies: " << pennies << std::endl;

	return 0;
}
