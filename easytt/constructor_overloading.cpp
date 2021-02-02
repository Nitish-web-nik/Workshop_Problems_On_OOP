#include<iostream>
using namespace std;
class test
{
    int a, b;
public:
    test();
    test(int x);
    test(int x, int y);
    void disp();
};
test::test()
{
    a = 0;
    b = 0;
}
test::test(int x)
{
    a = b = x;
}
test::test(int x, int y)
{
    a = x;
    b = y;
}
void test::disp()
{
    cout<<"Value of A = "<<a<<endl;
    cout<<"Value of B = "<<b<<endl;
}

int main()
{
    test A;
    test B(20);
    test C(10,30);
    cout<<"Object 1"<<endl;
    A.disp();
    cout<<"Object 2"<<endl;
    B.disp();
    cout<<"Object 3"<<endl;
    C.disp();
    return 0;
}
/* Output:-
Object 1
Value of A = 0
Value of B = 0
Object 2
Value of A = 20
Value of B = 20
Object 3
Value of A = 10
Value of B = 30
*/
