// Task 11: Print a triangle that starts with $N$ stars and ends with 1.

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the dimention: ";
    cin>>size;
    for(int i=size; i>=0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}