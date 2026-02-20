// Task: Print a triangle where every star is replaced by a number that increments globally.

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the dimention: ";
    cin>>size;
    int count=1;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}