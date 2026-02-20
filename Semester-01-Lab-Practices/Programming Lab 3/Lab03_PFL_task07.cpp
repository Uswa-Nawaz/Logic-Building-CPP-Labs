// Task07(OP):You are developing a C++ program for a time-tracking application. The
// program needs to take an integer input representing hours and convert it to seconds to
// accurately record the time in seconds

#include<iostream>
using namespace std;
int main()
{
    int hours;
    int min;
    int seconds;
    cout<<"Enter the no of hour: ";
    cin>>hours;
    min=hours*60;
    seconds=min*60;
    cout<<"The time in seconds will be: "<<seconds;

}