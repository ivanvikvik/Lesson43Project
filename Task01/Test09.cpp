#include <iostream>

using namespace std;

int main() {
	int size = 5;

	/*do {
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);*/

	int* pointer = new int[size];

	for (int i = 0; i < size; i++)
	{
		*(pointer + i) = rand() % 100;
	}

	cout << "Dynamic array elements: ";
	for (int i = 0; i < size; i++)
	{
		cout << *(pointer + i) << " ";
	}

	delete[] pointer;

	return 0;
}