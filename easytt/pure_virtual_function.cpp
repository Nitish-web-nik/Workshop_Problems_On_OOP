#include<iostream>
using namespace std;
class Base
{
public:
    virtual void disp() = 0;
};
class D
{
public:
    void disp()
    {
        cout<<"Derived Class"<<endl;
    }
};
int main()
{
    //Base obj; is wrong
    D obj;
    obj.disp();
    /*
    Base *ptr;
    D obj;
    ptr = &obj;
    ptr->disp();*/

    return 0;
}
/*Output:- Derived Class*/
