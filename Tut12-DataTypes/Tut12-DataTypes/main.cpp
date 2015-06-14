#include <iostream>

int main(int argc, char* argv[]) {
	char character = 'a';
	char another = 'b';
	char middleInitial = 'M';

	int grade = 100;
	int grade2 = 95.5;

	long largeGrade = 1000000000000;

	float decimalGrade = 95.5;

	double decimalNumber = .123123123131;

	bool amIAwesome = true;
	bool amICool = false;
	// > < >= <= == !=
	if (decimalGrade != 95.51) {
		std::cout << "I'm cool!" << std::endl;
	}

	// if, for, while, do

	std::cout << decimalNumber << std::endl;
	getchar();

}