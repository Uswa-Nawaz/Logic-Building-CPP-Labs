#include<iostream>
using namespace std;

//Write a function that takes a string as input parameter and displays it in reverse order
void reverse(string str)
{
    cout<<"The elements in reverse will be: ";
    for(int i= str.length() -1; i>=0; i--)
    {
        cout<<str[i]<<" ";
    }
}
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    reverse(str);
}