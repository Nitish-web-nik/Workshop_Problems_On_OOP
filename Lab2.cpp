/*Write a C++ program to enter any character. If the entered character is in lower case,
convert it into upper case. If it is in uppercase, then convert it into lower case.*/
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    if(ch>= 'A' && ch<= 'Z')
    {
        ch = ch + 32;
        cout<<ch;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        cout<<ch;
    }
    else
    {
        cout<<"Invalid Input";
    }
    return 0;
}
/**
Test Case 1:-
Input:- A
Output:- a
Test Case 2:-
Input:- b
Output:- B
Test Case 3:-
Input:- 12
Output:- Invalid Input
**/
