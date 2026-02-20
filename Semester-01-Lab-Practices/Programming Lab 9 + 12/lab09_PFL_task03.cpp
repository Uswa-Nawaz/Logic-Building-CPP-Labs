#include<iostream>
using namespace std;

void nextletter(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='z')
        {
            cout<<'a';
        }
        else 
        {
            cout<<char(str[i]+1);
        }
    }
}
int main()
{
    string str;
    cout<<"Enter the word to work on: ";
    cin>>str;
    nextletter(str);
}