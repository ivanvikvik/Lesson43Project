#include <iostream>

using namespace std;
//
//register
//extern
//auto
//static
//int n;

int* test8() {
	static int number = 100;
	return &number;
}

int main() {
	
	int* result = test8();

	cout << "Before:\n";
	cout << "Address: " << result << endl;
	cout << "Value: " << *result << endl;

	sin(100);

	cout << "After:\n";
	cout << "Address: " << result << endl;
	cout << "Value: " << *result << endl;

	delete result;

	return 0;
}