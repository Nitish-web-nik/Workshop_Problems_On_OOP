#include<iostream>
using namespace std;
int main()
{
    int* pint = nullptr;
    pint = new int;
    cout<<"pint = "<< pint;
    delete pint;
    cout<<"\npint = "<< pint;
    pint = new int{12345};
    cout<<"\n*pint = "<<*pint;
    delete pint;
    return 0;
}
