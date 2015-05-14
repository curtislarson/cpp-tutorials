#include <vector>
#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	using namespace std;

	ifstream in("in.txt");

	string word;

	vector<string> stringVector;
	//vector<int> intVector

	while(in >> word)
	{
		stringVector.push_back(word);
	}

	cout << "The number of words in this paragraph is " << stringVector.size() << endl;

	for(int i = 0; i < stringVector.size(); i++)
	{
		cout << stringVector[i] << endl;
	}

	return 1;

}

//The | overall | body
