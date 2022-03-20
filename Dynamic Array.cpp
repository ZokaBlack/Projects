// This program demonstrates the use of dynamic arrays

// Austin Lauritzen
// LMD: 5/15/2021 
// CSC-5-43410

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float *monthSales = nullptr;	// a pointer used to point to an array
	                                // holding monthly sales 

	float total = 0;	// total of all sales
	float average;		// average of monthly sales
	int numOfSales;		// number of sales to be processed 
	int count;			// loop counter

	cout << fixed << showpoint << setprecision(2);

	cout << "How many monthly sales will be processed? ";
	cin >> numOfSales;
    
    while (numOfSales <= 0) // checks for a legal value
    {
    cout << "There must be at least one sale. Please reenter.\n";
    cout << "How many sales will be processed " << endl;
    cin >> numOfSales;
    }

	// Fill in the code to allocate memory for the array pointed to by
	// monthSales.
    monthSales = new float(numOfSales);
    
	if (monthSales == nullptr) 
	   // Fill in the condition to determine if memory has been
	   // allocated (or eliminate this if construct if your instructor
	   // tells you it is not needed for your compiler) )
	{
		cout << "Error allocating memory!\n";
		return 1;
	}

	cout << "Enter the sales below\n";

	for (count = 0; count < numOfSales; count++)
	{
	    cout << "Sales for Month number " << (count + 1) << ": ";
        cin >> monthSales[count];
        total = total + monthSales[count];

		// Fill in code to bring sales into an element of the array
	}

	average = total / numOfSales; // Fill in code to find the average

	cout << "Average Monthly sale is $" << average << endl;
    
	// Fill in the code to deallocate memory assigned to the array.
    delete monthSales;
	return 0;
}
