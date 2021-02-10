#include<iostream>
using namespace std;
class Base
{
protected:
    int b;
public:
    void setb(int x)
    {
        b = x;
    }
    void disp(void)
    {
        cout<<"\nThis is a Base Class"<<endl;
        cout<<"Value of B = "<<b<<endl;
    }
};

class Derived:public Base
{
    int d;
public:
    void setd(int y)
    {
        d = y;
    }
    void disp(void)
    {
        cout<<"\nDerived Class"<<endl;
        cout<<"Value of B = "<<b<<endl;
        cout<<"Value of D = "<<d<<endl;
    }
};

int main()
{
    Base *bp;
    Base b;
    bp = &b;
    bp->setb(10);
    cout<<"bp points to Base Object"<<endl;
    bp->disp();
    Derived d;
    bp  = &d;
   // bp->setd(20)  This is invalid.Pointer can access directly only the member function
   //or data member defined inside the parent class
   bp->setb(20);
   cout<<"bp is now pointing to derived object"<<endl;
   bp->disp();//disp function of Base class will be invoked not of Derived Class
   Derived *dp;
   dp = &d;
   dp->setd(30);
   cout<<"Derived type Pointer"<<endl;
   dp->disp();

   cout<<"\nUsing (Derived*)bp"<<endl;
   ((Derived*)bp)->setd(40);
   ((Derived*)bp)->disp();
    return 0;
}
