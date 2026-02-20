// Task09(OP):You are building a C++ program for a health and wellness application. To
// calculate certain health-related statistics, you need to take a user's age in years as input and
// convert it into their age in days.
// Notes
// ● Use 365 days as the length of a year for this challenge.
// ● Ignore leap years and days between last birthday and now

#include <iostream>
using namespace std;
int main()
{
    float age;
    cout << "Enter your age: ";
    cin >> age;
    int days = age * 365;
    cout << "Your age in days will be: " << days;
}