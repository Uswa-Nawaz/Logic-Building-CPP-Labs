#include<iostream>
using namespace std;


// Note: Important thing to note here is: 
// void printCars(int cars[][5], int rowSize); 
// when passing a 2D array to a function, you need to always specify the size of the second 
// dimension (columns) in order for the function to correctly iterate through the elements. 
// This information is crucial for the function to properly access the elements within each 
// row. Without specifying the column size, the function wouldn't know how far to move 
// in memory from one element to another within a row. Therefore, providing the column 
// size is essential for the function to iterate through the 2D array correctly. 
// Therefore, it is better to make the colSize variable global and use it main as well as in the 
// required function. 

void cardata(int arr[5][5],int row,int col)
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    const int row=5;
    const int col=5;
    int arr[row][col]={{12, 34, 4, 67, 56},{55, 55, 2, 63, 7}, {78, 5, 10, 65, 22}, {79, 9, 3, 55, 46}};
    cardata(arr, row, col);
}