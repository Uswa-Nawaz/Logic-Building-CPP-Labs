// Task 04(CP):  
// Imagine you are a field researcher working on a project to measure and document the 
// heights of trees in a forest. You are equipped with a distance measuring device and an 
// angle measurement tool. 
// One day, you come across a tall tree in the forest, and you want to determine its height 
// without having to climb it. You have a distance measuring tool that can measure the
// horizontal distance from your position to the base of the tree, and you also have an angle 
// measurement tool that can measure the angle of elevation from your position to the top of 
// the tree. 
// To calculate the height of the tree, you need to: 
// 1. Measure the horizontal distance from your position to the base of the tree (in feet). 
// 2. Measure the angle of elevation from your position to the top of the tree (in 
// degrees). 
// Your task is to create a C++ program that takes these measurements as input from you 
// and calculates the height of the tree using trigonometric principles. Once the program 
// calculates the height, it will display the result on the screen. 
// By using this program, you can quickly estimate the height of trees in the forest without 
// the need for climbing or specialized equipment, which is valuable information for your 
// research project. 
// Remember: 1 radian = 57.2958 degrees

#include<iostream>
#include<cmath>
using namespace std;

float angle_in_radian(float angle)
{
    float result;
    result=angle*0.0174533;
    return result;

}

int main()
{
    float angle;
    float distance;
    float height;
    cout<<"Enter the angle (in degrees): ";
    cin>>angle;
    cout<<"The your distance from trees (m): ";
    cin>>distance;
    height=distance*tan(angle_in_radian(angle));
    cout<<"Height: "<<height;
}