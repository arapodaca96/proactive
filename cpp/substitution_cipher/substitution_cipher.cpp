#include <iostream>

int main() {

	std::cout << "Please enter the message to encrypt: ";
	std::string secret_message {};
	getline(std::cin, secret_message);

	std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	std::string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

	std::cout << "\nEncrypting message..." << std::endl;

	for (unsigned i {0}; i < secret_message.length(); i++) {
		//Check if character is alpha
		if (isalpha(secret_message.at(i))) {
			unsigned key_index {alphabet.find(secret_message.at(i))};
			char key_char {key.at(key_index)};
			secret_message.at(i) = key_char;
		}
	}

	std::cout << "\nEncrypted message: " << secret_message << std::endl;

	std::cout << "\nDecrypting message..." << std::endl;

	for (unsigned i {0}; i < secret_message.length(); i++) {
		//Check if character is alpha
		if (isalpha(secret_message.at(i))) {
			unsigned alpha_index {key.find(secret_message.at(i))};
			char alpha_char {alphabet.at(alpha_index)};
			secret_message.at(i) = alpha_char;
		}
	}

	std::cout << "\nDecrypted message: " << secret_message << std::endl;

	return 0;
}
