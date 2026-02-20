// Task 02(CP): (generateFibonacci)
// Write a program that prompts the user to
// input the length of Fibonacci series and
// then call the function to display the series.

#include <iostream>
using namespace std;

void generateFibonacci(int length)
{
    int n1 = 0;   // the 1st no. to sum
    int n2 = 1;   // the second no. to sum
    int next = 0; // the sum
    for (int i = 0; i < length; i++)
    {
        cout << n1 << ", ";
        next = n1 + n2;
        n1 = n2; 
        n2 = next;
    }
}

int main()
{
    int length;
    cout << "Enter the limit of series: ";
    cin >> length;
    generateFibonacci(length);
}