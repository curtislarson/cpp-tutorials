#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	using namespace std;

	ifstream in("in.txt");
	ofstream out("out.txt");

	string line;

	while(getline(in,line))
	{
		cout << line << endl;
		out << line << "\n";
	}


	return 1;
}
