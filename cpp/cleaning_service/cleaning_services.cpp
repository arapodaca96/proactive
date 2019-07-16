#include <iostream>

int main() {

	const float cost_small_room {25.00};
	const float cost_large_room {35.00};
	const float tax_rate {0.091};
	const int expiry {30};

	std::cout << "Carpet Cleaning Service\n" << std::endl;
	std::cout << "How many small rooms? " << std::endl;
	int small_rooms;
	std::cin >> small_rooms;
	std::cout << "How many large rooms? " << std::endl;
	int large_rooms;
	std::cin >> large_rooms;

	std::cout << "\nEstimate for service..." << std::endl;
	std::cout << "Number of small rooms: " << small_rooms << std::endl;
	std::cout << "Number of large rooms: " << large_rooms << std::endl;

	std::cout << "Price per small room: $" << cost_small_room << std::endl;
	std::cout << "Price per large room: $" << cost_large_room << std::endl;

	float cost {(cost_small_room * small_rooms) + (cost_large_room * large_rooms)};
	std::cout << "Cost: $" << cost << std::endl;

	float tax {(cost) * tax_rate};
	std::cout << "Tax: $" << tax << std::endl;

	std::cout << "====================================================" << std::endl;
	std::cout << "Total estimate: $" << cost + tax << std::endl;
	std::cout << "This estimate is valid for " << expiry << " days" << std::endl;

	return 0;
}

