#include<iostream>
using namespace std;
class test
{
    int code;
    float price;
public:

    test(int c, float p)
    {
        code = c;
        price = p;
    }
    test(const test &t);
    void disp()
    {
        cout<<"Code = "<<code<<endl;
        cout<<"Price = "<<price<<endl;
    }
};
test::test(const test &t)
{
    code = t.code;
    price = t.price;
}
int main()
{
    test t(4,3.5);
    test t1(t);
    test t2 = t1;
    t.disp();
    t1.disp();
    t2.disp();
    return 0;
}
/*Output
Code = 4
Price = 3.5
Code = 4
Price = 3.5
Code = 4
Price = 3.5
*/
