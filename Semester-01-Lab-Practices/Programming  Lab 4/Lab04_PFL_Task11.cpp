// Task 11(OP): Write a program that keeps printing the name entered by the user.  
// Instruction: Use a function that accepts a string parameter name and prints that name

#include<iostream>
using namespace std;

void repeatname(string name)
{
    while(true)
    {
        cout<<name<<endl;
    }
}

int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    repeatname(name);

}