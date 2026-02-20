#include<iostream>
using namespace std;

int toyota(int arr[5][5], int row, int col)
{
    cout<<"The available toyota blue cars are: ";
    cout<<arr[1][3];
}

int redSum(int arr[5][5], int row, int col)
{
    int sum=0; //<<<<<<<<<<<<<<<<<-------------------- i did mistake here, didnt initialized it with zero
    for(int i=0; i<row; i++)
    {
        sum=sum+arr[i][0];
    }
    return sum;
}

int nissan(int arr[5][5], int row, int col)
{
        int sum=0;
    for(int i=0; i<row; i++)
    {
        sum=sum+arr[3][i];
    }
    return sum;
}

int converter(int arr[][5], int row, int col, string color)
{
    int sum=0;
    for(int i=0; i<row; i++)
    {
        if(color=="red")
        {
            sum=sum+arr[i][0];
        }
        else if(color=="black")
        {
            sum=sum+arr[i][1];
        }
        else if(color=="brown")
        {
            sum=sum+arr[i][2];
        }
        else if(color=="blue")
        {
            sum=sum+arr[i][3];
        }
        else if(color=="gray")
        {
            sum=sum+arr[i][4];
        }
    }
    return sum;
}

void switchRC(int arr[][5], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[j][i];
        }
        cout<<endl;
    }
}
int main()
{
    const int row=5;
    const int col=5;
    int arr[row][col]={{10, 7, 12, 10, 4},
                    {18, 11, 15, 17, 2},
                    {23, 19, 12, 16, 14},
                    {7, 12, 16, 0, 2},
                    {3, 5, 6, 2, 1}};
    toyota(arr, row, col);
    cout<<"\nThe Total red cars are: ";
    cout<<redSum(arr, row, col);
    cout<<"\nThe Total nissan cars are: ";
    cout<<nissan(arr, row, col);
    string color;
    cout<<"\nEnter Colour : ";
    cin>>color;
    cout<<"\nAvailable cas are: "<<converter(arr, row, col, color);
    cout<<"\nCharacter switched are: \n";
    switchRC(arr, row, col);
}
