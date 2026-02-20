#include<iostream>
using namespace std;

int main()
{
  int arr[100];
  int num;
  cout<<"Enter the number of values: ";
  cin>>num;
  cout<<"Enter the numbers: ";
  for(int i=0; i<num; i++)
  {
    cin>>arr[i];
  }
  cout<<"The elements are: ";
  for(int i=0; i<num; i++)
  {
    cout<<arr[i];
  }
}