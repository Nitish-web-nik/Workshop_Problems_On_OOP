#include<iostream>
using namespace std;

class Base
{
    int a;
public:
    Base(int x)
    {
        a = x;
        cout<<"Base class Constructor is initialized"<<endl;
    }
    void dispa(void)
    {
        cout<<"The value of a is "<<a<<endl;
    }
};
class Derived:public Base
{
    int b;
public:
    Derived(int x, int y):Base(x), b(y)
    {
        cout<<"Derived Class constructor is initialized"<<endl;
    }
    void dispb(void)
    {
        cout<<"The value of b is "<<b<<endl;
    }
};
int main()
{
    Derived obj(10,20);
    obj.dispa();
    obj.dispb();
    return 0;
}
/*Output:-
Base class Constructor is initialized
Derived Class constructor is initialized
The value of a is 10
The value of b is 20
*/
