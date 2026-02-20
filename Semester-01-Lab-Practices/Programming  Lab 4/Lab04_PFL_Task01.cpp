// A vehicle needs 10 times the amount of fuel than the distance it travels. Create a 
// function which takes distance as input in parameter and calculates the amount of fuel it 
// needs and prints on the screen. Take the input of the distance from the user. 
// Examples 
// calculateFuel(15) ➞ 150 
// calculateFuel(23.5) ➞ 235 

#include<iostream>
using namespace std;
void fuelcalculator(float distance)
{
    float fuel;
    fuel=distance*10;
    cout<<"Fuel needed will be: "<<fuel;
    cout<<" litres.";
}
int main()
{
    float distance;
    cout<<"Enter the distance (km): ";
    cin>>distance;
    fuelcalculator(distance);

}