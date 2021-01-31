#include<iostream>
using namespace std;
void swap(int&, int&);
int main()
{
    int a,b;
    cout<<"Enter the value of a:- ";
    cin>>a;
    cout<<"Enter the value of b:- ";
    cin>>b;
    cout<<"Before swapping a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    return 0;
}
void swap(int &p, int &q)
{
    cout<<"After swapping a = "<<q <<" b = "<<p<<endl;
}
