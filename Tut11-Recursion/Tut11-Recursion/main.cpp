#include <iostream>

void printAndDecrementNumber(int number) {
	std::cout << "The number is " << number << std::endl;
	if (number == 0) {
		return;
	}
	number--;
	printAndDecrementNumber(number);
}

int main(int argc, char* argv[]) {
	int count = 10;
	printAndDecrementNumber(count);
	getchar();
}