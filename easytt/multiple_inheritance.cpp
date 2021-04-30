#include <iostream>
using namespace std;

class A
{
protected:
    int m;
public:
    void get_m(int);
};
void A::get_m(int x)
{
    m = x;
}

class B
{
protected:
    int n;
public:
    void get_n(int);
};
void B::get_n(int x)
{
    n = x;
}

class C:public A, public B
{
    int c;
public:
    void add();
    void disp();
};

void C::add()
{
    c  = m + n;
}

void C::disp()
{
    cout<<"The value of m "<<m<<endl;
    cout<<"The value of n "<<n<<endl;
    cout<<"The sum of m and n "<<c<<endl;
}

int main()
{
    C obj;
    obj.get_m(10);
    obj.get_n(2);
    obj.add();
    obj.disp();

    return 0;
}
/*Output:-
The value of m 10
The value of n 2
The sum of m and n 12
*/
