// Task 07(CP): (Percentage) 
// We have n integer numbers within the range of [1 … 1000]. Some percent of p1 are under 
// 200, another percent p2 are from 200 to 399, percent p3 are from 400 to 599, percent p4 
// are from 600 to 799 and the rest p5 percent are from 800 upwards. Write a program that 
// calculates and prints the percentages p1, p2, p3, p4 and p5.

#include<iostream>
using namespace std;

void Percentage(float num)
{
    float check;
    float count_p1=0;
    float count_p2=0;
    float count_p3=0;
    float count_p4=0;
    float count_p5=0;
    float percentageP1;
    float percentageP2;
    float percentageP3;
    float percentageP4;
    float percentageP5;
    for(int i=0; i<=num; i++)
    {
        cout<<"Enter the number:";
        cin>>check;
        if(check<200)
        {
            count_p1++;
        }
        else if(check>=200 && check<=399)
        {
            count_p2++;
        }
        else if(check>=400 && check<=599)
        {
            count_p3++;
        }
        else if(check>=600 && check<=799)
        {
            count_p4++;
        }
        else if(check>=800)
        {
            count_p5++;
        }
    }
    percentageP1=(count_p1/num)*100;
    percentageP2=(count_p2/num)*100;
    percentageP3=(count_p3/num)*100;
    percentageP4=(count_p4/num)*100;
    percentageP5=(count_p5/num)*100;
    cout<<"The percentage of P1 :"<<percentageP1<<endl;
    cout<<"The percentage of P2 :"<<percentageP2<<endl;
    cout<<"The percentage of P3 :"<<percentageP3<<endl;
    cout<<"The percentage of P4 :"<<percentageP4<<endl;
    cout<<"The percentage of P5 :"<<percentageP5<<endl;
    
}

int main()
{
    int num=20;
    Percentage(num);
}