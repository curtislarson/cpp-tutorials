#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	using namespace std;

	/*while (true) {
		cout << "Please enter an option a, b, c (e to exit):";
		char option;
		cin >> option;

		switch (option) {
		case 'a':
			cout << "Option a, your the best!" << endl;
			break;
		case 'b':
			cout << "Option b, you lose!" << endl;
		case 'c':
			cout << "Option c, nothing!" << endl;
			break;
		case 'e':
			return 0;
		default:
			cout << "Please enter a valid option!" << endl;
			break;
		}
	}*/

	for (int i = 0; i < 5; i++) {
		if (i == 2) {
			break;
		}
		cout << "Number: " << i << endl;
	}
	getchar();
}