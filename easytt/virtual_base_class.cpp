#include<iostream>
using namespace std;

class A
{
    int a;
public:
    void dispa()
    {
        a = 10;
        cout<<"Class A "<<a<<endl;
    }
};

class B:public virtual A
{
    int b;
public:
    void dispb()
    {
        b = 20;
        cout<<"Class B "<<b<<endl;
    }
};

class C:public virtual A
{
    int c;
public:
    void dispc()
    {
        c = 30;
        cout<<"Class C "<<c<<endl;
    }
};

class D:public B, public C
{
    int d;
public:
    void dispd()
    {
        d = 40;
        cout<<"Class D "<<d<<endl;
    }
};

int main()
{
    D obj;
    obj.dispa();//If we don't use virtual keyword then this line will give ambiguity error because
    //of two same class A will be created as duplicates via multiple and multilevel inherit.
    obj.dispb();
    obj.dispc();
    obj.dispd();
    return 0;
}

/*Output:-
Class A 10
Class B 20
Class C 30
Class D 40
*/
