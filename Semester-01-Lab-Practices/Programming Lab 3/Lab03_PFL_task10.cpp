// Task10(OP):You are developing a C++ program to keep track of a cricket team's
// performance in the Asia Cup tournament. The program needs to take the number of wins,
// draws, and losses as input and calculate the number of points the cricket team has obtained so
// far, based on the following rules:
// ● Wins get 3 points.
// ● Draws get 1 point.
// ● Losses get 0 points.

#include<iostream>
using namespace std;
int countScore(int wins, int draws, int losses)
{
    wins=wins*3;
    draws=draws*1;
    losses=losses*0;
    int totalscore=0;
    totalscore=wins+draws+losses;
    // a better approach is ------------> int totalScore = (wins * 3) + (draws * 1) + (losses * 0);
    return totalscore;
}
int main()
{
    int wins;
    int draws;
    int losses;
    cout<<"Enter the no. of wins: ";
    cin>>wins;
    cout<<"Enter the no. of losses: ";
    cin>>losses;
    cout<<"Enter the no. of draws: ";
    cin>>draws;
    int finalscore;
    finalscore=countScore( wins, draws, losses);
    cout<<"Your total score will be: "<<finalscore;
}