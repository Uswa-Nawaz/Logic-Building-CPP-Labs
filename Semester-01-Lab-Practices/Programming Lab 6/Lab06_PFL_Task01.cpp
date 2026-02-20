// Task 01(OP): (greaterNumber) 
// Create a function that takes 2 integer numbers as input and returns true if the first number 
// is greater than the second number otherwise it returns false. 
// greaterNumber(1, 4) ➞ false
// greaterNumber(6, 5) ➞ true

#include<iostream>
using namespace std;

bool greaterNumber(int num1, int num2)
{
    if(num1>num2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num1;
    int num2;
    cout<<"Enter the 1st number: ";
    cin>>num1;
    cout<<"Enter the 2nd number: ";
    cin>>num2;
    bool result;
    result=greaterNumber(num1, num2);
    cout<<result;
}