#include<iostream>
using namespace std;


void function(char arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" found at position "<<i<<endl;
    }
}

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    char arr[size];
    cout<<"Enter the elements: ";
    for(int i=0; i<size; i++)
    {
    cin>>arr[i];
    }
    function(arr,size);
}