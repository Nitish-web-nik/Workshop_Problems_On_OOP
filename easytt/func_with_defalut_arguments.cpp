#include<iostream>
using namespace std;
int add(int a = 5, int b = 3, int c = 2)//Here a,b and c are default arguments
{
    return (a + b + c);
}
int main()
{
    cout<<add()<<endl;//10
    cout<<add(25)<<endl;//30
    cout<<add(10,20)<<endl;//32
    cout<<add(10,20,30);//60

    return 0;
}
