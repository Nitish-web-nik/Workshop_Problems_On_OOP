#include<iostream>
using namespace std;
void Modify(int &a)
{
    a = a-1;
}
int main()
{
    int a = 10;
    Modify(a);
    cout<<a;
    return 0;
}
