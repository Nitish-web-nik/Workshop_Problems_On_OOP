#include<iostream>
using namespace std;

class A
{
    int a;
public:
    A(int x)
    {
        a = x;
        cout<<"A class Constructor is initialized"<<endl;
    }
    void dispa(void)
    {
        cout<<"The value of a is :- "<<a<<endl;
    }
};

class B
{
    int b;
public:
    B(int y)
    {
        b = y;
        cout<<"B class Constructor is initialized"<<endl;
    }
    void dispb(void)
    {
        cout<<"The value of b is :- "<<b<<endl;
    }
};

class C: public B, public A      //multiple inheritance, here B class is first given
//so B class constructor will be initialized before A Class
{
    int m;
public:
    C( int x, int y, int z ):A(x),B(y)
    {
        m = z;
        cout<<"C class Constructor is initialized"<<endl;
    }
    void dispc(void)
    {
        cout<<"The value of m is :- "<<m<<endl;
    }
};

int main()
{
    C obj(10,20,30);
    obj.dispa();
    obj.dispb();
    obj.dispc();
    return 0;
}
/*Output :-
B class Constructor is initialized
A class Constructor is initialized
C class Constructor is initialized
The value of a is :- 10
The value of b is :- 20
The value of m is :- 30
*/
