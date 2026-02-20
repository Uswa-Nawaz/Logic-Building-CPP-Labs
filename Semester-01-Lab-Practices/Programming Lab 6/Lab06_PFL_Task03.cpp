// // Task03(OP): (Perimeter) 
// // Write a function that takes a number and returns the perimeter of following shapes.
// The input will be in the form (letter l, number num) where the letter will be either "s" for 
// square, or "c" for circle, or "t" for triangle, or "h" for hexagon and the number will be the 
// side of the square or the radius of the circle or side of the triangle or side of the hexagon. 
// Examples 
// perimeter("s", 7) ➞ 28 
// perimeter("c", 4) ➞ 25.12 
// perimeter("c", 9) ➞ 56.52

#include<iostream>
using namespace std;

float perimeter(char ch, float value)
{
    float perimeter;
    if(ch=='s')
    {
        perimeter=4*value;
    }
    else if(ch=='t')
    {
        perimeter=3*value;
    }
    else if(ch=='h')
    {
        perimeter=6*value;
    }
    else
    {
        perimeter=6.28 * value;
    }
    return perimeter;  
}

int main()
{
    char ch;
    float value;
    cout<<"Enter the character (s, c, t, h): ";
    cin>>ch;
    if(ch=='s' || ch=='t' || ch=='h' || ch=='c')
    {
        cout<<"Enter the dimentions: ";
        cin>>value;
        float result;
        result=perimeter(ch, value);
        cout<<"The perimeter is : "<<result;
    }
    else
    {
        cout<<"Invalid input";
    }
}