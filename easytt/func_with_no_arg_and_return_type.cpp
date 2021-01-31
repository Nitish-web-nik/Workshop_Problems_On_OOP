#include<iostream>
using namespace std;
int add(void);
int main()
{
    int ans;
    ans = add();
    cout<<ans;
    return 0;
}
int add(void)
{
    int a,b,sum;
    cout<<"Enter two numbers:- \n";
    cin>>a>>b;
    sum = a + b;
    return sum;
}
