// While practice, Code continues until x is pressed
// Austin Lauritzen
//LMD 3/27/2021
// CSC-5-43410

#include <iostream>
using namespace std;
int main()
{
char letter = 'a';
while (letter != 'x')
{
cout << "Please enter a letter or press x to stop!" << endl;
cin >> letter;
cout << "The letter you entered is " << letter << endl;
}
return 0;
}
