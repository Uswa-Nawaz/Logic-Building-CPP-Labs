// Create a function in C++ that accepts a measurement value in inches as a parameter and 
// prints the equivalent of the measurement value in feet. 
// Take the measurement as input from the user. 
// Examples 
// inchesToFeet(324) ➞ 27 
// inchesToFeet(12) ➞ 1 
// inchesToFeet(36) ➞ 3 
// Notes 
// ● 12 inches = 1 foot.

#include<iostream>
using namespace std;
void inchesToFeet(float inches)
{
    float resultantvalue;
    resultantvalue=inches/12;
    cout<<"In Feets: "<<resultantvalue;
}
int main()
{
    float inches;
    cout<<"Enter inches: ";
    cin>>inches;
    inchesToFeet(inches);
}