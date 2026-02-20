// Task 06 (OP): (Store V2) 
// A Store has announced to give a 10% discount on the total purchase amount on every 
// Sunday or Month is October. 
// Write a Function that takes Day, Month, and total amount as input and returns the 
// payable amount after the discount.

#include<iostream>
using namespace std;

float discount(string day, string month, float purchase)
{
    float discount;
    float price;
    if(day=="sunday" || day=="Sunday" || month=="October" || month=="october")
    {
        price=purchase*0.10;
        discount=purchase-price;
        // another way
        // discount = purchase * 0.90;  (Payable is 90% of total)
    }
    else 
    {
        discount=purchase;
    }
    return discount;
}

int main()
{
    string day;
    string month;
    float purchase;
    cout<<"Enter the day: ";
    cin>>day;
    cout<<"Enter the month: ";
    cin>>month;
    cout<<"Enter the amount: ";
    cin>>purchase;
    float payable;
    payable=discount(day,month , purchase);
    cout<<"The payable amount will be: "<<payable;   
}