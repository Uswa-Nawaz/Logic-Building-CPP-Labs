#include<iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
} 

int average(int arr[], int size)
{
    int avg=0;
    avg=sum(arr, 5)/5; 
    return avg;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"sum is: "<<sum(arr, 5)<<endl;
    cout<<"average is: "<<average(arr, 5);
}