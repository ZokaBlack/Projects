//10.5 Lab: Combine names together into the same array
#include <fstream>
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
	char string1[25];
    char string2[25];
    cout << "Please enter the first name" << endl;
    cin.get(string1, 25);
    cin.ignore(200,'\n');
    cout << "Please enter the second name" << endl;
    cin.get(string2, 25);
    cin.ignore(200,'\n');
    strcat(string1,string2);
    std::sort(string1, string1 + 25, std::less<char>());
    cout << "The names are as follows:\n";
    cout << string1 << endl;
	return 0;
}
