// Task 05(OP): Vote 
// A person is eligible to vote if his/her age is greater than or equal to 18. Define a 
// function that prints if he/she is eligible to vote. Function name should be Vote. 

#include<iostream>
using namespace std;

void vote(int age)
{
    if(age>=18)
    {
        cout<<"You are elligibile";
    }
    else
    {
        cout<<"You are not elligibile";
    }
}
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    vote(age);
}