// Task 08(OP): Shopping Discount 
// A store offers a 10% discount on the total purchase amount every Sunday. Write a C++ 
// program that helps customers calculate their payable amount based on the day of the 
// week and the total purchase amount. The program should ask the user to enter the day 
// of purchase and the total purchase amount. If the purchase is made on Sunday, the 
// program should apply a 10% discount; otherwise, no discount is applied. 
// You have to write a function that takes Day and purchase amount as input in 
// parameters and prints the total payable amount. 
// Examples: 
// calculatePayableAmount(“Sunday”, 1000) ➞ “Payable Amount: $900” 
// calculatePayableAmount(“Monday”, 1000) ➞ “Payable Amount: $1000” 

#include<iostream>
using namespace std;
void discount(string day, float amount)
{   
    float price;
    float finalprice;
    if(day=="sunday" || day=="Sunday")
    {
        price=amount*0.10;
        finalprice=amount-price;
        cout<<"Payable Amount: $"<<finalprice;
    }
    else
    {
        cout<<"Payable Amount: $"<<amount;
    }
}

int main()
{
    float amount;
    string day;
    cout<<"Enter the amount: ";
    cin>>amount;
    cout<<"Enter the day of the week: ";
    cin>>day;
    discount(day, amount);
}