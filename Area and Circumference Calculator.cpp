// This program will output the circumference and area
// of the circle with a given radius.

// Austin Lauritzen
// LMD 3/8/2021 CSC-5-43410

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4; // Modify this number to find out the Area and Circumference of whatever number

int main()
{
    float area;                         // definition of area of circle
    float circumference;                // definition of circumference
    circumference = 2 * PI * RADIUS;    // computes circumference
    area = PI * (RADIUS    * RADIUS);   // computes area

    cout << "The circumference of the circle is " << circumference << " units \n"; // Fill in the code for the cout statement that will output (with description)
    // the circumference
    cout << "The area of the circle is " << area << " units squared \n";
    // Fill in the code for the cout statement that will output (with description) // the area of the circle
    
    return 0;
}
