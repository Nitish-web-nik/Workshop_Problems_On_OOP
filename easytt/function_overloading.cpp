#include<iostream>
using namespace std;
int cal(int);
int cal(int, int);
int main()
{
    int a, b, c;
    cout<<"Enter the number to calculate square :- ";
    cin>>a;
    cout<<"Square of "<<a<<" is "<<cal(a)<<endl;
    cout<<"Enter two numbers to find sum"<<endl;
    cin>>b>>c;
    cout<<"Sum of "<<b<<" and "<<c<<" is "<<cal(b,c);
    return 0;
}
int cal(int x)
{
    return x*x;
}
int cal(int p, int q)
{
    return p + q;
}
