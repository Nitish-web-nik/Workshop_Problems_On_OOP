#include<iostream>
using namespace std;

class Add
{
    int a,b,t;
public:
    void getdata(void);
    void putdata(void);
};
void Add::getdata(void)
{
    cout<<"Enter two numbers to add"<<endl;
    cin>>a>>b;
    t = a + b;
}
void Add::putdata(void)
{
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<t;
}
int main()
{
    Add sum;
    sum.getdata();
    sum.putdata();
    return 0;
}
