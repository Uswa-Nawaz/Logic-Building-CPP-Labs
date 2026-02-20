// Task 07(CP): Create a function that takes a number as an argument and returns true or 
// false depending on whether the number is symmetrical or not. A number is symmetrical 
// when it is the same as its reverse. (The user will enter 3 digit number only) 
// Examples: 
// IsSymmetrical(256) ➞ false 
// IsSymmetrical(232) ➞ True

#include<iostream>
using namespace std;

bool reverse(int num)
{
    int first;
    int last;
    first=num/100;
    last=num%10;
    if(first==last)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    cout<<"Enter the three digit number: ";
    cin>>num;
    int result=reverse(num);
    if(result==1)
    {
        cout<<"The number is symmetrical";
    }
    else
    {
        cout<<"The number is not symmetrical";
    }
}