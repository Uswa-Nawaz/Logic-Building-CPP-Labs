//Task06(OP):Write a C++ program that takes the megabytes from the user and converts them
// into bits and prints the value on the screen. 1MB=1024Kb & 1KB=1024Bytes & 1Bytes= 8 Bits

#include<iostream>
using namespace std;
int main()
{
    int mb;
    long long kb;
    long long bytes;
    long long bits;
    cout<<"Enter no. of MBs: ";
    cin>>mb;
    kb=mb*1024;
    bytes=kb*1024;
    bits=bytes*8;
    cout<<"No. of Bits will be : "<<bits;
}