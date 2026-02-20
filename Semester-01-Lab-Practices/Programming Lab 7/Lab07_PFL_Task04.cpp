// Task 04(CP): (frequencyChecker)
// Find the frequency of a digit in a number.
// Make a function whose prototype will be
// int frequencyChecker(int number, int
// digit);
// you have to pass this function a number
// and a digit whose frequency you want to
// check then the function returns the number
// of times the digit occurs in the number.
// Test Cases:
// frequencyChecker(566960, 6) => 3
// frequencyChecker(566960, 5) => 1

#include <iostream>
using namespace std;

int frequency(int digit, int num)
{
    int count=0;
    while(num>0)
    {
        int check=num%10;
        if(check==digit)
        {
            count++;
        }
        num=num/10;
    }
    return count;
}

int main()
{
    int num;
    int digit;
    cout << "Enter the number: ";
    cin >> num;
    cout<<"Enter the digit you want to check: ";
    cin>>digit;
    int result;
    result=frequency( digit,  num);
    cout<<"The number is appeaed "<<result<<" times.";
}