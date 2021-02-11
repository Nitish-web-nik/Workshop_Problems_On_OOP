#include<iostream>
using namespace std;

class Base
{
public:
    void disp(void)
    {
        cout<<"Base class disp function."<<endl;
    }
    virtual void show(void)
    {
        cout<<"Base class show function."<<endl;
    }

};

class Derived : public Base
{
public:
    void disp(void)
    {
        cout<<"Derived class disp function."<<endl;
    }
    virtual void show(void)
    {
        cout<<"Derived class show function."<<endl;
    }
};
int main()
{
    Base *p;
    Base objb;
    Derived objd;
    p = &objb;
    p->disp();
    p->show();
    p = &objd;
    p->disp();
    p->show();
    return 0;
}
/*Output:-
Base class disp function.
Base class show function.
Base class disp function.
Derived class show function.
*/
