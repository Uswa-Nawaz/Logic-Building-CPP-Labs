// Task 07(OP): Even or Odd 
// Given an integer as a parameter to the function, determine whether the number is even 
// or odd. You have to take the number as input from the user. 
// Examples 
// evenOrOdd(0) ➞ "even" 
// evenOrOdd(1) ➞ "odd" 
// evenOrOdd(8) ➞ "even"

#include<iostream>
using namespace std;
void evenOrOdd(int num)
{
    if(num%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    evenOrOdd(num);
}
