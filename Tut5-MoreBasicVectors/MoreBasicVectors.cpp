#include <iostream>
#include <fstream>
#include <vector>


int main(int argc, char* argv[])
{
	using namespace std;

	ifstream in("in.txt");
	int readNumber;

	vector<int> numberVector;

	while(in >> readNumber)
	{
		numberVector.push_back(readNumber);
	}

	cout << "The number of numbers in this file is " << numberVector.size() << endl;

	int userNumber;

	while(true)
	{
		int counter = 0;
		cout << "Please enter the number you want to check occurrences of: ";
		cin >> userNumber;
		for(int i = 0;i<numberVector.size();i++)
		{
			if(userNumber == numberVector[i])
			{
				counter++;
			}
		}
		cout << "This number " << userNumber << " has occured " << counter << " times" << endl;

	}

	return 1;
}
