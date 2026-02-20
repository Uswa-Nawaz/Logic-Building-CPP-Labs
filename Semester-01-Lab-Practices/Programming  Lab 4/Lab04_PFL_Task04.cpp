// Task 04(OP): Basic Calculator
// Write a C++ program for a basic calculator that can perform four operations: addition,
// subtraction, multiplication, and division. The program should ask the user to enter two
// numbers and an operator (+, -, *, /), and then it should display the result of the operation.

#include <iostream>
using namespace std;
float add(float num1, float num2)
{
    float sum = 0;
    sum = num1 + num2;
    return sum;
}

float subtract(float num1, float num2)
{
    float subtract = 0;
    subtract = num1 - num2;
    return subtract;
}

float multiply(float num1, float num2)
{
    float multiply = 1;
    multiply = num1 * num2;
    return multiply;
}

float divide(float num1, float num2)
{
    float divide = 0;
    divide = num1 / num2;
    return divide;
}

int main()
{
    float num1;
    float num2;
    char op;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter operation you want to perform(+, -, *, /): ";
    cin >> op;
    float sum = add(num1, num2);
    float subtracting = subtract(num1, num2);
    float multiplying = multiply(num1, num2); 
    float dividing = divide(num1, num2);
    if (op == '+')
    {
        cout << "The sum will be: " << sum;
    }
    else if (op == '-')
    {
        cout << "The subtraction will be: " << subtracting;
    }
    else if (op == '*')
    {
        cout << "The Multiplication will be: " << multiplying;
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            cout << "Invalid Input For division specifically";
        }
        else
        {
            cout << "The Divition will be: " << dividing << endl;
        }
    }
    else
    {
        cout << "Invalid Input";
    }
}