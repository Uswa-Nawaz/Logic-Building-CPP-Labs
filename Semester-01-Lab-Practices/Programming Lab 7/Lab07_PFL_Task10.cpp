// Task 10: Print a triangle where each row contains the number of that row, repeated.
// 1
// 22
// 333
// 4444

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the dimention: ";
    cin>>size;
    int num=1;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i==0 || i==size-1 ||j==0 || j==size-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl; 
    }
}