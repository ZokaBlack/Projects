//Is the string a Palindrome or not.
// Austin Lauritzen
// LMD: 5/22/2021 

#include <fstream>
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    int i;
    int length;
    int palindrome = 0;
    char String[51];
    
    cout <<"Enter a string of no more than 50 characters: " << endl;

    cin.getline(String,51);
    length = strlen(String);
    
    for(i=0;i < length ;i++)
    {
        if(String[i] != String[length-i-1])
        {
            palindrome = 1;
        }
    }
    
    if (palindrome) 
    {
        cout << String << " is not a palindrome" << endl; 
    }    
    else 
    {
        cout << String << " is a palindrome" << endl; 
    }
	return 0;
}
