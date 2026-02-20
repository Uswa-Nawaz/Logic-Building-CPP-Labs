// // Challenge 8: The Solid Block (The Grid)
// Write a program that asks the user for a size N and then prints a solid square of stars (∗) that is N rows high and N columns wide.
// Example (N=4):

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the dimention: ";
    cin>>size;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}