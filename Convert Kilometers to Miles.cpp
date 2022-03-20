/*
 * Author: Austin Lauritzen
 * CSC 5 - 43410
 * Last modified Date: 2/22/2021
 * Purpose: Convert Kilometers to miles
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    float km, miles;
    
    cout << "Enter the number of Kilometers: ";
    cin >> km;
    
    miles = km * 0.621; //.621 miles = 1 km
    
    cout << "You entered " << km << "km. That converts to "
            << miles << " miles. Thank you for using KilotoMiles";
    return 0;
}
