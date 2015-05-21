#include <string>
#include <iostream>
#include <stdlib.h>

int add(int first, int second) {
	return first + second;
}

std::string add(std::string first, std::string second) {
	return first + second;
}

void print(int printVal) {
	std::cout << printVal << std::endl;
}

/*void print(std::string printVal) {
	std::cout << "Printing a string!" << std::endl;
	std::cout << printVal << std::endl;
}*/


int main(int argc, char* argv[]) {
	int first = 10;
	int second = 33;
	int added = add(first, second);
	std::string firstString = "Hello ";
	std::string secondString = "World!";
	std::string addString = add(firstString, secondString);

	print(first);
	print(added);

	std::string integerString = "20";
	int val = atoi(integerString.c_str());
	print(val);
}
