/**Write a program that uses overloaded constructors and dynamically allocates memory to string.
Demonstrate the use of copy constructor.**/
#include<iostream>
using namespace std;
class complex
{
    int r,i;
public:
    complex(int &a,int &b)
    {
        r=a;
        i=b;
    }
    complex(complex &c)
    {
        r=c.r;
        i=c.i;
    }
    void show()
    {
        cout<<r<<"+"<<i<<"i"<<endl;
    }
};
int main()
{
    int *x=new int;
    int *y =new int;
    *x=4;
    *y=3;
    complex c1(*x,*y);
    complex c2(c1);
    cout<<"Number is : ";
    c1.show();
    cout<<endl;
    cout<<"Copied no. is : ";
    c2.show();
    return 0;
}
/**Output:-
Number is : 4+3i

Copied no. is : 4+3i
**/
