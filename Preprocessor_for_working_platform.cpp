#include<iostream>
using namespace std;
#define WIN64

int main()
{
    #ifdef WIN64
    cout<< "We are in Windows";
    #else
    #ifdef OSX
    cout<<"We are in Mac";
    #endif // WIN64
    #endif // WIN64
    return 0;
}
