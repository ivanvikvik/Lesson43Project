#include <iostream>

using namespace std;

//int* init(int size) {
//	int* array = new int[size];
//	return array;
//}
//
//void clear(int* array) {
//	delete[] array;
//}

int* test7() {
	int* pointer = new int;
	*pointer = 100;
	return pointer;
}

int main() {
	int* result = test7();

	sin(100);

	cout << "Address: " << result << endl;
	cout << "Value: " << *result << endl;

	delete result;

	return 0;
}