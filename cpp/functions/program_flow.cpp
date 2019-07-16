#include <iostream>
#include <vector>

char display_menu();
void print_vector(std::vector<int>&);
void add_number(std::vector<int>&);
void delete_number(std::vector<int>&);
void clear_vector(std::vector<int>&);
void calculate_mean(std::vector<int>&);
void find_smallest_number(std::vector<int>&);
void find_largest_number(std::vector<int>&);

int main() {

	char menu_option {};
	std::vector<int> vals {};

	do {
		menu_option = display_menu();

		switch (menu_option) {
		//Print numbers ----------------------------------------------------------
			case 'p':
			case 'P':
				print_vector(vals);
			break;

		//Add a number -----------------------------------------------------------
			case 'a':
			case 'A':
				add_number(vals);
			break;

		//Delete number ----------------------------------------------------------
			case 'd':
			case 'D':
				delete_number(vals);
			break;

		//Clear list -------------------------------------------------------------
			case 'c':
			case 'C':
				clear_vector(vals);
			break;

		//Calculate mean ---------------------------------------------------------
			case 'm':
			case 'M':
				calculate_mean(vals);
			break;

		//Find smallest number ---------------------------------------------------
			case 's':
			case 'S':
				find_smallest_number(vals);
			break;

		//Find largest number ----------------------------------------------------
			case 'l':
			case 'L':
				find_largest_number(vals);
			break;

		//Quit program -----------------------------------------------------------
			case 'q':
			case 'Q':
				std::cout << "\nGoodbye..." << std::endl;
			break;

		//Invalid entry ----------------------------------------------------------
			default:
				std::cout << "Invalid entry. Please try again.\n" << std::endl;
				std::cin.clear();
			break;
		}


	} while (((menu_option != 'q') && (menu_option != 'Q')));

	return 0;
}

char display_menu() {
	char option {};
	std::cout << "*--------------------------------------------------*" << std::endl;
	std::cout << "P - Print Numbers" << std::endl;
	std::cout << "A - Add a Number" << std::endl;
	std::cout << "D - Delete a Number" << std::endl;
	std::cout << "C - Clear List" << std::endl;
	std::cout << "M - Display Mean of the Numbers" << std::endl;
	std::cout << "S - Display the Smallest Number" << std::endl;
	std::cout << "L - Display the Largest Number" << std::endl;
	std::cout << "Q - Quit Program" << std::endl;
	std::cout << "*--------------------------------------------------*";
	std::cout << std::endl << "Enter your choice: ";
	std::cin >> option;
	return option;
}

void print_vector(std::vector<int> &vals) {
	if (vals.size() != 0) {
		std::cout << "[ ";

		for (auto val: vals) {
			std::cout << val << " ";
		}

		std::cout << "]" << std::endl;
	}
	else {
		std::cout << "List is currently empty: []" << std::endl;
	}
}

void add_number(std::vector<int> &vals) {
	std::cout << "Enter new value: ";
	int new_val;
	std::cin >> new_val;

	if (!std::cin.fail()) {
		vals.push_back(new_val);
	}
	else {
		std::cout << "Invalid entry." << std::endl;
		std::cin.clear();
	}
}

void delete_number(std::vector<int> &vals) {
	if (vals.size() != 0) {
		std::cout << "[ ";
		for (auto val: vals) {
			std::cout << val << " ";
		}
		std::cout << "]" << std::endl;

		std::cout << "Enter index to delete: ";
		unsigned index;
		std::cin >> index;

		if (!std::cin.fail()) {
			if ((index >= 0) && (index < vals.size())) {
				vals.erase(vals.begin() + index);
			}
			else {
				std::cout << "Invalid index." << std::endl;
			}
		}
		else {
			std::cout << "Invalid entry." << std::endl;
			std::cin.clear();
		}
	}
	else {
		std::cout << "List empty." << std::endl;
	}
}

void clear_vector(std::vector<int> &vals) {
	if (vals.size() != 0) {
		vals.clear();
		std::cout << "Listed cleared." << std::endl;
	}
	else {
		std::cout << "List empty." << std::endl;
	}
}

void calculate_mean(std::vector<int> &vals) {
	if (vals.size() != 0) {
		int sum {0};
		for (auto val: vals) {
			sum += val;
		}
		std::cout << "Mean value: ";
		std::cout << static_cast<double>(sum)/vals.size() << std::endl;
	}
	else {
		std::cout << "List empty." << std::endl;
	}
}

void find_smallest_number(std::vector<int> &vals) {
	if (vals.size() != 0) {
		int smallest {vals.at(0)};
		for (auto val: vals) {
			if (val < smallest) {
				smallest = val;
			}
		}
		std::cout << "Smallest value: " << smallest << std::endl;
	}
	else {
		std::cout << "List empty." << std::endl;
	}
}

void find_largest_number(std::vector<int> &vals) {
	if (vals.size() != 0) {
		int largest {vals.at(0)};
		for (auto val: vals) {
			if (val > largest) {
				largest = val;
			}
		}
		std::cout << "Largest value: " << largest << std::endl;
	}
	else {
		std::cout << "List empty." << std::endl;
	}
}

