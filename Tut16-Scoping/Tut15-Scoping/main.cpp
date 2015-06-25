#include <iostream>

using namespace std;

int g1 = 0;
int g2 = 0;

int foo() {
	int numCats = 10;
	return numCats;
}

void bar() {
	g1 = 1;
}

int main(int argc, char* argv[]) {

	int numDogs = 4;
	cout << numDogs << endl;

	{
		int numHorses = 10;
		cout << numHorses << endl;
	}

	for (int i = 0; i < 5; i++) {
		cout << i << endl;
	}

	cout << g2 << endl;

	g2 = 10;

	cout << g2 << endl;

	cout << g1 << endl;
	bar();

	cout << g1 << endl;
	getchar();
	return 0;
}