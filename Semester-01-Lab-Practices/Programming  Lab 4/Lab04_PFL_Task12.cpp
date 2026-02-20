// Task 12(CP): A Store has announced to give a 10% discount on the total purchase amount
// of every Sunday and 5% on every other day. Write a program that takes Day, total purchase
// amount and outputs the payable. Now, After outputting the payable amount on screen, the
// program should again ask for the same details of some other customer and go on until
// closed forcefully.

#include <iostream>
using namespace std;

void discount(string day, float amount)
{
    float price;
    float finalprice;
        if (day == "sunday" || day == "Sunday")
        {
            price = amount * 0.10; //discount amount
            finalprice = amount - price;
            cout << "Payable Amount: " << finalprice <<endl;
        }
        else if (day == "Monday" || day == "monday" || day == "tuesday" || day == "Tuesday" || day == "wednesday" || day == "Wednesday" || day == "thursday" || day == "Thursday" || day == "friday" || day == "Friday" || day == "saturday" || day == "Saturday")
        {
            price = amount * 0.05;
            finalprice = amount - price;
            cout << "Payable Amount: " << finalprice <<endl;
        }
        else
        {
            cout << "Invalid Output" << endl;
        }
}

int main()
{
    string day;
    float amount;
    while(true)
    {
        cout<<"Enter the day of the week: ";
        cin>>day;
        cout<<"Enter your amount:";
        cin>>amount;
        discount(day, amount);
    }
}