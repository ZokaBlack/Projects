// This program will input the value of two sides of a right triangle and then 
// determine the size of the hypotenuse.
// Austin Lauritzen
// LMD 3/14/2021 21SPR-CSC-5-43410
#include <iostream>  
#include <cmath>     // needed for math functions
#include <iomanip>   // added to fix formatting on hypotenuse
using namespace std;


int main()
{
	float a,b;		   // the smaller two sides of the triangle
	float hyp;		   // the hypotenuse 
   
	cout << "Please input the value of the two sides" << endl;
	cin >> a >> b;

	// Fill in the assignment statement that determines the hypotenuse.
	hyp = sqrt( pow(a,2) + pow(b,2) );
	
	cout << "The sides of the right triangle are " << a << " and " << b << endl;

	cout << fixed << showpoint << setprecision(2) 
	     << "The hypotenuse is " << hyp << endl;

	return 0;
}
