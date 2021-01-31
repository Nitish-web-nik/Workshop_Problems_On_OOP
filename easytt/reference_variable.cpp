#include<iostream>
using namespace std;
int main()
{
    int a = 30;
    int &ref = a;
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of ref = "<<ref<<endl;
    cout<<"Address of a = "<<&a<<endl;
    cout<<"Address of ref = "<<&ref<<endl;
    return 0;
}
/*
Value of a = 30
Value of ref = 30
Address of a = 0x78fe14
Address of ref = 0x78fe14

*/
