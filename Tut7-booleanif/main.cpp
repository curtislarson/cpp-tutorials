#include <string>
#include <iostream>


bool isCool(std::string name) {
	if (name == "quackware") {
		return true;
	}
	else {
		return false;
	}
}

void printAgeType(int age) {
	if (age < 12) {
		std::cout << "Kid!" << std::endl;
	}
	else if(age < 18) {
		std::cout << "Young adult!" << std::endl;
	}
	else if(age < 30) {
		std::cout << "Adult!" << std::endl;
	}
	else {
		std::cout << "OLD" << std::endl;
	}
}

int main(int argc, char* argv[]) {
	bool trueVal = true;
	bool falseVal = false;

	if (trueVal) {
		std::cout << "This will print!" << std::endl;
	}
	else {
		std::cout << "This will not print!" << std::endl;
	}

	if (falseVal) {
		std::cout << "This will print2!" << std::endl;
	}
	else {
		std::cout << "This will not print2!" << std::endl;
	}

	if (!falseVal) {
		std::cout << "This will print3!" << std::endl;
	}

	// &&
	// ||
	if (-1) {
		std::cout << "True?" << std::endl;
	}

	if (!falseVal && trueVal) {
		std::cout << "&& Example!" << std::endl;
	}

	if (trueVal || falseVal) {
		std::cout << "|| Example!" << std::endl;
	}

	std::string name = "quackware";
	std::cout << "Cool=" << isCool(name) << std::endl;

	printAgeType(29);
	printAgeType(1);
	printAgeType(13);
	printAgeType(99);
}
