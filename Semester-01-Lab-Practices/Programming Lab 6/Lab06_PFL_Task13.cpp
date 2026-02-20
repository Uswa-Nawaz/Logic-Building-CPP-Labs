// Task 13(CP): (lowestPrice)
// A student has to travel n kilometers. He can choose between three types of transportation:
// ● Taxi. Starting fee: 0.70 EUR. Day rate: 0.79 EUR/km. Night rate: 0.90 EUR/km.
// ● Bus. Day / Night rate: 0.09 EUR/km. It can be used for distances of a minimum of
// 20 km.
// ● Train. Day / Night rate: 0.06 EUR/km. It can be used for distances of a minimum
// of 100 km.
// Write a program that reads the number of kilometers n and period of the day (day or
// night) and calculates the price for the cheapest transport.

#include <iostream>
using namespace std;

float fair(float km, string daytime)
{
    float fair;
    if(km>=100)
    {
        fair=km*0.06;
    }
    else if(km>=20)
    {
        fair=km*0.09;
    }
    else
    {
        if(daytime=="night" || daytime=="Night")
        {
            fair = 0.70 + (km * 0.90);
        }
        else
        {
            fair = 0.70 + (km * 0.79);
        }
    }
    return fair;
}

int main()
{
    float km;
    cout<<"Enter the distance you want to travel (km): ";
    cin>>km;
    string daytime;
    cout<<"Time (day/night)? : ";
    cin>>daytime;
    float result;
    result=fair(km, daytime);
    cout<<"Your fair will be: "<<result;   
}