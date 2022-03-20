// Wi-Fi troubleshooting questions
// Austin Lauritzen
// LMD 3/20/2021 
//21SPR-CSC-5-43410

#include <iostream>
using namespace std;

int main()
{
    char answer;
    cout << "Reboot the computer and try to connect" << endl;
	cout << "Did that fix the problem (y or n)" << endl;
	cin >> answer;
	switch(answer)
	{
	    case 'y': cout << "Congradulations!" << endl;
	    break;
	    case 'n': cout << "Reboot the computer and try to connect" <<endl;
	    break;
	}
	return 0;

}
