#include<iostream>
using namespace std;
int myInt()
{
    static int a = 0;//If we remove the keyword static from here then the output will be 11111
    return ++a;
}
int main()
{
    for(int i = 0; i<5; i++)
    {
        cout<<myInt()<<endl;
    }
    return 0;
}
