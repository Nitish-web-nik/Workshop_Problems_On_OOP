#include<iostream>
using namespace std;
class Abc
{
   int a,b;
public:
    Abc()
    {
        a = 5;
        b = 74;
    }
    void disp(void)
    {
        cout<<"The value of A is "<<a<<endl;
        cout<<"The value of B is "<<b<<endl;
    }
};
int main()
{
    Abc t,t1;
    t.disp();
    cout<<"Value after Default Copy Constructor"<<endl;
    t1 = t;
    t1.disp();
    return 0;
}
/*Output:-
The value of A is 5
The value of B is 74
Value after Default Copy Constructor
The value of A is 5
The value of B is 74
*/
