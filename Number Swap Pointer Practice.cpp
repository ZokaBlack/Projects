// Write a program that will read two floating point numbers 
// (the first read into a variable called first and the second read 
// into a variable called second) and then calls the function swap with the actual parameters first and second. 
// Austin Lauritzen
// LMD: 4/10/2021  21SPR-CSC-5-43410

#include <iostream>
using std::cin;
using std::cout;

// template function for swapping two variables of the same type
template <typename T> void swap_values( T&, T& );

int main() {
	double first, second;
	
	cout << "Enter the first number\nThen hit enter\n";
	cin >> first;
	cout << "Enter the second number\nThen hit enter\n";
	cin >> second;
	
	double init_f = first, init_s = second;
	
	swap_values( first, second );
	
	cout << "You input the numbers as " << init_f << " and " << init_s << ".\n"
	     << "After swapping, the first number has the value of " << first
	     << "\n which was the value of the second number\n"
	        "The second number has the value of " << second 
	     << "\n which was the value of the first number\n";

	return 0;
}

// definition of the template function: 
//   takes references to two variables and swaps their values.
template <typename T>
void swap_values( T& f, T& s ) {
	T tmp = f;
	    f = s;
	    s = tmp;
}
