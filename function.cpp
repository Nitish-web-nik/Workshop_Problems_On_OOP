#include<iostream>
using namespace std;
int Max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
int main()
{
    int val1, val2;
    cout<<"Enter the First Number"<<endl;
    cin>>val1;
    cout<<"Enter the Second Number"<<endl;
    cin>>val2;
    cout<<"The max of "<<val1<<" and "<<val2<<" is "<<Max(val1,val2);

    return 0;
}
