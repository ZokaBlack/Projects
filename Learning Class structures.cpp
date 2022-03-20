// This program declares the Square class and uses member functions to find
// the perimeter and area of the square
// Austin Lauritzen
// LMD: 6/9/2021 CSC-5-43410

#include <iostream>
using namespace std;

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
// THE IMPLEMENTATION SECTION.

class Square
{
    public:
    int side;
    //exercise 2: Create two constructors and 1 destructor
    Square()
    {
        side = 1;
    }
    Square (int x)
    {
        side = x;
    }
    ~Square () {}
    
    void setSide(float);
    float findArea();
    float findPerimeter();
};

int main()
{
	Square box1(9);	//exercise 2
	Square box;// box is defined as an object of the Square class
	float size;	// size contains the length of a side of the square

	// FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
	// SIDE OF THE SQUARE. (This is stored in size)
    cout << "Please input the length of the square's side: ";
    cin >> size;
    
	// FILL IN THE CODE THAT CALLS SetSide.
    box.setSide(size);
    
	// FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
	// AND PRINT OUT THE AREA TO THE SCREEN.
   cout << "The Area of your square is: " << box.findArea() << endl;
    
	// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
    cout << "The Perimeter of your square is: " << box.findPerimeter() << endl;
    
    cout << "\nThe Area of box1 is: " << box1.findArea() << endl;
    cout << "The Perimeter of box1 is: " << box1.findPerimeter() << endl;
    
	return 0;
}

// _______________________________________________________
//
// Implementation section	Member function implementation

//**************************************************
//  setSide
//
//  task:	 This procedure takes the length of a side and
//	         places it in the appropriate member data
//  data in: length of a side
//***************************************************

void Square::setSide(float length)
{
	side = length;
}

//**************************************************
//	findArea
//
//  task:	       This finds the area of a square
//  data in:       none (uses value of data member side)
//  data returned: area of square
//***************************************************

float Square::findArea()
{
	return side * side;
}

//**************************************************
//	findPerimeter
//
//  task:	       This finds the perimeter of a square
//  data in:       none (uses value of data member side)
//  data returned: perimeter of square
//***************************************************

float Square::findPerimeter()
{
	return 4 * side;
}
