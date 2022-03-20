// Purpose: This program demonstrates a compile error. To also double any number.

// Austin Lauritzen
// CSC 5 - 43410
// Las modified Date: 2/22/2021

#include <iostream>
using namespace std;

int main()
{
	int number;
	float total;

	cout << "Today is a great day for Lab";
	cout << endl << "Let's start off by typing a number of your choice" << endl;
	cin >> number;

	total = number * 2;
	cout << total << " is twice the number you typed" << endl;

	return 0;
}
