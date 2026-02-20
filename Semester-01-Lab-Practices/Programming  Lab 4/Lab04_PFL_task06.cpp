// Task 06(OP): Pass or Fail 
// Write a C++ Function that helps determine whether a student passes or fails a test. The 
// program should ask the user to enter their test score as an integer. Then it should pass 
// this score to the function and if the score is greater than 50, then the function should 
// display "Pass," indicating that the student has passed the test. Otherwise, it should 
// display "Fail," indicating that the student has not passed the test. 

#include<iostream>
using namespace std;
void passOrFail(int score)
{
    if(score>=50)
    {
        cout<<"Congradulations! You have passed";
    }
    else
    {
        cout<<"Unfortunately! You Failed";
    }
}
int main()
{
    int score;
    cout<<"Enter your test score: ";
    cin>>score;
     passOrFail(score);
}