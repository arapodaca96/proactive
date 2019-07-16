#include <iostream>

int main() {

	std::cout << "Please enter a string for your pyramid: ";
	std::string str {};
	getline(std::cin, str);

	//reverse string
	std::string rev_string {str};
	for (unsigned i {0}; i < str.length(); i++) {
		rev_string.at(i) = str.at(str.length() - i - 1);
	}

	//make pyramid
	for (unsigned i {0}; i < str.length(); i++) {	//each row of pyramid

		if (i > 0) {
			//print spaces
			for (unsigned j {i}; j < str.length() - 1; j++) {
				std::cout << " ";
			}

			//print string portion
			std::cout << str.substr(0, i + 1);

			//print reverse portion of string
			std::cout << rev_string.substr(str.length() - i, i + 1) << std::endl;
		}
		else {
			//print spaces
			for (unsigned j {i}; j < str.length() - 1; j++) {
				std::cout << " ";
			}

			//print string portion
			std::cout << str.substr(0, i + 1);
			std::cout << std::endl;
		}
	}

	return 0;
}
