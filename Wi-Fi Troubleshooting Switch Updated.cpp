// Austin Lauritzen
// LMD 3/20/2021 
//21SPR-CSC-5-43410

#include <iostream>
using namespace std;

int main()
{
    char answer;
    char answer2;
    char answer3;
    char answer4;
    
    cout << "Reboot the computer and try to connect" << endl;
	cout << "Did that fix the problem (y or n)" << endl;
	cin >> answer;
	switch(answer)
	
	{
	    case 'y': cout << "Congradulations!" << endl;
	    break;
	    case 'n': cout << "Reboot the router and try to connect" << endl;
	    break;
	}
	
	cout << "Did that fix the problem (y or n)" << endl;
	cin >> answer2;
	switch(answer2)
	
	{
	    case 'y': cout << "Congradulations" << endl;
	    break;
	    case 'n': cout << "Make sure the cables between the router and modem are plugged in firmly." << endl;
	    break;
	}
	
		cout << "Did that fix the problem (y or n)" << endl;
		cin >> answer3;
		switch(answer3)
	{
	    
	    case 'y': cout << "Congradulations" << endl;
	    break;
	    case 'n': cout << "Move the router to a new location." << endl;
	    
	}
	cout << "Did that fix the problem (y or n)" << endl;
	cin >> answer4;
	switch(answer4)
	{
	    case 'y': cout << "Congradulations" << endl;
	    break;
	    case 'n': cout << "Get a new router." << endl;
	    
	}
	
	
	return 0;

}
