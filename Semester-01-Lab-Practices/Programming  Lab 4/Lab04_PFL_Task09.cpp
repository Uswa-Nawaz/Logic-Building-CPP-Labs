// Task09 (OP): Let's Fuel Up Again! 
// A vehicle needs 10 times the amount of fuel than the distance it travels. However, it  
// must always carry a minimum of 100 fuel before setting off. 
// Create a function which takes distance as input in parameter and calculates the amount 
// of fuel it needs and prints on the screen. Take the input of the distance from the user. 
// Examples 
// calculateFuel(15) ➞ 150 
// calculateFuel(23.5) ➞ 235 
// calculateFuel(3) ➞ 100 
// Notes 
// ● Return 100 if the calculated fuel turns out to be less than 100.

#include<iostream>
using namespace std;
void fuelcalculator(float distance)
{
    float fuel;
    fuel=distance*10;
    if(fuel>=100)
    {
    cout<<"Fuel needed will be: "<<fuel;
    cout<<" litres.";
    }
    else
    {
        cout<<"Fuel needed will be: 100 litres";
    }
}
int main()
{
    float distance;
    cout<<"Enter the distance (km): ";
    cin>>distance;
    fuelcalculator(distance);

}