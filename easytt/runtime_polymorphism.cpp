#include<iostream>
using namespace std;

class A
{
public:
    virtual void disp() = 0;
};

class B:public A
{
    int val1;
public:
    B(int x)
    {
       val1 = x;
    }
    void disp()
    {
        cout<<"Val1 in class B "<<val1<<endl;
    }
};

class C:public A
{
    int val2;
public:
    C(int x)
    {
        val2 = x;
    }
    void disp()
    {
        cout<<"Val2 in class C "<<val2<<endl;
    }
};
int main()
{
    /*
    A *bp;
    B objb(100);
    C objc(200);
    bp = &objb;
    bp->disp();
    bp = &objc;
    bp->disp();
    or
    */
    A *bp[2];
    B objb(100);
    C objc(200);
    bp[0] = &objb;
    bp[1] = &objc;
    bp[0]->disp();
    bp[1]->disp();
    return 0;
}
/*Output:-
Val1 in class B 100
Val2 in class C 200
*/
