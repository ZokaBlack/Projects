// Test Average program
// Austin Lauritzen
// LMD 4/23/2021
// 21SPR-CSC-5-43410
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    
const int Scores = 5;

// 5 scores variables    
int n, i, temp;
double average = 0;
double sum = 0;
int Total;
char again;
int Many;
int menu;
    
   do{
       cout << "\nDo you want to start the average test scores program (1) or quit (2)\n";
       cin >> menu;
	if (menu == 1)
	{
	    cout << "\nBooting up the Program\n" << endl;
	}
	else if (menu == 2)
	{
	   cout << "\nClosing Program\n" << endl;
	   exit(1);
	}
    else
    {
        cout << "Please enter a valid number" << endl;
        cin >> menu;
    }


    cout << "\nAverage Calculator\n";
    cout << "Press enter to continue";
        cin.get();
    cout << endl;
    
    cout << "Enter the grades you want to find the average of:";
    cin >> n;
    
    for (i = 0; i < n; i++)
     {
        cout << "Enter number" << i + 1 << ":";
        cin >> temp;

        //add each number to the sum of all the previous numbers to find the final sum
        sum += temp;
    }
    
    average = sum / n;

    cout << "\n\nThe Average of the " << n << " numbers entered by the user is : " << average << "%" << endl;

    cout << setprecision(1) << fixed;
    
    
   if(average == 100) 
		cout << "Perfect score, Good job!";
	    else if(average >= 90 && average < 100)
	 	    cout << "\nThe average is a A!";
	    else if(average >= 80 && average < 90)
	    	cout << "\nThe average is a B!";
		else if(average >= 70 && average < 80)
	    	cout << "\nThe average is a C!";
		else if(average >= 60 && average < 70)
	    	cout << "\nThe average is a D!";
        else if(average >= 0 && average < 60)
	    	cout << "\nThe average is a F!";
	    else // invalid numbers
		    cout << "\nInvalid scores, please try again!";

        // restart
        cout << "\nRestart yes (y) or press anything else to stop:";
         cin >> again;
             }while(again=='y');
                cin.ignore(1);

    return 0;
}
