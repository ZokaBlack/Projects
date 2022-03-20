// This program demonstrates partially initialized structure variables
// Austin Lauritzen
// LMD: 6/5/2021 CSC-5-43410
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct taxPayer
{
	string name;
	long socialSecNum;
	float taxRate;
	float income;
	float taxes;
};

int main()
{
	// Fill in code to initialize a structure variable named citizen1 so that
	// the first three members are initialized.	Assume the name is Tim
	// McGuiness, the social security number is 255871234, and the tax rate is .35
    taxPayer citizen1 = {"Tim Mcguiness", 255871234, .35};
	// Fill in code to initialize a structure variable named citizen2 so that
	// the first three members are initialized.	Assume the name is John Kane,
	// the social security number is 278990582, and the tax rate is .29
    taxPayer citizen2 = {"John Kane", 278990582, .29};
	cout << fixed << showpoint << setprecision(2);
	// Fill in code to prompt the user to enter this year's income for the citizen1
	// Fill in code to read in this income to the appropriate structure member
	// Fill in code to determine this year's taxes for citizen1
    cout << "Please input the yearly income for Tim McGuiness: ";
    cin >> citizen1.income;
    citizen1.taxes = citizen1.taxRate * citizen1.income;
	cout << "Name: " << citizen1.name << endl;
	cout << "Social Security Number: " << citizen1.socialSecNum << endl;
	cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;
	// Fill in code to prompt the user to enter this year's income for citizen2
	// Fill in code to read in this income to the appropriate structure member
	// Fill in code to determine this year's taxes for citizen2
    cout << "Please input the yearly income for John Kane: ";
    cin >> citizen2.income;
    citizen2.taxes = citizen2.taxRate * citizen2.income;
	cout << "Name: " << citizen2.name << endl;

	cout << "Social Security Number: " << citizen2.socialSecNum << endl;

	cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;

	return 0;
}
