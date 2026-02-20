// Task 09(CP): Imagine you have a magical device that allows you to time travel, but there's 
// a twist! This device only lets you skip 15 minutes into the future at a time. Your mission is 
// to create a program that helps you calculate the exact time you'll arrive after using this 
// time-traveling device. 
// You need to develop a program that takes the current time in hours and minutes (in the 24
// hour format) and calculates the precise time you'll land in after time-traveling 15 minutes 
// into the future. Your program should then display the future time in the "hh:mm" format. 
// Constraints: 
//  Hours are always between 0 and 23. 
//  Minutes are always between 0 and 59. 
// Create a function named timeTravel that returns the future time as a string in "hh:mm" 
// format, making it easier for time travelers to plan their adventures.

#include<iostream>
using namespace std;

string timetravel(int minute, int hour)
{
    int totalminutes=minute+15;
    int finalminutes=totalminutes%60;
    int extrahour=totalminutes/60;
    int totalhour=hour+extrahour;
    int finalhour=totalhour%24;
    // cout<<"Time after timetravelling will be "<<finalhour<<":"<<finalminutes<<endl;
    return to_string(finalhour)+":"+to_string(finalminutes);
}

int main()
{
    int hour;
    int minute;
    cout<<"Enter the hour (0-23): ";
    cin>>hour;
    cout<<"Enter the minutes (0-59): ";
    cin>>minute;
    string result;
    result=timetravel(minute, hour);
    cout<<result;
}