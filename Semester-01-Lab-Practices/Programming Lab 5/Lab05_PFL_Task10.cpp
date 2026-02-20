// Task 10(CP): Write a C++ function that converts a number in the range of [1 ... 99] into 
// text (in English). 

#include<iostream>
using namespace std;

string translate(string one[], string ten[], int num)
{
    string message;
    if(num<20)
    {
        message=one[num];
    }
    else
    {
        int o=num%10;
        int t=num/10;
        message=ten[t]+one[o];
    }
    return message;
}

int main()
{
    string one[]={"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string ten[]={"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    int num;
    cout<<"Enter the number (1-99): ";
    cin>>num;
    string result;
    result=translate(one, ten, num);
    cout<<result;
}