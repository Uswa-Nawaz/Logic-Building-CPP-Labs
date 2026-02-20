// Task 01(OP): 
// Write a C++ program that takes two numbers as input from the user and prints the 
// minimum out of two on the screen. Hint: min(number1,number2)

#include<iostream>
using namespace std;

float minimum(float num1, float num2)
{
    if(num1<num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    float num1;
    float num2;
    cout<<" Enter first number: ";
    cin>>num1;
    cout<<" Enter 2nd number: ";
    cin>>num2;
    cout<<minimum(num1, num2);
}