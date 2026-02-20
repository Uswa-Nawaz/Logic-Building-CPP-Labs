// Task 05(CP): (digitSum)
// Write a function that takes a number from
// the user and prints the sum of its digits on
// the console screen.
// int digitSum(int number);

#include <iostream>
using namespace std;

int sum(int num)
{
    int sum = 0;
    while(num>0)
    {
        int check = num % 10;
        sum = sum + check;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout<<sum(num);
}