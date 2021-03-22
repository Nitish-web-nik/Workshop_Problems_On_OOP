/*Write a C++ program to print number in the following sequence by given input between
1 to 10 (Entered by the user)
*/
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number between 1 to 10"<<endl;
    cin>>number;
    if(number > 10 || number < 0)
    {
        cout<<"Wrong Input"<<endl;
    }
    else
    {
        cout<<"You have entered "<<number;
    }
    return 0;
}
/**
Test Case 1:-
Input:- 12
Output:- Wrong Input
Test Case 2:-
Input:- 8
Output:- You have entered 8
Test Case 3:-
Input:- -23
Output:- Wrong Input
**/
