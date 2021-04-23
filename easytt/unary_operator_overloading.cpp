#include <iostream>
using namespace std;
class test
{
    int a,b,c;
public:
    void getdata(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void operator -();
    void disp();
};
void test :: operator - ()
{
    a = -a;
    b = -b;
    c = -c;
}
void test :: disp()
{
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;
    cout<<"Value of c = "<<c<<endl;
}
int main()
{
    test obj;
    cout<<"Before applying Unary Operator Overloading"<<endl;
    obj.getdata(-10,20,30);
    obj.disp();
    cout<<"\n\nAfter applying Unary Operator Overloading"<<endl;
    -obj;
    obj.disp();
    return 0;
}

/*Output:-
Before applying Unary Operator Overloading
Value of a = -10
Value of b = 20
Value of c = 30


After applying Unary Operator Overloading
Value of a = 10
Value of b = -20
Value of c = -30
*/
