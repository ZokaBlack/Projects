// Purpose: This program will take a number and divide it by 2.

// Austin Lauritzen
// CSC 5 - 43410
// Las modified Date: 2/22/2021


#include <iostream>
using namespace std;

int main()
{
	float number;
	int divider;

	divider = 2;

	cout << "Hi there" << endl;
	cout << "Please input a number and then hit return" << endl;
	cin >> number;

	number = number / divider;

	cout << "Half of your number is " << number << endl;

	return 0;
}
