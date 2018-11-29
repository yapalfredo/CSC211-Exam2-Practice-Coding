#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;


template <typename T>

void squareIterator(vector<T> vec, int SIZE)
{
	if (SIZE <= 0) throw string("Invalid Vector Size!");

	ofstream outputFile("output.txt", ios::out);

	outputFile << "Save this to text file." << endl;

	for (int i = 0; i < SIZE; i++)
	{
		vec.push_back(i*i);
	}

	typename vector<T>::iterator iter = vec.begin();
	while (iter != vec.end())
	{
		cout << *iter << endl;
		outputFile << *iter << endl;
		iter++;
	}
}


int main()
{
	vector<int> myVector;

	try
	{
		squareIterator(myVector, 11);
	}
	catch (string str)
	{
		cout << str << endl;
	}

	system("pause");
	return 0;
}