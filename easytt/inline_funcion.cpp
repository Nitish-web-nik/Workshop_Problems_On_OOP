#include<iostream>
using namespace std;
inline int max(int a, int b);
int main()
{
    int x,y;
    cout<<"Enter two numbers to find the max between two"<<endl;
    cin>>x>>y;
    cout<<"Max between " << x << " and " << y << " = " <<max(x,y);
    return 0;
}
int max(int p, int q)
{
    return(p>q)?p:q;
}
