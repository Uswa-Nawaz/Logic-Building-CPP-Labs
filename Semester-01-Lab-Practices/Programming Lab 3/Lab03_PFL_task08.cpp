// Task08(OP):You are developing a C++ program for an electrical engineering application.
// The program needs to calculate power(inwatts) given voltage(involts) and current(in
// amperes) as input.

// Formula P=V*I

#include<iostream>
using namespace std;
int main()
{
    int p;
    int v;
    int i;
    cout<<"Enter voltages: ";
    cin>>v;
    cout<<"Enter current: ";
    cin>>i;
    p=v*i;
    cout<<"Power will be "<<p<<" watts";
}