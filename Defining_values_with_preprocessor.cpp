#include<iostream>
#include<string>
#define GRADE_A_THRESHOLD 80
#define GRADE_B_THRESHOLD 60
#define GRADE_C_THRESHOLD 40
using namespace std;
int main()
{
    int value = 0;
    cout << "Enter your marks between 1-100"<<endl;
    cin>> value;
    if(value > GRADE_A_THRESHOLD)
        cout<< "You are awesome and in Grade-A";
    else if( value > GRADE_B_THRESHOLD)
        cout<< "You are in Grade-B";
    else
        cout<< "You are in Grade-C";
    return 0;
}
