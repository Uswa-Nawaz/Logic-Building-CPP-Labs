// // Task11(OP):Scientists have discovered that in four decades,the world will EXPLODE! It
// // will also take three decades to make a spaceship to travel to a new planet that can hold the
// entire world population.
// You must calculate the number of people there will be in three decades from now.
// Make a variable population and take input from the user that is the world population now.
// Assume that every month, someone gives birth to n more people. Also take n from the user as
// input. Calculate the number of people there will be when the spaceship is created

#include<iostream>
using namespace std;
int main()
{
    int population;
    int birthpermonth;
    int totalbirths;
    int finaltotal;
    cout<<"Enter the population: ";
    cin>>population;
    cout<<"Enter the people born per month: ";
    cin>>birthpermonth;
    totalbirths=360*birthpermonth;
    finaltotal=population+totalbirths;
    cout<<"The population after three decades will be: "<<finaltotal;
}