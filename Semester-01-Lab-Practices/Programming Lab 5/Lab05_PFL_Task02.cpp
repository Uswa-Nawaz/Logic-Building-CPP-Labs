// Task 02(OP): 
// Write a C++ program that takes two numbers from the user and takes the power of the 
// first number as the second number entered by the user.

#include<iostream>
using namespace std;

float power(float base, float exponent)
{
    float result=1;
    for(int i=0; i<exponent; i++)
    {
        result=result*base;
    }
    return result;
}

int main()
{
    float base;
    float exponent;
    cout<<"Enter the base value: ";
    cin>>base;
    cout<<"Enter the exponent value: ";
    cin>>exponent;
    float powercalculation=power(base, exponent);
    cout<<base<<" raised to power "<<exponent<<" is: "<<powercalculation;
}