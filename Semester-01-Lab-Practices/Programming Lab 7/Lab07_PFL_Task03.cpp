// Task 03(CP): (totalDigits)
// Write a function named “totalDigits” that
// takes the number as input parameter and
// returns the total number of digits in that
// number.

#include <iostream>
using namespace std;

int digitAmount(int num)
{
    int count = 0;
    if (num == 0) return 1;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int result=digitAmount(num);
    cout<<result;
}