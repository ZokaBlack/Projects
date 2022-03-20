// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box
// Austin Lauritzen
// LMD: 6/5/2021 CSC-5-43410
#include <iostream>
#include <iomanip>
using namespace std;

// Fill in code to declare a structure named dimensions that
// contains 2 float members, length and width
struct dimensions
{
    float Length, Width;
};
// exercise 2
struct results
{
    float Area, Perimeter;
};
// Fill in code to declare a structure named rectangle that contains
// 3 members, area, perimeter, and sizes. area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable
struct rectangle
{
    results Formula;
    dimensions sizes;
};

float area(float,float);
float perimeter(float,float);
int main()
{
	// Fill in code to define a rectangle structure variable named box.
    rectangle box;
	cout << "Enter the length of a rectangle: ";
	// Fill in code to read in the length to the appropriate location
    cin >> box.sizes.Length;
	cout << "Enter the width of a rectangle: ";
	// Fill in code to read in the width to the appropriate location
    cin >> box.sizes.Width;
	cout << endl << endl;
    
	cout << fixed << showpoint << setprecision(2);
    area(box.sizes.Width, box.sizes.Length);
	cout << "The area of the rectangle is " << area(box.sizes.Width, box.sizes.Length) << endl;
	
    perimeter(box.sizes.Width, box.sizes.Length);
	cout << "The perimeter of the rectangle is " << perimeter(box.sizes.Width, box.sizes.Length)
		 << endl;

	return 0;
}

float area(float width, float length)
{
    return width * length; 
}
float perimeter(float width, float length)
{
    return 2*(width + length);
}
