// Task 04(CL): (findGreatest) 
// Write a program that inputs three numbers from the user and prints the greater number. 
// Use logical operators. Function name should be findGreatest and it should take the three 
// numbers as input and returns the greatest number. 

#include<iostream>
using namespace std;
float greatest(float num1, float num2, float num3)
{
    float greatest=num1;
    if(num2>greatest)
    {
        greatest=num2;
    }
    if(num3>greatest)
    {
        greatest=num3;
    }
    // ---------------Another way---------------
    // if(num1>num2 && num1>num3)
    // {
    //    greatest=num1; 
    // }
    // else if(num2>=num1 && num2>=num3)
    // {
    //    greatest=num2; 
    // }
    // else if(num3>=num2 && num3>=num1)
    // {
    //    greatest=num3; 
    // }
    return greatest;
}
int main()
{
    float num1;
    float num2;
    float num3;
    cout<<"Enter the 1st number: ";
    cin>>num1;
    cout<<"Enter the 2nd number: ";
    cin>>num2;
    cout<<"Enter the 3rd number: ";
    cin>>num3;
    float result;
    result=greatest (num1, num2, num3);
    cout<<"The greatest number is: "<<result;
}