// // Task03(OP): Rubik's Cube 
// // Given a Rubik's Cube with a side length of n given as a parameter to the function 
// // named howManyStickers, print the number of individual stickers that are needed to 
// // cover the whole cube. 
// ● The Rubik's cube of side length 1 has 6 stickers. 
// ● The Rubik's cube of side length 2 has 24 stickers. 
// ● The Rubik's cube of side length 3 has 54 stickers. 
// Examples 
// howManyStickers(1) ➞ 6 
// howManyStickers(2) ➞ 24 
// howManyStickers(3) ➞ 54 
// Notes 
// ● Keep in mind there are 6 faces to keep track of. 
// ● Take the side length as input from the user and then pass it to the function

#include<iostream>
using namespace std;
void stickerCount(int side)
{
    int stickers;
    stickers=(side*side)*6;
    cout<<"The no. of stickers will be: "<<stickers;
}
int main()
{
    int side;
    cout<<"Enter the length of one side of cube: ";
    cin>>side;
    stickerCount(side);
}