// Purpose: This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.

// Austin Lauritzen
// CSC 5 - 43410
// Last modified Date: 2/22/2021


#include <iostream>
using namespace std;

int main()
{
	float firstNumber; //First number entered by the user
	float secondNumber; //Second number entered by the user
	float temp; //Hold temporary data

	// Prompt user to enter the first number. 
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Prompt user to enter the second number. 
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.
	cout << endl << "You input the numbers as " << firstNumber
		 << " and " << secondNumber << endl;

	// Now we will swap the values. 
	temp = firstNumber;
	firstNumber = secondNumber;
	secondNumber = temp;

	// Output the values.
	cout << "After swapping, the values of the two numbers are "
		 << firstNumber << " and " << secondNumber << endl;

	return 0;
}
