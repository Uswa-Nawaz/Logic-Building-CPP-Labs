// Task 10: User-Controlled Repeat Loop
// Write a program that repeatedly asks the user for their name and displays it.
// After each display, the program must ask the user if they wish to continue.
// If the user enters 'N' or 'n', the program should terminate.
// If the user enters an invalid character, the program should display an error message but continue the loop.

#include<iostream>
using namespace std;
int main()
{
    string name;
    while(true)
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Your name is: "<<name<<endl;
        char ch;
        cout<<"Do you want to continue? (Y/N): ";
        cin>>ch;
        if(ch=='N' || ch=='n')
        {
            break;
        }
        if(ch!='y' && ch!= 'Y' && ch!='n' && ch!='N')
        {
            cout<<"The letter you entered is not allowed"<<endl;
        }
    }
}

