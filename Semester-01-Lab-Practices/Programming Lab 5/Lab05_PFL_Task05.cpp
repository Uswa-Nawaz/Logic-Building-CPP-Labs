// Task 05(CP):  
// Imagine you are a software developer working on a project for a math education 
// program. As part of the program, you need to create a tool that helps students and 
// teachers solve quadratic equations of the form: 
// ax^2 + bx + c = 0 
// Where: 
// ● a represents the coefficient of the quadratic term. 
// ● b represents the coefficient of the linear term. 
// ● c represents the constant term. 
// Your task is to develop a C++ program that allows users to input the values of a, b, and 
// c. The program will then calculate the roots of the quadratic equation using the quadratic 
// formula and display the results. 
// The program should handle different cases: 
// 1. If the discriminant (the value under the square root in the quadratic formula) is 
// positive, there are two real and distinct solutions. 
// 2. If the discriminant is zero, there is one real solution (a repeated root). 
// 3. If the discriminant is negative, there are no real solutions, but there will be 
// complex solutions

#include<iostream>
#include<cmath>
using namespace std;

float determinant(float a, float b, float c)
{
    float det;
    det=(b * b) - (4 * a * c);
    return det;
}
int main()
{
    float a;
    float b;
    float c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    float det=determinant(a, b, c);
    if(det>0)
    {
        float root1;
        float root2;
        root1=(-b+sqrt(det))/(2*a);
        root2=(-b-sqrt(det))/(2*a);
        cout<<"The first root will be: "<<root1<<endl;
        cout<<"The second root will be: "<<root2<<endl;
    }
    else if(det<0)
    {
        float real;
        float img;
        real=-b/(2*a);
        img=sqrt(-det) / (2 * a);
        cout << "Complex Solutions: x = " << real << " + " << img << "i";
        cout << " and x = " << real << " - " << img << "i" << endl;
    }
    else
    {
        float root;
        root=-b/(2*a);
        cout<<"The root will be: "<<root;
    }
}