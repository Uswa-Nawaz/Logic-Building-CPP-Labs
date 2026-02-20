// Task 03(OP): Write a C++ program that takes a number from the user as input and print 
// its square root on the screen

#include<iostream>
using namespace std;

int squareRoot(int num)
{
    bool flag=false;
    int result;
    for(int i=0; i<=num; i++)
    {
        if(i*i==num)
        {
            result=i;
            flag=true;
        }
    }
    if(flag==true)
    {
        return result;
    }
    else
    {
        return -1;
    }
} 

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int answer=squareRoot(num);
    if(answer==-1)
    {
        cout<<"No square root found";
    }
    else
    {
        cout<<"The square root for "<<num<<" is:"<<answer;
    } 
}