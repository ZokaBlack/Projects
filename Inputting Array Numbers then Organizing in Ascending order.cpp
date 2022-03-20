// Write a program that will read scores into an array. 
//The size of the array should be input by the user (dynamic array).
// Austin Lauritzen
// LMD: 5/15/2021 
// CSC-5-43410

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
using namespace std;

void sort(float* score, int num_scores); 

int main()
{
    float *score = nullptr;	// a pointer used to point to an array
	                                // holding monthly sales 

	float total = 0;	// total of all sales
	float average;		// average of monthly sales
	int num_scores;		// number of sales to be processed 
	int count;			// loop counter

    cout << "Please input the number of scores" << endl;
    cin >> num_scores;
        
    while (num_scores <= 0) // checks for a legal value
    {
    cout << "There must be at least one sale. Please reenter.\n";
    cout << "How many sales will be processed " << endl;
    cin >> num_scores;
    }
    score = new float(num_scores);
    
    if (score == nullptr)
    {
        cout << "Error allocating memory!\n";
		return 1;
    }
    
    cout << "Please enter a score\n";
    
    for (count = 0; count < num_scores; count++)
	{
	    cout << "Score " << (count + 1) << ": ";
        cin >> score[count];
        total = total + score[count];
	}
	
    average = total / num_scores;
    cout << "The average of the scores is " << average;

    sort(score,num_scores); // call to the function
    delete score; // deallocate memory
}

void sort(float* score, int num_scores)
{
    
std::sort(score, score + num_scores, std::less<float>());
cout << "\n\nHere are the scores in ascending order\n";

for (int i=0; i<num_scores; i++) 
    {
        cout << score[i] << '\n';
    }
}
