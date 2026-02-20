// Task 01(CP): (printTable) 
// Write  a function that takes a number from 
// the user and print its multiplication table 
// on the console screen.   

#include<iostream>
using namespace std;

void printTable(int table)
{
    int result;
    for(int i=1; i<=10; i++)
    {
        result=table*i;
        cout<<table<<"*"<<i<<"="<<result<<endl;
    }
}

int main()
{
    int table;
    cout<<"Which table you want? : ";
    cin>>table;
    printTable(table); 
}