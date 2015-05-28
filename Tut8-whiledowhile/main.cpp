#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	std::string password = "password1234";
	std::string guess;
	/*while (guess != password) {
		std::cout << "Password: ";
		std::cin >> guess;
	}*/
	do {
		std::cout << "Password: ";
		std::cin >> guess;
	} while(guess != password);
	std::cout << "Access granted!" << std::endl;
}
