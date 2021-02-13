#include <iostream>

using namespace std;

class test
{
    int a, b;
public:
    test()
    {
        a = 0;
        b = 0;
    }
    test(int x, int y)
    {
        a = x;
        b = y;
    }
    test operator +(test t);
    void disp();
};

test test::operator + (test t)
{
    test temp;
    temp.a = a + t.a;
    temp.b = b + t.b;
    return temp;
}
void test::disp()
{
    cout<<"\nThe value of A = "<<a<<endl;
    cout<<"The value of B = "<<b<<endl;
}
int main()
{
    test t1, t2, t3;
    t1 = test(10, 20);
    t2 = test(30, 40);
    t3 = t1 + t2;
    cout<<"\nThis is Object t1 ";
    t1.disp();
    cout<<"\nThis is Object t2 ";
    t2.disp();
    cout<<"\nThis is Object t3 ";
    t3.disp();
    return 0;
}
/*Output :-
This is Object t1
The value of A = 10
The value of B = 20

This is Object t2
The value of A = 30
The value of B = 40

This is Object t3
The value of A = 40
The value of B = 60
*/
