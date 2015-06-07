#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
	using namespace std;

	vector<int> intVector;
	for (int i = 0; i <= 10; i++) {
		intVector.push_back(i);
	}

	for (vector<int>::iterator it = intVector.begin(); it != intVector.end(); ++it) {
		if (*it == 5) {
			cout << "We found 5!" << endl;
		}
		cout << "The item in the iterator is: " << *it << endl;
	}

	getchar();
}