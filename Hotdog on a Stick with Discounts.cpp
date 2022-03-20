//Hotdog on a Stick Menu Ordering
//Austin Lauritzen
//LMD 3/20/2021
//21SPR-CSC-5-43410
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string answer; //Food choice
    string answer3; //Food choice
    char more; // Do you want more
    float answer2; //How many do you want
    float more2; //How many do you want (if you want to order more of something else)
    float total; //Calculations
    float total2;
    float Solution;
    float Solution2;
   
    
    cout << setprecision(2) << fixed << showpoint;  // formatted output for currency
    
    cout << "Welcome to Hotdog on a Stick!\n" << endl;
    cout << "Our menu for today consists of Turkey Corn Dogs, Beef Corn Dogs, and Cheese sticks for $3.59 each!\n" << endl;
    cout << "We also have a special where if you buy two of them they only cost $5.99\n" << endl;
    cout << "What would you like to order today? (Turkey, Beef or cheese)" << endl;
    cin >> answer;
    cout << "How many would you like to order?" << endl;
    cin >> answer2;
    cout << "Would you like anything else? (y or n)" << endl;
    cin >> more;
    switch(more)
    {
        case 'y': cout << "What item would you like then?" << endl;
        cin >> answer3;
        cout << "How many would you like to order?" << endl;
         cin >> more2;
        break;
        case 'n': cout << "Alright" << endl;
        break;
    }
    
    
    if (answer2 + more2 == 1)
    {
     total = (answer2) * 3.59 * .0875; // tax is %8.75
     Solution = (answer2) * 3.59 + total; //Without combo deal
     cout << "Your total comes to $" << Solution << endl;
    }
    
    
    if (answer2 + more2 > 1)
    {
    total2 = (answer2 + more2) * 2.995 * .0875; // half of 5.99 for the deal combo
    Solution2 = (answer2 + more2) * 2.995 + total2;
    cout << "Your total comes to $" << Solution2 << endl;
    }
    
    
    if (answer2 + more2 < 1)
    {
    cout << "What are you doing here if you're not going to order anything..." << endl; // Ording 0
    }
    	
	
	return 0;
}
