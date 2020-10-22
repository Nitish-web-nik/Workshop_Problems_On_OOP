#include<iostream>
using namespace std;
class myClass
{
    public:
    void operator + (myClass const & other )
    {
        cout<<"Overloaded Constructor is called"<<endl;
        return;
    }
};
int main()
{
    myClass A = myClass();
    myClass B = myClass();
    A + B;
}
