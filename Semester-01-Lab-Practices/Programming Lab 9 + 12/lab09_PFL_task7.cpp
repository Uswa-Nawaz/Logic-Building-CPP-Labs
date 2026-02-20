#include<iostream>
using namespace std;

bool check(string w, char c)
{
    bool flag=false;
    for(int i=0; i<w.length(); i++)
    {
        if(w[i]==c)
        {
            flag=true;
            break;
        }
    }
    return flag;
}

int main()
{
    string word;
    char letter;
    cout<<"Enter the word: ";
    cin>>word;
    cout<<"Enter the letter you want to check: ";
    cin>>letter;
    check(word,letter);
}