#include<iostream>
using namespace std;
class Test
{
    int a,b;
public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    friend Test sum(Test,Test);
    void disp(Test);
};
Test sum(Test t1, Test t2)
{
    Test t3;
    t3.a = t1.a + t2.a;
    t3.b = t1.b + t2.b;
    return t3;
}
void Test::disp(Test t)
{
    cout<<"Value of a "<<t.a<<endl;
    cout<<"Value of b "<<t.b<<endl;
}
int main()
{
    Test a,b,c;
    a.getdata(4,5);
    b.getdata(6,3);
    c = sum(a,b);
    a.disp(a);
    b.disp(b);
    c.disp(c);
    return 0;
}
/*Output
Value of a 4
Value of b 5
Value of a 6
Value of b 3
Value of a 10
Value of b 8
*/
