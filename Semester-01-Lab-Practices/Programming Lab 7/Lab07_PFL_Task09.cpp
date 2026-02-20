// Task: Print a triangle where the first row has 1 star, the second has 2, the third has 3, and so on, up to N.
// *
// **
// ***
// ****

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the dimention: ";
    cin>>size;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}