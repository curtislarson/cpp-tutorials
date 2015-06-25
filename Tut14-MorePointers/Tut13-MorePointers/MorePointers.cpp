#include <iostream>

using namespace std;

int a, b, c;

void passByValue(int val) {
	cout << "PassByValue=" << val << endl;
	val = val * 2;
}

void f(int* ptr) {
	cout << "Address in f=" << ptr << endl;
	cout << "Value in f=" << *ptr << endl;
	*ptr = 20;
	cout << "Address in f2=" << ptr << endl;
	cout << "Value in f2=" << *ptr << endl;
}


int main(int argc, char* argv[]) {

	int foo = 10;
	passByValue(foo);
	cout << "After PassByValue=" << foo << endl;

	int bar = 10;
	cout << "Address in main=" << (long)&bar << endl;
	f(&bar);
	cout << "After f=" << bar << endl;

	a = 10;
	int* bptr = &b;
	cout << (long)bptr << endl;
	bptr = bptr - 1;
	cout << (long)bptr << endl;
	*bptr = 20;

	cout << (long)&a << endl;
	cout << (long)&b << endl;
	cout << (long)&c << endl;

	cout << a << endl;
	getchar();

	return 0;
}