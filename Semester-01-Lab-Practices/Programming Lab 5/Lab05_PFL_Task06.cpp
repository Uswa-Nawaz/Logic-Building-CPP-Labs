// Task 06(CP): 
// Write a function named checkAlphabetCase for checking whether the alphabet entered 
// by the user is in small case or in capital case (Suppose user will only enter ‘A’ or ‘a’). 
// Make a function that takes 1 Character as input, does processing according to the input 
// and then returns the string. String is “You have entered Capital A” if the user enters ‘A’, 
// otherwise “You have entered small A”.

#include<iostream>
#include<string>
using namespace std;

string checkAlphabetCase(char ch)
{
    if(ch>=65 && ch<=90)
    {
        return "It is an upperCase letter";
    }
    else if(ch>=97 && ch<=122)
    {
        return "It is a lowerCase letter";
    }
    else
    {
        return "Please enter an alphabet !!";
    }
}

int main()
{
    char ch;
    cout<<"Enter an alphabet (upperCase/Lowercase): ";
    cin>>ch;
    cout<<checkAlphabetCase(ch);
}