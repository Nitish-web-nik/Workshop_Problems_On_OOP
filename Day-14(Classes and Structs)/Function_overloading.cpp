#include<iostream>
using namespace std;


class Cal
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }
    static int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main(void)
{
    Cal C;
    int p,q;

    cout<<C.add(3,4)<<endl;
    cout<<C.add(1,2,3)<<endl;
    p = Cal::add(2,4);
    q = Cal::add(4,5,6);
    cout<<p<<endl<<q;
    /*We can both use class with dot operator or class with scope resolution operator
    to handle static member function in class*/
    return 0;
}
