#include<iostream>
using namespace std;

int a = 100;//global declaration

int main()
{
    int a = 200;//local declaration
    cout<<a<<endl;//a = 200
    cout<<::a;//method to access global variable
    // a = 100
    return 0;
}
