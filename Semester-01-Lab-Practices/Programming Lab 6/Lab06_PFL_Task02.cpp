// Task 02(OP): (parityAnalysis) 
// Create a function that takes a number as input and returns true if the sum of its digits has 
// the same parity as the entire number. Otherwise, return false. (Always take 3 digit number 
// as input) 
// Examples 
// parityAnalysis(243) ➞ true 
// // 243 is odd and so is 9 (2 + 4 + 3) 
// parityAnalysis(102) ➞ false 
// // 12 is even but 3 is odd (1 + 0 + 2) 
// parityAnalysis(300) ➞ false 
// // 300 is even but 3 is odd (3) 
// Notes 
// ● Parity is whether a number is even or odd. If the sum of the digits is even and the 
// number itself is even, return true. The same goes if the number is odd and so is the 
// sum of its digits. 

#include<iostream>
using namespace std;

bool parity(int num)
{
    int sum=0;
    int temp=num;
    while(num>0)
    {
        int last=num%10;
        sum=sum+last;
        num=num/10;
    }
    if(temp%2==sum%2)
    {
        return true;
    }
    // alternate method
    // if(temp%2==0 && sum%2==0)
    // {
    //     return true;
    // }
    // else if(temp%2!=0 && sum%2!=0)
    // {
    //     return true;
    // }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout<<"Enter the number (3-digit only): ";
    cin>>num;
    bool result;
    result=parity(num);
    cout<<result;
}