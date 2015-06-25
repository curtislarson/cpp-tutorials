#include <iostream>

using namespace std;


void f(int& ref) {
	cout << "address=" << (long)&ref << endl;
	cout << "value=" << ref << endl;
	ref = 20;
	cout << "address2=" << (long)&ref << endl;
	cout << "value2" << ref << endl;
}

void passByValue(int val) {
	cout << "address=" << (long)&val << endl;
	cout << "passByValue=" << val << endl;
	val = 100;
}

int main(int argc, char* argv[]) {

	int bar = 0;
	cout << "address in main=" << (long)&bar << endl;
	passByValue(bar);
	cout << "After passByValue=" << bar << endl;

	int foo = 10;
	cout << "In main address=" << (long)&foo << endl;
	f(foo);
	cout << "In main value=" << foo << endl;

	getchar();
	return 0;
}