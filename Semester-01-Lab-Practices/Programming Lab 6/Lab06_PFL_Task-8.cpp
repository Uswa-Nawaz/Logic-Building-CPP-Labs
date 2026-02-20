// Task 08 (OP): (Store V4)
// A Store has announced to give a 10% discount on the total purchase amount every Sunday
// of Month October, or March, or August and a 5% discount on the total purchase amount
// every Monday of November or December.
// Write a Function that takes Day, Month, and total amount as input and returns the payable
// amount after the discount.

#include <iostream>
using namespace std;

float discount(string day, string month, float purchase)
{
    float discount=purchase;
    float price;
    if (day == "sunday" || day == "Sunday")
    {
        if (month == "October" || month == "october" || month == "March" || month == "march" || month == "August" || month == "august")
        {
            price = purchase * 0.10;
            discount = purchase - price;
            // another way
            // discount = purchase * 0.90;  (Payable is 90% of total)
        }
    }
    else if (day == "Monday" || day == "monday")
    {
        if (month == "November" || month == "november" || month == "December" || month == "december" )
        {
        price = purchase * 0.05;
        discount = purchase - price;
        // another way
        // discount = purchase * 0.95;  (Payable is 95% of total)
        }
    }
    else
    {
        discount = purchase;
    }
    return discount;
}

int main()
{
    string day;
    string month;
    float purchase;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the amount: ";
    cin >> purchase;
    float payable;
    payable = discount(day, month, purchase);
    cout << "The payable amount will be: " << payable;
}