// Task 08(CP): Create a function that determines whether a number is Oddish or Evenish. 
// A number is Oddish if the sum of all of its digits is odd, and a number is Evenish if the 
// sum of all of its digits is even. If a number is Oddish, return "Oddish". Otherwise, return 
// "Evenish". (The user will enter five digit number only)

#include<iostream>
using namespace std;

string evenOrOdd(int num)
{
    string message;
    int peel;
    int add=0;
    while(num>0)
    {
        peel=num%10;
        add=add+peel;
        num=num/10;
    }
    if(add%2==0)
    {
        message="Evenish";
    }
    else
    {
        message="Oddish";
    }
    return message;
}

int main()
{
    int num;
    cout<<"Enter a five digit number: ";
    cin>>num;
    string result=evenOrOdd(num);
    cout<<result;
}